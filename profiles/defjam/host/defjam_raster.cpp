#include "defjam_raster.hpp"

#include "defjam_ge.hpp"
#include "defjam_gpu.hpp"
#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <condition_variable>
#include <functional>
#include <mutex>
#include <thread>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>

namespace defjam {
namespace {

// The frame buffer registers: pointer and row width.
constexpr std::uint8_t kCmdFrameBufferPointer = 0x9Cu;
constexpr std::uint8_t kCmdFrameBufferWidth = 0x9Du;

// The PSP display is 480 by 272 inside a buffer that is usually wider.
constexpr std::uint32_t kDisplayWidth = 480u;
constexpr std::uint32_t kDisplayHeight = 272u;

// Where the GE frame buffer offsets are measured from.
constexpr std::uint32_t kVramBase = 0x04000000u;
constexpr std::uint32_t kVramSize = 2u * 1024u * 1024u;

RasterStats g_stats;
// Set for the duration of one draw, so the inner loop does not re-read the
// register file per pixel.
bool g_clearing = false;
bool g_through_draw = false;

// The frame buffer, kept host-side while a frame is drawn and pushed back to
// guest memory afterwards. Reading and writing single pixels through the guest
// memory accessors would dominate the cost of drawing.
std::vector<std::uint32_t> g_surface;
RenderTarget g_surface_target;

// The depth buffer is 16 bits per pixel.
std::vector<std::uint16_t> g_depth;

// Makes the host copy match the target, growing it if the target changed.
void bind_surface(psprecomp::Runtime &runtime, const RenderTarget &target) {
    if (g_surface_target.address == target.address && g_surface_target.stride == target.stride &&
        g_surface_target.height == target.height && !g_surface.empty()) {
        return;
    }
    flush_surface(runtime);
    g_surface_target = target;
    g_surface.assign(static_cast<std::size_t>(target.stride) * target.height, 0u);
    g_depth.assign(g_surface.size(), 0u);
    const std::uint32_t bytes = target.stride * target.height * 4u;
    if (runtime.memory().contains(target.address, bytes)) {
        std::vector<std::uint8_t> staging(bytes);
        runtime.memory().copy_out(target.address, staging);
        std::memcpy(g_surface.data(), staging.data(), bytes);
    }
}

// Depth state. Register numbers are the published GE commands; 0xD3 among them
// is the clear-mode register this profile had already identified by correlating
// it with the title's screen-clearing draws, which is a useful cross-check.
constexpr std::uint8_t kCmdDepthTestEnable = 0x23u;
constexpr std::uint8_t kCmdDepthTest = 0xDEu;
constexpr std::uint8_t kCmdDepthWriteDisable = 0xE7u;

// Comparison codes, in the order the hardware numbers them.
enum : std::uint32_t {
    kCompareNever = 0u,
    kCompareAlways = 1u,
    kCompareEqual = 2u,
    kCompareNotEqual = 3u,
    kCompareLess = 4u,
    kCompareLessEqual = 5u,
    kCompareGreater = 6u,
    kCompareGreaterEqual = 7u,
};


// Latched once per draw rather than read per pixel.
bool g_depth_test = false;
bool g_depth_write = true;
std::uint32_t g_depth_compare = kCompareGreaterEqual;
// Which buffers a clear writes, from bits 8 to 10 of the clear-mode operand.
bool g_clear_color = true;
bool g_clear_depth = false;

bool depth_passes(std::uint16_t incoming, std::uint16_t stored) {
    switch (g_depth_compare) {
    case kCompareNever: return false;
    case kCompareAlways: return true;
    case kCompareEqual: return incoming == stored;
    case kCompareNotEqual: return incoming != stored;
    case kCompareLess: return incoming < stored;
    case kCompareLessEqual: return incoming <= stored;
    case kCompareGreater: return incoming > stored;
    default: return incoming >= stored;
    }
}

// Vertices arrive carrying depth already in the buffer range: a through-mode
// draw states it directly and the transform maps its clip depth into the same
// range before handing it over. Only clamping is left to do here.
//
// Conflating the two conventions is what broke this the first time. A clear
// sprite states depth 0, but run through a normalised-device mapping that
// becomes the middle of the range, so the clear filled the depth buffer with
// 32767 and every transformed draw behind it failed the test. The screen went
// black again with nothing in the colour path at fault.
std::uint16_t to_depth(float depth) {
    if (!(depth > 0.0f)) return 0u;
    if (depth > 65535.0f) return 65535u;
    // Rounded, not truncated. Interpolating depth across a triangle whose
    // vertices share one value still lands a hair under it, and truncation
    // turns that into a whole unit lower - enough for a GEQUAL test to reject
    // a pixel that is at exactly the same depth as what is already there.
    // Every draw after the first then loses a scattering of pixels.
    return static_cast<std::uint16_t>(depth + 0.5f);
}

// Clear mode, measured rather than assumed: register 0xD3 is non-zero exactly
// while this title draws its screen-clearing sprites and zero for every other
// draw. Its low bit enables the mode and bits 8 to 10 say which buffers are
// written.
//
// In clear mode the hardware writes the colour straight through. Blending it
// instead loses the clear entirely whenever the clear colour is transparent,
// which is what this title uses - so the screen was never cleared and every
// frame came out as whatever the buffer already held.
constexpr std::uint8_t kCmdClearMode = 0xD3u;

bool clear_mode_active() { return (ge_registers()[kCmdClearMode] & 1u) != 0u; }

// What the title asks for when it blends, as far as anything here can tell.
//
// This rasteriser does one fixed source over destination for every pixel, and
// the hardware picks an equation and two factors out of registers. Finding
// which registers those are is unfinished, and this counter is what is left of
// the attempt.
//
// 0xE0 below is NOT the blend enable. It reads zero across 484,098,006 pixels
// of a run while the title plainly blends - it draws antialiased text and
// translucent panels - so a constant zero says the register is wrong, not that
// the title never blends. Acting on it as though it were the enable bit turned
// a verified frame from 1937 colours into 754 and was reverted.
//
// The bone matrices went the same way: 0x38 and 0x39 were wrong and never
// appeared at all, and what found the real pair was the shape of the command
// stream rather than a remembered constant. The same is needed here.
constexpr std::uint8_t kCmdBlendEnable = 0x1Eu;
constexpr std::uint8_t kCmdBlendMode = 0xE1u;

std::map<std::uint64_t, std::uint64_t> g_blend_modes;

// Which register gates blending, decided by correlation rather than by a
// remembered number.
//
// A pixel needs blending exactly when its alpha is short of full. If a register
// is the blend enable then the pixels with partial alpha are drawn with it on
// and the opaque ones with it off; a register that has nothing to do with
// blending shows no such split. Two candidates came out of scanning every
// register the title writes for enable-shaped values: 0x1D, toggled 4,220
// times, and 0x1E, toggled 14,440.
constexpr std::uint8_t kCandidateA = 0x1Du;
constexpr std::uint8_t kCandidateB = 0x1Eu;

struct BlendCorrelation {
    std::uint64_t on_partial{};
    std::uint64_t on_opaque{};
    std::uint64_t off_partial{};
    std::uint64_t off_opaque{};
};
BlendCorrelation g_candidate_a;
BlendCorrelation g_candidate_b;

void note_blend_correlation(std::uint32_t color) {
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    const bool partial = ((color >> 24u) & 0xFFu) != 255u;
    const auto tally = [partial](BlendCorrelation &into, bool on) {
        if (on) {
            if (partial) ++into.on_partial;
            else ++into.on_opaque;
        } else {
            if (partial) ++into.off_partial;
            else ++into.off_opaque;
        }
    };
    tally(g_candidate_a, (registers[kCandidateA] & 1u) != 0u);
    tally(g_candidate_b, (registers[kCandidateB] & 1u) != 0u);
}

void note_blend_state() {
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    const std::uint64_t seen =
        (static_cast<std::uint64_t>(registers[kCmdBlendEnable] & 1u) << 32u) |
        (registers[kCmdBlendMode] & 0x00FFFFFFu);
    ++g_blend_modes[seen];
}

std::uint32_t blend_over(std::uint32_t source, std::uint32_t destination) {
    const std::uint32_t alpha = (source >> 24u) & 0xFFu;
    if (alpha == 255u) return source;
    if (alpha == 0u) return destination;
    const auto mix = [alpha](std::uint32_t a, std::uint32_t b) {
        return (a * alpha + b * (255u - alpha) + 127u) / 255u;
    };
    return 0xFF000000u | (mix((source >> 16u) & 0xFFu, (destination >> 16u) & 0xFFu) << 16u) |
           (mix((source >> 8u) & 0xFFu, (destination >> 8u) & 0xFFu) << 8u) |
           mix(source & 0xFFu, destination & 0xFFu);
}

void put_pixel(std::int32_t x, std::int32_t y, std::uint32_t color, float ndc_z) {
    if (x < 0 || y < 0) return;
    const auto ux = static_cast<std::uint32_t>(x);
    const auto uy = static_cast<std::uint32_t>(y);
    if (ux >= g_surface_target.width || uy >= g_surface_target.height) return;
    const std::size_t at = static_cast<std::size_t>(uy) * g_surface_target.stride + ux;

    // A clear writes whichever buffers its operand names and skips the test.
    const std::uint16_t depth = to_depth(ndc_z);
    if (g_clearing) {
        if (g_clear_depth && at < g_depth.size()) g_depth[at] = depth;
        if (!g_clear_color) return;
    } else {
        if (g_depth_test && at < g_depth.size()) {
            if (!depth_passes(depth, g_depth[at])) {
                ++g_stats.depth_rejected;
                if (g_through_draw) ++g_stats.depth_rejected_through;
                return;
            }
        }
        if (g_depth_write && at < g_depth.size()) g_depth[at] = depth;
    }

    std::uint32_t &target = g_surface[at];
    if ((color & 0xFF000000u) == 0u) ++g_stats.transparent_writes;
    if ((color & 0x00FFFFFFu) != 0u) ++g_stats.coloured_writes;
    note_blend_state();
    note_blend_correlation(color);
    // Blending happens when the hardware is told to blend, and not otherwise.
    //
    // This used to blend every pixel unconditionally. Measured on a run, the
    // title asks for blending on none of them - register 0xE0 reads zero for
    // all 484,098,006 - so every one of those was mixed with what lay under it
    // when the hardware would have written it straight through. It also meant a
    // pixel with an alpha of zero was dropped rather than written, and a run
    // counted 1.36 billion of those.
    // Blending happens when the hardware is told to blend.
    //
    // Which register says so was decided by correlation, not recall: of every
    // register this title writes, 0x1E is the one whose state tracks what is
    // being drawn - on for 94% of the pixels that carry partial alpha and off
    // for 60% of the opaque ones. 0x1D is on for everything and gates nothing,
    // and 0xE0, which an earlier guess used, is written three times in a run
    // and always zero.
    //
    // 19,434,256 pixels of one run carry partial alpha with blending off. The
    // hardware writes those straight through; mixing them in was wrong.
    const bool blending = (ge_registers()[kCmdBlendEnable] & 1u) != 0u;
    // A fully transparent pixel is left alone whatever the blend state says.
    //
    // The hardware discards those with its alpha test, which this rasteriser
    // does not implement. Writing them because blending happens to be off put
    // opaque black over every menu entry on the match type screen: the title
    // draws them as transparent quads and relies on the test, not the blend, to
    // drop them. Only the partial alphas take the new path.
    if (!blending && ((color >> 24u) & 0xFFu) == 0u) return;
    target = (g_clearing || !blending) ? (color | 0xFF000000u) : blend_over(color, target);
    ++g_stats.pixels_written;
}

// Nearest-neighbour sampling, with the coordinate wrapped rather than clamped,
// which is what the hardware does by default.
std::uint32_t sample(const std::vector<std::uint32_t> &texels, const TextureState &texture, float u,
                     float v, bool uv_in_texels) {
    if (texels.empty() || texture.width == 0u || texture.height == 0u) return 0xFFFFFFFFu;
    if (!uv_in_texels) {
        // A transformed draw carries normalised coordinates; they only become
        // texels once scaled by the texture size.
        u *= static_cast<float>(texture.width);
        v *= static_cast<float>(texture.height);
    }
    auto wrap = [](float value, std::uint32_t size) {
        auto index = static_cast<std::int64_t>(value);
        index %= static_cast<std::int64_t>(size);
        if (index < 0) index += size;
        return static_cast<std::uint32_t>(index);
    };
    const std::uint32_t x = wrap(u, texture.width);
    const std::uint32_t y = wrap(v, texture.height);
    return texels[static_cast<std::size_t>(y) * texture.width + x];
}


// Filling a primitive across several threads.
//
// Rows inside one primitive do not depend on each other - put_pixel touches a
// single pixel and nothing reads a neighbour - so handing each thread its own
// band of rows produces the same pixels the serial loop did, in the same order
// per pixel. That matters more here than the speed: this rasteriser is the
// reference the card is checked against, and a reference that changes when it
// is made faster is worth nothing.
//
// Only large primitives are split. Waking threads costs more than filling a
// triangle a few pixels tall, and a run issues millions of those; the fills
// worth splitting are the backgrounds and the screen-clearing sprites.
//
// PSPRECOMP_DEFJAM_RASTER_THREADS sets the count, 1 disables it, and the
// default is what the machine reports.
class RowWorkers {
public:
    static RowWorkers &instance() {
        static RowWorkers workers;
        return workers;
    }

    [[nodiscard]] std::uint32_t count() const { return width_; }

    void run(std::int32_t first, std::int32_t last,
             const std::function<void(std::int32_t, std::int32_t)> &band) {
        const std::int32_t rows = last - first + 1;
        if (width_ <= 1u || rows < static_cast<std::int32_t>(width_)) {
            band(first, last);
            return;
        }
        {
            std::unique_lock<std::mutex> guard(mutex_);
            band_ = &band;
            first_ = first;
            rows_ = rows;
            finished_ = 0u;
            ++generation_;
            start_.notify_all();
        }
        // The calling thread takes the first band rather than waiting for one.
        run_band(0u);
        {
            std::unique_lock<std::mutex> guard(mutex_);
            ++finished_;
            done_.wait(guard, [this] { return finished_ == width_; });
        }
        band_ = nullptr;
    }

    ~RowWorkers() {
        {
            std::unique_lock<std::mutex> guard(mutex_);
            stopping_ = true;
            start_.notify_all();
        }
        for (std::thread &thread : threads_) {
            if (thread.joinable()) thread.join();
        }
    }

private:
    RowWorkers() {
        std::uint32_t requested = std::thread::hardware_concurrency();
        if (requested == 0u) requested = 1u;
        if (const char *text = std::getenv("PSPRECOMP_DEFJAM_RASTER_THREADS")) {
            const unsigned long parsed = std::strtoul(text, nullptr, 0);
            if (parsed != 0u) requested = static_cast<std::uint32_t>(parsed);
        }
        width_ = std::min<std::uint32_t>(requested, 64u);
        for (std::uint32_t i = 1u; i < width_; ++i) {
            threads_.emplace_back([this, i] { worker(i); });
        }
    }

    // Contiguous bands, so a thread walks memory the way the serial loop did.
    void run_band(std::uint32_t index) {
        const std::int32_t base = rows_ / static_cast<std::int32_t>(width_);
        const std::int32_t extra = rows_ % static_cast<std::int32_t>(width_);
        const auto slot = static_cast<std::int32_t>(index);
        const std::int32_t start = first_ + slot * base + std::min(slot, extra);
        const std::int32_t length = base + (slot < extra ? 1 : 0);
        if (length > 0) (*band_)(start, start + length - 1);
    }

    void worker(std::uint32_t index) {
        std::uint32_t seen = 0u;
        for (;;) {
            {
                std::unique_lock<std::mutex> guard(mutex_);
                start_.wait(guard, [this, seen] { return stopping_ || generation_ != seen; });
                if (stopping_) return;
                seen = generation_;
            }
            run_band(index);
            {
                std::unique_lock<std::mutex> guard(mutex_);
                if (++finished_ == width_) done_.notify_all();
            }
        }
    }

    std::vector<std::thread> threads_;
    std::mutex mutex_;
    std::condition_variable start_;
    std::condition_variable done_;
    const std::function<void(std::int32_t, std::int32_t)> *band_{};
    std::int32_t first_{};
    std::int32_t rows_{};
    std::uint32_t generation_{};
    std::uint32_t finished_{};
    std::uint32_t width_{1u};
    bool stopping_{};
};

// Below this a primitive is filled where it stands. Measured against the shapes
// this title draws: its screen-clearing sprites cover 130,560 pixels and its
// character triangles a few dozen, and only the first kind is worth waking a
// thread for.
constexpr std::int64_t kSplitThreshold = 16384;

void fill_rows(std::int32_t first, std::int32_t last, std::int32_t width,
               const std::function<void(std::int32_t, std::int32_t)> &band) {
    const std::int64_t area = static_cast<std::int64_t>(last - first + 1) *
                              static_cast<std::int64_t>(width);
    if (area < kSplitThreshold) {
        band(first, last);
        return;
    }
    RowWorkers::instance().run(first, last, band);
}

// A sprite is two vertices: the corners of an axis-aligned rectangle. The
// second carries the colour the hardware uses for the whole thing.
void draw_sprite(const Vertex &first, const Vertex &second, const std::vector<std::uint32_t> &texels,
                 const TextureState &texture, bool textured, bool uv_in_texels) {
    const auto x0 = static_cast<std::int32_t>(std::min(first.x, second.x));
    const auto x1 = static_cast<std::int32_t>(std::max(first.x, second.x));
    const auto y0 = static_cast<std::int32_t>(std::min(first.y, second.y));
    const auto y1 = static_cast<std::int32_t>(std::max(first.y, second.y));
    const float span_x = std::max(1.0f, second.x - first.x);
    const float span_y = std::max(1.0f, second.y - first.y);

    const auto band = [&](std::int32_t from, std::int32_t to) {
    for (std::int32_t y = from; y <= to; ++y) {
        for (std::int32_t x = x0; x < x1; ++x) {
            std::uint32_t color = second.color;
            if (textured) {
                const float t = (static_cast<float>(x) - first.x) / span_x;
                const float s = (static_cast<float>(y) - first.y) / span_y;
                color = sample(texels, texture, first.u + t * (second.u - first.u),
                               first.v + s * (second.v - first.v), uv_in_texels);
            }
            put_pixel(x, y, color, second.z);
        }
    }
    };
    if (y1 > y0) fill_rows(y0, y1 - 1, x1 - x0, band);
}

// Flat-filled triangle with barycentric interpolation for colour and texture.
void draw_triangle(const Vertex &a, const Vertex &b, const Vertex &c,
                   const std::vector<std::uint32_t> &texels, const TextureState &texture,
                   bool textured, bool uv_in_texels) {
    const auto min_x = static_cast<std::int32_t>(std::floor(std::min({a.x, b.x, c.x})));
    const auto max_x = static_cast<std::int32_t>(std::ceil(std::max({a.x, b.x, c.x})));
    const auto min_y = static_cast<std::int32_t>(std::floor(std::min({a.y, b.y, c.y})));
    const auto max_y = static_cast<std::int32_t>(std::ceil(std::max({a.y, b.y, c.y})));

    const float area = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    if (area == 0.0f) return;   // degenerate, nothing to fill
    const float inverse = 1.0f / area;

    const auto band = [&](std::int32_t from, std::int32_t to) {
    for (std::int32_t y = from; y <= to; ++y) {
        for (std::int32_t x = min_x; x <= max_x; ++x) {
            const float px = static_cast<float>(x) + 0.5f;
            const float py = static_cast<float>(y) + 0.5f;
            const float w0 = ((b.x - a.x) * (py - a.y) - (b.y - a.y) * (px - a.x)) * inverse;
            const float w1 = ((c.x - b.x) * (py - b.y) - (c.y - b.y) * (px - b.x)) * inverse;
            const float w2 = ((a.x - c.x) * (py - c.y) - (a.y - c.y) * (px - c.x)) * inverse;
            // Accept either winding, since nothing here culls faces yet.
            const bool inside = (w0 >= 0.0f && w1 >= 0.0f && w2 >= 0.0f) ||
                                (w0 <= 0.0f && w1 <= 0.0f && w2 <= 0.0f);
            if (!inside) continue;

            const float total = w0 + w1 + w2;
            if (total == 0.0f) continue;
            const float ba = w1 / total, bb = w2 / total, bc = w0 / total;
            std::uint32_t color = a.color;
            if (textured) {
                color = sample(texels, texture, a.u * ba + b.u * bb + c.u * bc,
                               a.v * ba + b.v * bb + c.v * bc, uv_in_texels);
            }
            put_pixel(x, y, color, a.z * ba + b.z * bb + c.z * bc);
        }
    }
    };
    fill_rows(min_y, max_y, max_x - min_x + 1, band);
}

} // namespace

void flush_surface(psprecomp::Runtime &runtime) {
    // With the card drawing, the frame lives in its render target and comes
    // back from there. The host surface is not written at all in that case, so
    // pushing it would overwrite the frame with a blank one.
    if (gpu_enabled()) {
        gpu_resolve(runtime);
        return;
    }
    if (g_surface.empty() || !g_surface_target.valid()) return;
    const std::uint32_t bytes = g_surface_target.stride * g_surface_target.height * 4u;
    if (!runtime.memory().contains(g_surface_target.address, bytes)) return;
    runtime.memory().copy_in(
        g_surface_target.address,
        std::span<const std::uint8_t>(reinterpret_cast<const std::uint8_t *>(g_surface.data()),
                                      bytes));
}

RenderTarget current_render_target() {
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    RenderTarget target;
    const std::uint32_t width_register = registers[kCmdFrameBufferWidth];
    // The frame buffer pointer is an offset into EDRAM, not a CPU address: the
    // two buffers this title flips between sit at 0 and 0x90000, which is
    // exactly one 512 by 288 buffer apart. Anything inside EDRAM is therefore
    // rebased onto it; a value past the end is taken as already absolute.
    const std::uint32_t offset = ((width_register & 0x00FF0000u) << 8u) |
                                 (registers[kCmdFrameBufferPointer] & 0x00FFFFF0u);
    target.address = offset < kVramSize ? (kVramBase + offset) : offset;
    target.stride = width_register & 0x0000FFFFu;
    target.width = std::min(kDisplayWidth, target.stride);
    target.height = kDisplayHeight;
    return target;
}

// Writing pixels is most of what a run spends its time on, and most bugs are
// not about pixels. PSPRECOMP_DEFJAM_NO_RASTER keeps every stage that decides
// what to draw - the display list, the vertex decode, the texture state - and
// drops only the writing, which makes a boot-to-somewhere run fast enough to
// iterate on. The frame is meaningless afterwards, so the counter says so.
bool raster_disabled() {
    static const bool disabled = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_NO_RASTER");
        return text != nullptr && *text != 0 && *text != 48;
    }();
    return disabled;
}

bool rasterise(psprecomp::Runtime &runtime, std::uint32_t primitive,
               const std::vector<Vertex> &vertices, const VertexFormat &format,
               const TextureState &texture, bool positions_are_screen) {
    if (raster_disabled()) {
        ++g_stats.primitives_skipped;
        return false;
    }

    if (gpu_enabled()) {
        // Asking for the card and quietly getting the CPU would make a
        // comparison between the two meaningless, so a device that will not
        // start says so once and the report repeats it.
        static const bool ready = [] {
            std::string error;
            if (gpu_initialize(error)) return true;
            std::cerr << "the graphics backend did not start, drawing on the CPU: " << error
                      << "\n";
            return false;
        }();
        if (ready) {
            const RenderTarget target = current_render_target();
            if (!target.valid()) {
                ++g_stats.no_target;
                return false;
            }
            gpu_set_target(target.address, target.stride, target.width, target.height);
            const bool drawn = gpu_draw(runtime, primitive, vertices, format, texture,
                                        clear_mode_active());
            if (drawn) ++g_stats.primitives_drawn;
            else ++g_stats.primitives_skipped;
            return drawn;
        }
    }
    // Only screen-space draws. A transformed one needs the matrix pipeline,
    // and drawing it with its raw coordinates would put geometry in the wrong
    // place while looking like a rendering fault.
    if (!positions_are_screen || vertices.size() < 2u) {
        ++g_stats.primitives_skipped;
        return false;
    }

    const RenderTarget target = current_render_target();
    if (!target.valid()) {
        ++g_stats.no_target;
        return false;
    }
    bind_surface(runtime, target);
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    g_clearing = clear_mode_active();
    g_through_draw = format.through;
    static const bool depth_disabled = std::getenv("PSPRECOMP_DEFJAM_NO_DEPTH") != nullptr;
    g_depth_test = !depth_disabled && (registers[kCmdDepthTestEnable] & 1u) != 0u;
    g_depth_write = (registers[kCmdDepthWriteDisable] & 1u) == 0u;
    g_depth_compare = registers[kCmdDepthTest] & 0x7u;
    // Bits 8 to 10 of the clear operand say which buffers it touches.
    const std::uint32_t clear_mask = (registers[kCmdClearMode] >> 8u) & 0x7u;
    g_clear_color = (clear_mask & 1u) != 0u;
    g_clear_depth = (clear_mask & 4u) != 0u;

    // The texture, if this draw samples one.
    static std::vector<std::uint32_t> texels;
    static std::uint32_t cached_address = 0u;
    static std::uint32_t cached_signature = 0u;
    const bool textured = texture.enabled && texture.valid() && format.texture != 0u;
    if (textured) {
        const std::uint32_t signature = texture.width ^ (texture.height << 12u) ^
                                        (static_cast<std::uint32_t>(texture.format) << 24u);
        if (texture.address != cached_address || signature != cached_signature) {
            std::string error;
            if (!decode_texture(runtime, texture, texels, error)) texels.clear();
            cached_address = texture.address;
            cached_signature = signature;
        }
    }

    std::uint64_t drawn = 0u;
    switch (primitive) {
    case 6:   // sprites, in pairs
        for (std::size_t i = 0; i + 1u < vertices.size(); i += 2u) {
            draw_sprite(vertices[i], vertices[i + 1u], texels, texture, textured, format.through);
            ++drawn;
        }
        break;
    case 3:   // independent triangles
        for (std::size_t i = 0; i + 2u < vertices.size(); i += 3u) {
            draw_triangle(vertices[i], vertices[i + 1u], vertices[i + 2u], texels, texture,
                          textured, format.through);
            ++drawn;
        }
        break;
    case 4:   // triangle strip
        for (std::size_t i = 0; i + 2u < vertices.size(); ++i) {
            draw_triangle(vertices[i], vertices[i + 1u], vertices[i + 2u], texels, texture,
                          textured, format.through);
            ++drawn;
        }
        break;
    case 5:   // triangle fan
        for (std::size_t i = 1; i + 1u < vertices.size(); ++i) {
            draw_triangle(vertices[0], vertices[i], vertices[i + 1u], texels, texture, textured,
                          format.through);
            ++drawn;
        }
        break;
    default:
        ++g_stats.primitives_skipped;
        return false;
    }

    g_stats.primitives_drawn += drawn;
    if (textured) ++g_stats.textured_primitives;
    return true;
}

void raster_reset() {
    g_stats = RasterStats{};
    g_surface.clear();
    g_surface_target = RenderTarget{};
}

RasterStats raster_stats() { return g_stats; }

std::string blend_correlation_report() {
    std::ostringstream out;
    const auto line = [&out](const char *name, const BlendCorrelation &c) {
        const std::uint64_t partial = c.on_partial + c.off_partial;
        const std::uint64_t opaque = c.on_opaque + c.off_opaque;
        out << "    " << name << "  partial alpha: " << c.on_partial << " on / " << c.off_partial
            << " off";
        if (partial != 0u) out << "  (" << (100u * c.on_partial / partial) << "% on)";
        out << "\n              opaque:        " << c.on_opaque << " on / " << c.off_opaque
            << " off";
        if (opaque != 0u) out << "  (" << (100u * c.on_opaque / opaque) << "% on)";
        out << "\n";
    };
    out << "  blend enable candidates:\n";
    line("0x1D", g_candidate_a);
    line("0x1E", g_candidate_b);
    return out.str();
}

std::string blend_report() {
    if (g_blend_modes.empty()) return {};
    std::ostringstream out;
    out << "  blend modes:        " << g_blend_modes.size() << " distinct" << "\n";
    std::vector<std::pair<std::uint64_t, std::uint64_t>> sorted(g_blend_modes.begin(),
                                                                g_blend_modes.end());
    std::sort(sorted.begin(), sorted.end(),
              [](const auto &a, const auto &b) { return a.second > b.second; });
    for (std::size_t i = 0; i < sorted.size() && i < 8u; ++i) {
        const auto mode = static_cast<std::uint32_t>(sorted[i].first & 0xFFFFFFFFu);
        out << "    enable " << ((sorted[i].first >> 32u) & 1u) << "  equation "
            << ((mode >> 8u) & 0x7u) << "  source " << (mode & 0xFu) << "  dest "
            << ((mode >> 4u) & 0xFu) << "   " << sorted[i].second << " pixels" << "\n";
    }
    return out.str();
}

std::string raster_report() {
    std::ostringstream out;
    out << "  raster alpha:       " << g_stats.transparent_writes << " fully transparent, "
        << g_stats.coloured_writes << " with colour" << "\n";
    out << "  raster:             " << g_stats.primitives_drawn << " drawn, "
        << g_stats.primitives_skipped << " skipped, " << g_stats.no_target << " without a target\n"
        << "  raster pixels:      " << g_stats.pixels_written << " written, "
        << g_stats.textured_primitives << " textured draws, " << g_stats.depth_rejected
        << " pixels failed the depth test (" << g_stats.depth_rejected_through
        << " of them screen-space)\n";
    return out.str();
}

std::string frame_dump_path() {
    const char *path = std::getenv("PSPRECOMP_DEFJAM_FRAME_DUMP");
    return path == nullptr ? std::string{} : std::string(path);
}

bool dump_display(psprecomp::Runtime &runtime, const std::string &path, std::string &error) {
    flush_surface(runtime);
    const RenderTarget target = g_surface_target.valid() ? g_surface_target : current_render_target();
    if (!target.valid()) {
        error = "no frame buffer has been drawn into";
        return false;
    }
    const std::uint32_t bytes = target.stride * target.height * 4u;
    if (!runtime.memory().contains(target.address, bytes)) {
        error = "the frame buffer is not inside guest memory";
        return false;
    }
    std::vector<std::uint8_t> pixels(bytes);
    runtime.memory().copy_out(target.address, pixels);

    std::ofstream file(path, std::ios::binary);
    if (!file) {
        error = "could not open " + path;
        return false;
    }

    // A 32-bit BMP, bottom-up, so any viewer opens it without a library here.
    const std::uint32_t width = target.width;
    const std::uint32_t height = target.height;
    const std::uint32_t image_bytes = width * height * 4u;
    const std::uint32_t file_bytes = 54u + image_bytes;
    const auto put16 = [&file](std::uint16_t value) {
        const std::uint8_t bytes[2] = {static_cast<std::uint8_t>(value),
                                       static_cast<std::uint8_t>(value >> 8u)};
        file.write(reinterpret_cast<const char *>(bytes), 2);
    };
    const auto put32 = [&file](std::uint32_t value) {
        const std::uint8_t bytes[4] = {
            static_cast<std::uint8_t>(value), static_cast<std::uint8_t>(value >> 8u),
            static_cast<std::uint8_t>(value >> 16u), static_cast<std::uint8_t>(value >> 24u)};
        file.write(reinterpret_cast<const char *>(bytes), 4);
    };
    file.write("BM", 2);
    put32(file_bytes);
    put32(0u);
    put32(54u);
    put32(40u);
    put32(width);
    put32(height);
    put16(1u);
    put16(32u);
    put32(0u);
    put32(image_bytes);
    put32(2835u);
    put32(2835u);
    put32(0u);
    put32(0u);

    for (std::uint32_t y = 0; y < height; ++y) {
        const std::uint32_t row = height - 1u - y;
        for (std::uint32_t x = 0; x < width; ++x) {
            std::uint32_t texel{};
            std::memcpy(&texel, pixels.data() + (static_cast<std::size_t>(row) * target.stride + x) * 4u,
                        4u);
            // The guest stores ABGR8888; a BMP row is blue, green, red, alpha.
            const std::uint8_t out[4] = {static_cast<std::uint8_t>((texel >> 16u) & 0xFFu),
                                         static_cast<std::uint8_t>((texel >> 8u) & 0xFFu),
                                         static_cast<std::uint8_t>(texel & 0xFFu),
                                         static_cast<std::uint8_t>((texel >> 24u) & 0xFFu)};
            file.write(reinterpret_cast<const char *>(out), 4);
        }
    }
    return static_cast<bool>(file);
}

} // namespace defjam

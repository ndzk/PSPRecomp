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
// Still unidentified. Two candidates have been ruled out by evidence:
//
// 0xE0 is written three times in a whole run and always zero, so it is not a
// per-draw control at all. 0x1E looked convincing - on for 94% of the pixels
// carrying partial alpha and off for 60% of the opaque ones - but that
// correlation belongs to texturing, not blending: this profile already reads
// 0x1E as the texture enable in defjam_texture.cpp, and textured draws are
// exactly the ones that carry alpha. Acting on it blanked the menu.
//
// What remains untried in the block the title writes per draw: 0xC4, which
// holds 0, 2 and 32 across 10,134 writes.
constexpr std::uint8_t kCmdBlendCandidate = 0x1Eu;
constexpr std::uint8_t kCmdBlendMode = 0xE1u;

// The blend enable and the blend function, found by how often they are written.
//
// A run writes 0x1D 9,330 times with the values 0 and 1, and 0xC6 9,331 times
// with the values 0 and 0x0101. Writing in lockstep to within one, one of them
// enable-shaped and the other packing two equal one-byte fields, is the shape
// of a switch and the parameter that goes with it. Nothing else in the register
// file pairs like that.
//
// 0x0101 is the only non-zero function the title ever asks for, and it is
// symmetric: both fields hold the same index. Source-over cannot be written
// that way - it needs the source scaled by one thing and the destination by
// another - so whatever 0x0101 selects, the unconditional source-over this
// rasteriser applied to every pixel was not it. A symmetric pair whose two
// halves are the same non-zero index is the shape of an additive blend, and
// the frames agree: the title draws a 46,451-pixel opaque black quad across the
// left of the main menu with the enable on, which adds nothing under addition
// and paints a black rectangle under source-over.
//
// Adding that mode brought back the whole left half of the main menu - the
// brick wall, the eight tiles, the MAIN MENU title - which had been solid black
// under source-over.
//
// Only the enabled case is acted on. Turning the disabled case into a straight
// write, which is what the hardware does when it is not blending, put solid
// white blocks over every run of text: the title draws text from an atlas whose
// colour is white and whose shape lives in the alpha, and writing that through
// fills the quad. The hardware drops those texels with an alpha test this
// rasteriser does not have, so the disabled case keeps mixing until it does.
constexpr std::uint8_t kCmdBlendEnable = 0x1Du;
constexpr std::uint8_t kCmdBlendFunction = 0xC6u;
constexpr std::uint32_t kBlendAdditive = 0x0101u;

// On. PSPRECOMP_DEFJAM_BLEND=0 restores the unconditional source-over this
// replaced, so the two can still be compared on one binary.
bool g_honour_blend_state = true;

// Where the transparent pixels live relative to the blend enable.
//
// 72% of the pixels this title produces carry an alpha of zero and are dropped
// here unconditionally, and dropping them is what makes the menus legible. If
// they turn out to sit overwhelmingly on one side of the enable then the enable
// explains them; if they are spread across both, something this rasteriser does
// not model - an alpha test - is doing the work, and that has to be built
// before the drop can be removed.
std::uint64_t g_clear_alpha_blend_on = 0u;
std::uint64_t g_clear_alpha_blend_off = 0u;

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
// Which register selects how a texel combines with the vertex colour.
//
// This rasteriser returns the texel and drops the vertex colour, which is one
// of the four things the hardware can be told to do and not the usual one. The
// choice only shows when the vertex colour is not white, so the register that
// selects it should hold different values for the draws that carry colour than
// for the ones that do not.
//
// 0xC4 is the untried register the title writes per draw, holding 0, 2 and 32
// across 10,134 writes. Everything else in that block is already accounted for:
// 0xB8 size, 0xC2 mode, 0xC3 format, 0xC5 palette format.
constexpr std::uint8_t kTextureFunctionCandidate = 0xC4u;

std::map<std::uint32_t, std::pair<std::uint64_t, std::uint64_t>> g_texture_function;

// Register state, split by where on the screen a primitive lands.
//
// The main menu gives a control pair that costs nothing to use: its right half
// draws correctly and its left half comes out 90% pure black on both
// rasterisers, with every counter clean - nothing skipped, nothing clipped,
// nothing failing a depth test. So the draws are issued and rasterised and
// their pixels are thrown away somewhere, and whatever state decides that
// differs between the two halves.
//
// Rather than guess which register it is, every register is tallied for each
// side and the ones whose values differ are printed. The same reasoning found
// the texture function and the bone matrices; guessing found neither.
//
// PSPRECOMP_DEFJAM_SIDES=<x> turns it on and sets the dividing column.
std::uint32_t g_side_split = 0u;

// Register state split by whether a primitive's pixels survived.
//
// 72% of the pixels this title produces carry an alpha of zero and are thrown
// away here, unconditionally, because this rasteriser has no alpha test and one
// fixed blend. The hardware decides their fate from registers. Rather than
// guess which, every register is tallied against the outcome that matters:
// whether the primitive put anything on the screen. A register that governs the
// discard will hold one set of values for the primitives that vanish and
// another for the ones that land.
std::uint64_t g_pixels_kept = 0u;
std::uint64_t g_pixels_dropped = 0u;
std::array<std::map<std::uint32_t, std::uint64_t>, 256> g_state_vanished;
std::array<std::map<std::uint32_t, std::uint64_t>, 256> g_state_landed;
bool g_discard_scan = false;

std::uint64_t g_pixels_white = 0u;

// Pixels that held something and were turned black.
//
// The main menu renders its wall and seven of its eight tiles into nothing, and
// the search for what does it kept looking at the wrong candidate: untextured
// opaque black quads, of which the menu draws exactly zero. Counting the
// outcome instead of guessing at the cause finds it whatever it is - a textured
// overlay, a sprite, a clear - because whatever blacks the screen out has to
// pass through here and take a pixel from something to nothing.
std::uint64_t g_pixels_blacked = 0u;

// Where written pixels actually land, counted at the point of writing.
//
// Every measurement so far has been of primitives, and primitives have been
// classified by their centroid, which put every full-screen quad on one side and
// made the left-versus-right split mean something other than it claimed. This
// counts the pixel itself, in a grid over the screen, and is reset by each clear
// so that what it holds is one frame's work. Read against the frame buffer at
// the same moment it says whether the missing part of the main menu is written
// and lost, or never written at all.
constexpr std::uint32_t kHeatColumns = 12u;
constexpr std::uint32_t kHeatRows = 6u;
// Atomic, because the rows of a primitive are filled on several threads.
//
// These were plain integers and a plain map, and the two disagreed by a factor
// of 1.7 about the same frame, which made every number read off them arguable.
// A race can only lose counts, never invent them, so the conclusion they
// supported still stands - but it should not have needed that argument.
std::array<std::atomic<std::uint64_t>, kHeatColumns * kHeatRows> g_heat{};

// Which buffer the pixels of this frame are going into.
//
// The heat map says the left half of the main menu takes 126,000 writes after
// the last clear and the buffer read out of guest memory is 90% zero there. The
// writes are real and the read is real, so the only thing left is that they are
// not talking about the same memory.
std::atomic<std::uint64_t> g_heat_target_a{0};
std::atomic<std::uint64_t> g_heat_target_b{0};

// What the pixels written into the left half of the screen actually carry.
//
// They are written - 130,000 of them into 65,280 pixels of area, with the
// working copy and both guest buffers agreeing that the result is 90% exactly
// zero. A write with an alpha of one over a black background rounds to black:
// counted, invisible. So either the alpha is nearly nothing or the texel is,
// and these two histograms say which without another guess.
std::array<std::atomic<std::uint64_t>, 9> g_left_alpha{};
std::atomic<std::uint64_t> g_left_black_rgb{0};
std::atomic<std::uint64_t> g_left_total{0};
// Opaque black written anywhere, so a primitive can be judged by how much of it
// it produced.
std::atomic<std::uint64_t> g_opaque_black{0};

void note_source(std::uint32_t x, std::uint32_t color) {
    if (x >= kDisplayWidth / 2u) return;
    ++g_left_total;
    const std::uint32_t alpha = (color >> 24u) & 0xFFu;
    std::size_t bucket = 0;
    if (alpha >= 255u) bucket = 8;
    else if (alpha >= 128u) bucket = 7;
    else if (alpha >= 64u) bucket = 6;
    else if (alpha >= 32u) bucket = 5;
    else if (alpha >= 16u) bucket = 4;
    else if (alpha >= 8u) bucket = 3;
    else if (alpha >= 4u) bucket = 2;
    else if (alpha >= 1u) bucket = 1;
    ++g_left_alpha[bucket];
    if ((color & 0x00FFFFFFu) == 0u) ++g_left_black_rgb;
}

void note_heat(std::uint32_t x, std::uint32_t y) {
    if (g_surface_target.address == 0x04000000u) ++g_heat_target_a;
    else ++g_heat_target_b;
    const std::uint32_t column = std::min(kHeatColumns - 1u, x * kHeatColumns / kDisplayWidth);
    const std::uint32_t row = std::min(kHeatRows - 1u, y * kHeatRows / kDisplayHeight);
    ++g_heat[row * kHeatColumns + column];
}

struct PixelTally {
    std::uint64_t kept{};
    std::uint64_t dropped{};
    std::uint64_t white{};
    std::uint64_t blacked{};
    std::uint64_t opaque_black{};
};

PixelTally begin_primitive() {
    return PixelTally{g_pixels_kept, g_pixels_dropped, g_pixels_white, g_pixels_blacked,
                      g_opaque_black.load(std::memory_order_relaxed)};
}

// One primitive that filled a large area with pure white, described in full.
//
// The white rectangles over the warning text, the title screen and part of the
// main menu are not blank textures: a run decodes 4,096 textures and not one of
// them comes out a flat colour. So something else is painting them, and the way
// to find out is to catch a primitive doing it and print its state rather than
// reason about what could.
void describe_white(std::uint64_t white, std::uint32_t color, const TextureState &texture,
                    bool textured, float x, float y) {
    static int described = 0;
    if (described >= 8) return;
    ++described;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    runtime_log_line("saturated block at " + std::to_string(x) + "," + std::to_string(y) + "  " +
                     std::to_string(white) + " pixels saturated to white");
    runtime_log_line("  vertex colour " + psprecomp::hex32(color) + "  textured " +
                     std::to_string(textured ? 1 : 0));
    if (textured) {
        runtime_log_line("  texture " + psprecomp::hex32(texture.address) + " " +
                         std::to_string(texture.width) + "x" + std::to_string(texture.height) +
                         " format " + std::to_string(static_cast<int>(texture.format)) +
                         " clut " + psprecomp::hex32(texture.clut_address) + " swizzled " +
                         std::to_string(texture.swizzled ? 1 : 0));
    }
    runtime_log_line("  0x1d " + std::to_string(registers[0x1Du]) + "  0xc6 " +
                     std::to_string(registers[0xC6u]) + "  0xc4 " +
                     std::to_string(registers[0xC4u]) + "  0x1e " +
                     std::to_string(registers[0x1Eu]) + "  clearing " +
                     std::to_string(clear_mode_active() ? 1 : 0));
}

// Every register in force for one large blended primitive.
//
// Two draws need opposite treatment and carry the same blend function. The main
// menu's black quad has to add nothing or it paints the left half black; the
// cream song banner has to cover the tiles under it or they show through. Both
// are drawn with the enable on and 0xC6 holding 0x0101, so something else in
// the register file separates them. Printing all of it for each and diffing the
// two rows names that something instead of guessing at it.
void describe_blended(std::uint64_t covered, std::uint32_t color, const TextureState &texture,
                      bool textured, float x, float y) {
    static int described = 0;
    if (described >= 10) return;
    ++described;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    runtime_log_line("blended primitive at " + std::to_string(x) + "," + std::to_string(y) +
                     "  " + std::to_string(covered) + " pixels  colour " +
                     psprecomp::hex32(color) + "  textured " + std::to_string(textured ? 1 : 0));
    if (textured) {
        runtime_log_line("  texture " + psprecomp::hex32(texture.address) + " " +
                         std::to_string(texture.width) + "x" + std::to_string(texture.height) +
                         " format " + std::to_string(static_cast<int>(texture.format)));
    }
    std::string line = "  regs";
    for (std::size_t i = 0; i < 256u; ++i) {
        if (registers[i] == 0u) continue;
        line += " " + psprecomp::hex32(static_cast<std::uint32_t>(i)).substr(8) + "=" +
                std::to_string(registers[i]);
        if (line.size() > 150u) {
            runtime_log_line(line);
            line = "  regs";
        }
    }
    if (line.size() > 6u) runtime_log_line(line);
}

// All three vertex colours of a large untextured primitive.
//
// The main menu draws its wall and its eight tiles, then a quad over them, then
// the selected tile again - dim everything, highlight the choice. Mixed
// source-over that quad comes out solid black and only the highlighted tile
// survives; treated as additive it disappears entirely and takes the dimming
// with it. Which is right depends on the alpha the quad actually carries, and
// only the first vertex has ever been printed. A quad that dims carries partial
// alpha; one that is opaque black at every corner means the alpha is arriving
// wrong and the fault is upstream of the blend.
void describe_dark_quad(const Vertex &a, const Vertex &b, const Vertex &c, std::uint64_t covered,
                        float x, float y) {
    // Gated on the guest clock, not on a count. The screen that matters is the
    // main menu, and the title draws these from its first second: a cap of eight
    // filled during boot, and raising it to two hundred filled by 1.5 seconds.
    // Both answered about the wrong frame.
    //
    // PSPRECOMP_DEFJAM_SCAN_AFTER_US sets when to start listening, default 60s.
    static const std::uint64_t after = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_SCAN_AFTER_US");
        return text == nullptr ? 60000000ull : std::strtoull(text, nullptr, 0);
    }();
    if (guest_time_us() < after) return;
    static int described = 0;
    if (described >= 200) return;
    ++described;
    runtime_log_line("dark quad at " + std::to_string(x) + "," + std::to_string(y) + "  " +
                     std::to_string(covered) + " pixels");
    runtime_log_line("  vertex colours " + psprecomp::hex32(a.color) + " " +
                     psprecomp::hex32(b.color) + " " + psprecomp::hex32(c.color) +
                     "   alphas " + std::to_string((a.color >> 24u) & 0xFFu) + " " +
                     std::to_string((b.color >> 24u) & 0xFFu) + " " +
                     std::to_string((c.color >> 24u) & 0xFFu));
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    runtime_log_line("  0x1d " + std::to_string(registers[0x1Du]) + "  0xc6 " +
                     std::to_string(registers[0xC6u]) + "  0xc4 " +
                     std::to_string(registers[0xC4u]) + "  0xc7 " +
                     std::to_string(registers[0xC7u]) + "  0xd2 " +
                     std::to_string(registers[0xD2u]));
}

// A primitive that took a large area from something to black, described in
// full, whatever kind of primitive it turns out to be.
// How many primitives reach each half of the screen, and what they put there.
//
// The main menu leaves 90% of its left half at exactly zero while its right half
// draws correctly, and every loss counter in this profile reads zero. Two very
// different things produce that: primitives that never arrive, which makes it a
// geometry problem, or primitives that arrive and write nothing, which makes it
// a pixel problem. Nothing measured so far separates them, because everything
// measured so far assumed the second.
struct HalfCensus {
    std::uint64_t primitives{};
    std::uint64_t covered{};
    std::uint64_t written{};
    std::uint64_t textured{};
    // Pixels written before a clear came along and wiped them.
    //
    // The left half of the main menu receives more primitives than the right and
    // writes nearly twice as many pixels, and still ends up 90% exactly zero.
    // Something is drawn and then erased. Splitting each half's writes either
    // side of the clears says whether that is what happens, and to which half.
    std::uint64_t wiped{};
    // Which frame buffer this half's pixels are written into.
    //
    // The title flips between two, at offset 0 and 0x90000. The main menu writes
    // three times as many primitives into its left half as its right and shows
    // nothing there, and one clear per frame rules out anything erasing them
    // mid-frame. Pixels that land in the buffer that is not on screen would look
    // exactly like this.
    std::map<std::uint32_t, std::uint64_t> targets;
};
HalfCensus g_left;
HalfCensus g_right;

// Written since the last clear, per half.
std::uint64_t g_left_pending = 0u;
std::uint64_t g_right_pending = 0u;
// The last stretch that ran from one clear to the next, whole.
std::uint64_t g_left_last = 0u;
std::uint64_t g_right_last = 0u;
// How many clears the title issues, against how many frames it shows.
//
// Measuring what a later clear wipes turned out to say nothing: every frame is
// wiped by the next one, so both halves came back at 99.96% and the two sides
// looked identical. What separates them is how the work is arranged inside a
// single frame - one clear per frame is ordinary double buffering, several means
// content is being erased mid-frame and only the last stretch reaches the
// screen, which is exactly what the menu looks like.
std::uint64_t g_clear_boundaries = 0u;

void note_clear_boundary() {
    g_left.wiped += g_left_pending;
    g_right.wiped += g_right_pending;
    g_left_last = g_left_pending;
    g_right_last = g_right_pending;
    ++g_clear_boundaries;
    g_left_pending = 0u;
    g_right_pending = 0u;
}

void reset_heat() {
    for (auto &cell : g_heat) cell.store(0u);
    g_heat_target_a.store(0u);
    g_heat_target_b.store(0u);
    for (auto &bucket : g_left_alpha) bucket.store(0u);
    g_left_black_rgb.store(0u);
    g_left_total.store(0u);
}

void note_census(const PixelTally &before, bool textured, float x, std::uint64_t covered) {
    if (!g_discard_scan) return;
    static const std::uint64_t after = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_SCAN_AFTER_US");
        return text == nullptr ? 60000000ull : std::strtoull(text, nullptr, 0);
    }();
    if (guest_time_us() < after) return;
    const std::uint64_t written = g_pixels_kept - before.kept;
    if (clear_mode_active()) {
        if (written != 0u) {
            note_clear_boundary();
            reset_heat();
        }
        return;
    }
    HalfCensus &into = x < 240.0f ? g_left : g_right;
    ++into.primitives;
    into.covered += covered;
    into.written += written;
    (x < 240.0f ? g_left_pending : g_right_pending) += written;
    if (written != 0u) into.targets[g_surface_target.address] += written;
    if (textured) ++into.textured;
}

// The runtime, so a scan can read guest memory while describing a primitive.
psprecomp::Runtime *g_scan_runtime = nullptr;

// A primitive that paints opaque black over the left half, described in full.
//
// The menu's left half takes 130,876 writes in a frame, 96.6% of them fully
// opaque and 60% pure black, over an area of 65,280 pixels. It is not missing
// its content: something is painting it out. The earlier blackout counter could
// not see this because it asked for the pixel to have been non-black first, and
// after the frame clear it never is - black over black registered as nothing at
// all.
void note_black_painter(const PixelTally &before, std::uint32_t color,
                        const TextureState &texture, bool textured, float x, float y) {
    if (!g_discard_scan) return;
    static const std::uint64_t after = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_SCAN_AFTER_US");
        return text == nullptr ? 60000000ull : std::strtoull(text, nullptr, 0);
    }();
    if (guest_time_us() < after) return;
    // The whole screen, not just the left half. The half was where the menu's
    // overlay sat; a fight paints a black rectangle of its own somewhere else
    // entirely, and the same question applies wherever it appears.
    if (clear_mode_active()) return;
    const std::uint64_t black = g_opaque_black.load(std::memory_order_relaxed) - before.opaque_black;
    const std::uint64_t written = g_pixels_kept - before.kept;
    // Anything that covers a visible area and comes out mostly very dark. The
    // first pass asked for 80% pure opaque black and found nothing in a fight,
    // which rules out that exact shape and not the rectangle the screen shows.
    if (black < 600u || written == 0u || black * 2u < written) return;
    static int described = 0;
    if (described >= 400) return;
    ++described;
    runtime_log_line("black painter at " + std::to_string(x) + "," + std::to_string(y) + "  " +
                     std::to_string(black) + " opaque black of " + std::to_string(written) +
                     " written  vertex colour " + psprecomp::hex32(color) + "  textured " +
                     std::to_string(textured ? 1 : 0));
    if (textured) {
        runtime_log_line("  texture " + psprecomp::hex32(texture.address) + " " +
                         std::to_string(texture.width) + "x" + std::to_string(texture.height) +
                         " format " + std::to_string(static_cast<int>(texture.format)) + " clut " +
                         psprecomp::hex32(texture.clut_address) + " swizzled " +
                         std::to_string(texture.swizzled ? 1 : 0) + " stride " +
                         std::to_string(texture.stride));
        // The palette itself, read out of guest memory.
        //
        // A fight draws sixteen of these with a half-transparent teal vertex
        // colour, 0x8060C0C0, and every pixel comes out black. Under modulation
        // the result is texel times vertex, and the vertex is not black, so the
        // texel has to be - which means the palette entries are. Whether they
        // are black in the title's own data or only after this profile decodes
        // them is the whole question, and the bytes answer it.
        runtime_log_line("  clut format register 0x" +
                         psprecomp::hex32(ge_registers()[0xC5u]).substr(2) + "  shift " +
                         std::to_string(texture.clut_shift) + "  mask " +
                         std::to_string(texture.clut_mask) + "  offset " +
                         std::to_string(texture.clut_offset));
        std::string entries = "  palette bytes:";
        for (std::uint32_t i = 0; i < 8u; ++i) {
            std::uint32_t word = 0u;
            if (g_scan_runtime != nullptr &&
                g_scan_runtime->memory().contains(texture.clut_address + i * 4u, 4u)) {
                word = g_scan_runtime->memory().load32(texture.clut_address + i * 4u);
            }
            entries += " " + psprecomp::hex32(word);
        }
        runtime_log_line(entries);
    }
}

void note_blackout(const PixelTally &before, std::uint32_t color, const TextureState &texture,
                   bool textured, float x, float y) {
    if (!g_discard_scan) return;
    static const std::uint64_t after = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_SCAN_AFTER_US");
        return text == nullptr ? 60000000ull : std::strtoull(text, nullptr, 0);
    }();
    if (guest_time_us() < after) return;
    const std::uint64_t blacked = g_pixels_blacked - before.blacked;
    if (blacked < 2000u) return;
    static int described = 0;
    if (described >= 40) return;
    ++described;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    runtime_log_line("blackout at " + std::to_string(x) + "," + std::to_string(y) + "  " +
                     std::to_string(blacked) + " pixels turned black  colour " +
                     psprecomp::hex32(color) + "  textured " + std::to_string(textured ? 1 : 0));
    if (textured) {
        runtime_log_line("  texture " + psprecomp::hex32(texture.address) + " " +
                         std::to_string(texture.width) + "x" + std::to_string(texture.height) +
                         " format " + std::to_string(static_cast<int>(texture.format)) + " clut " +
                         psprecomp::hex32(texture.clut_address));
    }
    runtime_log_line("  0x1d " + std::to_string(registers[0x1Du]) + "  0xc6 " +
                     std::to_string(registers[0xC6u]) + "  0xc4 " +
                     std::to_string(registers[0xC4u]) + "  0x1e " +
                     std::to_string(registers[0x1Eu]) + "  clearing " +
                     std::to_string(clear_mode_active() ? 1 : 0));
}

void note_blended(const PixelTally &before, std::uint32_t color, const TextureState &texture,
                  bool textured, float x, float y) {
    if (!g_discard_scan) return;
    if ((ge_registers()[kCmdBlendEnable] & 1u) == 0u) return;
    // A clear is issued as a strip of blended quads and would fill the sample
    // with nothing else, which is exactly what happened the first time.
    if (clear_mode_active()) return;
    const std::uint64_t covered = g_pixels_kept - before.kept;
    if (covered < 5000u) return;
    describe_blended(covered, color, texture, textured, x, y);
}

// Fires on a primitive whose output is overwhelmingly pure white over an area
// big enough to be one of the rectangles on screen.
void note_white_block(const PixelTally &before, std::uint32_t color, const TextureState &texture,
                      bool textured, float x, float y) {
    if (!g_discard_scan) return;
    const std::uint64_t white = g_pixels_white - before.white;
    const std::uint64_t kept = g_pixels_kept - before.kept;
    if (white < 400u || kept == 0u) return;
    if (white * 4u < kept) return;
    describe_white(white, color, texture, textured, x, y);
}

// One primitive that covered pixels and left none of them, described in full.
// Correlation narrowed this to a handful of registers and then stopped being
// useful; what is left is to look at an actual example.
void describe_vanished(std::uint64_t dropped, std::uint32_t color, const TextureState &texture,
                       bool textured, float x, float y) {
    static int described = 0;
    if (described >= 6) return;
    ++described;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    runtime_log_line("vanished primitive at " + std::to_string(x) + "," + std::to_string(y) +
                     "  dropped " + std::to_string(dropped) + " pixels");
    runtime_log_line("  colour " + psprecomp::hex32(color) + "  alpha " +
                     std::to_string((color >> 24u) & 0xFFu) + "  textured " +
                     std::to_string(textured ? 1 : 0));
    if (textured) {
        runtime_log_line("  texture " + psprecomp::hex32(texture.address) + " " +
                         std::to_string(texture.width) + "x" + std::to_string(texture.height) +
                         " format " + std::to_string(static_cast<int>(texture.format)) +
                         " clut " + psprecomp::hex32(texture.clut_address));
    }
    runtime_log_line("  clearing " + std::to_string(clear_mode_active() ? 1 : 0) + "  0x1d " +
                     std::to_string(registers[0x1Du]) + "  0x1e " +
                     std::to_string(registers[0x1Eu]) + "  0x23 " +
                     std::to_string(registers[0x23u]) + "  0xc4 " +
                     std::to_string(registers[0xC4u]) + "  0xc6 " +
                     std::to_string(registers[0xC6u]));
}

void end_primitive(const PixelTally &before) {
    if (!g_discard_scan) return;
    const std::uint64_t kept = g_pixels_kept - before.kept;
    const std::uint64_t dropped = g_pixels_dropped - before.dropped;
    if (kept + dropped == 0u) return;
    auto &into = kept == 0u ? g_state_vanished : g_state_landed;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    for (std::size_t i = 0; i < 256u; ++i) {
        std::map<std::uint32_t, std::uint64_t> &values = into[i];
        if (values.size() < 8u || values.count(registers[i]) != 0u) ++values[registers[i]];
    }
}
std::array<std::map<std::uint32_t, std::uint64_t>, 256> g_side_left;
std::array<std::map<std::uint32_t, std::uint64_t>, 256> g_side_right;

void note_side(float centre_x) {
    if (g_side_split == 0u) return;
    auto &into = centre_x < static_cast<float>(g_side_split) ? g_side_left : g_side_right;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    for (std::size_t i = 0; i < 256u; ++i) {
        std::map<std::uint32_t, std::uint64_t> &values = into[i];
        if (values.size() < 8u || values.count(registers[i]) != 0u) ++values[registers[i]];
    }
}

// Texel times vertex colour, per channel.
//
// Which of the hardware's texture functions is in force was decided by
// correlation. 0xC4 holds 32 for 16,472 draws and every one of them carries a
// white vertex colour - a mode that used the colour would not need the title to
// always send white - and holds 2 for draws that are 82% coloured. So 2 is the
// mode that multiplies and 32 the one that replaces, which is what this
// rasteriser did for both.
constexpr std::uint32_t kTextureFunctionModulate = 2u;

std::uint32_t modulate(std::uint32_t texel, std::uint32_t vertex) {
    const auto mix = [](std::uint32_t a, std::uint32_t b) { return (a * b + 127u) / 255u; };
    return (mix((texel >> 24u) & 0xFFu, (vertex >> 24u) & 0xFFu) << 24u) |
           (mix((texel >> 16u) & 0xFFu, (vertex >> 16u) & 0xFFu) << 16u) |
           (mix((texel >> 8u) & 0xFFu, (vertex >> 8u) & 0xFFu) << 8u) |
           mix(texel & 0xFFu, vertex & 0xFFu);
}

std::uint32_t combine_texel(std::uint32_t texel, std::uint32_t vertex) {
    // Off, and turning it on was a mistake worth recording.
    //
    // The reading behind it was that 0xC4 holding 2 means "multiply the texel by
    // the vertex colour". It came from correlating that register against "is the
    // vertex colour white", and that test cannot tell the two readings apart:
    // where the colour is white, multiplying by it and ignoring it produce the
    // same pixel. It was then checked only on menus, which are drawn white.
    //
    // A fight is not. The arena's walls carry vertex colours like 0xFF0C1311 -
    // (17,19,12) - against textures whose mean brightness is 107 to 173, so
    // multiplying turned every wall black and left the fighters standing in a
    // void. Measured on one frame: the flat dark region above the crowd went
    // from 205 blocks at luminance 16 to 12 blocks at luminance 28 with this
    // off. Every draw where multiplying would be visible wants it off, and every
    // draw that asks for it sends white, where it makes no difference.
    // PSPRECOMP_DEFJAM_MODULATE=0 turns this off, because it is a suspect: the
    // main menu asks for modulation and renders its wall and seven of its eight
    // tiles into exactly nothing, and multiplying a texel by a black vertex
    // colour would do precisely that.
    if (!texture_modulation_enabled()) return texel;
    if (ge_registers()[kTextureFunctionCandidate] == kTextureFunctionModulate) {
        return modulate(texel, vertex);
    }
    // The other mode replaces the colour but keeps the vertex's alpha.
    //
    // Which register selected the texture function was decided by correlating it
    // against "is the vertex colour white", and that test read only the RGB:
    //
    //     if ((vertex_color & 0x00FFFFFFu) == 0x00FFFFFFu) ++counts.first;
    //
    // 0x73FFFFFF passes it. The main menu darkens its left half with a 256x256
    // paletted quad drawn at exactly that colour - white, alpha 0x73 - and
    // dropping the whole vertex colour dropped the 0x73 with it, so a dimming
    // overlay was painted as opaque black over the brick wall and seven of the
    // eight tiles. The alpha survives the replace; only the colour does not.
    const std::uint32_t texel_alpha = (texel >> 24u) & 0xFFu;
    const std::uint32_t vertex_alpha = (vertex >> 24u) & 0xFFu;
    const std::uint32_t alpha = (texel_alpha * vertex_alpha + 127u) / 255u;
    return (alpha << 24u) | (texel & 0x00FFFFFFu);
}

void note_texture_function(std::uint32_t vertex_color) {
    const std::uint32_t value = ge_registers()[kTextureFunctionCandidate];
    auto &counts = g_texture_function[value];
    if ((vertex_color & 0x00FFFFFFu) == 0x00FFFFFFu) ++counts.first;
    else ++counts.second;
}

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
        (static_cast<std::uint64_t>(registers[kCmdBlendCandidate] & 1u) << 32u) |
        (registers[kCmdBlendMode] & 0x00FFFFFFu);
    ++g_blend_modes[seen];
}

// Additive, with the source scaled by its own alpha.
//
// Adding the source unweighted was wrong in a way that showed: 137,569,380 of
// the pixels a run draws with blending on carry an alpha of zero, and in a font
// or effect atlas a transparent texel is usually white with an alpha of zero
// rather than black. Unweighted, every one of those adds white, and a few
// layers of it saturate to a solid white rectangle. That is what appeared over
// the warning text, under the title screen and across part of the main menu the
// moment this path was switched on.
//
// Scaling by alpha makes a transparent texel add nothing, which is what it
// means for it to be transparent, and leaves an opaque one adding in full.
std::uint32_t add_saturating(std::uint32_t source, std::uint32_t destination) {
    const std::uint32_t alpha = (source >> 24u) & 0xFFu;
    if (alpha == 0u) return destination;
    const auto mix = [alpha](std::uint32_t a, std::uint32_t b) {
        const std::uint32_t sum = (a * alpha + 127u) / 255u + b;
        return sum > 255u ? 255u : sum;
    };
    return 0xFF000000u | (mix((source >> 16u) & 0xFFu, (destination >> 16u) & 0xFFu) << 16u) |
           (mix((source >> 8u) & 0xFFu, (destination >> 8u) & 0xFFu) << 8u) |
           mix(source & 0xFFu, destination & 0xFFu);
}

// Fog: a pixel mixed toward a constant colour by how far away it is.
//
// The register block has the shape of one - 0x54 written once per draw, 0x55
// beside it, 0x56 holding a colour, and two enables at 0x21 and 0x22 that this
// profile has never read - and the symptom fits: an arena whose walls come out
// three times darker than its floor while their textures are bright and fully
// opaque, which is what distant geometry looks like when whatever the hardware
// adds to it is missing.
//
// Applied only when the parameters describe a usable gradient. Read literally
// from a boot-to-menu run they do not: 0x54 is zero at 172,198 of 172,204
// draws, and the usual fog formula turns that into "fully fogged everywhere",
// which would paint the whole game the fog colour - white. A menu has no depth,
// so those values say nothing about a fight; until a run with one says
// otherwise, degenerate parameters mean no fog rather than total fog. That
// guard is what stops this from repeating the modulation mistake, where a rule
// derived from menus was switched on everywhere and blacked out the arena.
constexpr std::uint8_t kCmdFogEnd = 0x54u;
constexpr std::uint8_t kCmdFogScale = 0x55u;
constexpr std::uint8_t kCmdFogColour = 0x56u;
constexpr std::uint8_t kCmdFogEnableA = 0x21u;
constexpr std::uint8_t kCmdFogEnableB = 0x22u;

float register_float(std::uint8_t command) {
    const std::uint32_t raw = (ge_registers()[command] & 0x00FFFFFFu) << 8u;
    float value{};
    std::memcpy(&value, &raw, 4u);
    return value;
}

bool fog_active() {
    static const bool allowed = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_FOG");
        return text == nullptr || (text[0] != 0 && text[0] != 48);
    }();
    if (!allowed) return false;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    if ((registers[kCmdFogEnableA] & 1u) == 0u && (registers[kCmdFogEnableB] & 1u) == 0u) {
        return false;
    }
    const float scale = register_float(kCmdFogScale);
    const float end = register_float(kCmdFogEnd);
    return std::isfinite(scale) && std::isfinite(end) && scale > 0.0f && end > 0.0f;
}

std::uint32_t apply_fog(std::uint32_t color, float inv_w) {
    if (!(inv_w > 0.0f)) return color;
    const float distance = 1.0f / inv_w;
    float factor = (register_float(kCmdFogEnd) - distance) * register_float(kCmdFogScale);
    if (!(factor > 0.0f)) factor = 0.0f;
    if (factor > 1.0f) factor = 1.0f;
    const std::uint32_t fog = ge_registers()[kCmdFogColour] & 0x00FFFFFFu;
    const auto mix = [factor](std::uint32_t pixel, std::uint32_t target) {
        return static_cast<std::uint32_t>(static_cast<float>(pixel) * factor +
                                          static_cast<float>(target) * (1.0f - factor) + 0.5f);
    };
    return (color & 0xFF000000u) | (mix((color >> 16u) & 0xFFu, (fog >> 16u) & 0xFFu) << 16u) |
           (mix((color >> 8u) & 0xFFu, (fog >> 8u) & 0xFFu) << 8u) |
           mix(color & 0xFFu, fog & 0xFFu);
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
    const bool blending = (ge_registers()[kCmdBlendCandidate] & 1u) != 0u;
    // A fully transparent pixel is left alone whatever the blend state says.
    //
    // The hardware discards those with its alpha test, which this rasteriser
    // does not implement. Writing them because blending happens to be off put
    // opaque black over every menu entry on the match type screen: the title
    // draws them as transparent quads and relies on the test, not the blend, to
    // drop them. Only the partial alphas take the new path.
    // Not acted on yet. Honouring it needs the alpha test too - the hardware
    // discards transparent texels there, not in the blend - and without that
    // the change is half a rule. The register is identified and counted; the
    // behaviour stays as it was until the other half exists.
    (void)blending;
    // Rejected means the pixel was not allowed to contribute, not that it
    // happened to match what was already there. Counting equality instead
    // called white on white and black on black discards, which put two
    // correctly drawn primitives at the top of a report about vanishing ones
    // and made every correlation drawn from it worthless.
    const bool rejected = !g_clearing && ((color >> 24u) & 0xFFu) == 0u;
    if (rejected) ++g_pixels_dropped;
    else ++g_pixels_kept;
    // Saturation, not whiteness. A pixel that arrives white and is written white
    // is the title asking for white; a pixel that arrives coloured and comes out
    // pure white has been added to until it ran out of range, which is the
    // shape of the blown-out panels on the fighter and venue screens. Counting
    // the first found nothing, because no single primitive in a stack of them
    // is white on its own.
    const bool source_white = (color & 0x00FFFFFFu) == 0x00FFFFFFu;
    const std::uint32_t was = target;
    if (rejected) {
        if ((ge_registers()[kCmdBlendEnable] & 1u) != 0u) ++g_clear_alpha_blend_on;
        else ++g_clear_alpha_blend_off;
    }

    if (g_clearing) {
        target = color | 0xFF000000u;
    } else if (!g_honour_blend_state) {
        target = blend_over(color, target);
    } else {
        // One mode. The guest asks for exactly one non-zero blend function in a
        // whole run, 0x0101 at register 0xC6, and reading it as additive was
        // wrong: it blew the fighter select, the venue photographs and the
        // autosave illustration out to solid white, each of which renders
        // correctly mixed source-over. What additive appeared to fix was a
        // vignette being filled flat, which is fixed where it belongs now.
        target = blend_over(color, target);
    }
    if (!rejected && !source_white && (target & 0x00FFFFFFu) == 0x00FFFFFFu) ++g_pixels_white;
    if (!rejected && (was & 0x00FFFFFFu) != 0u && (target & 0x00FFFFFFu) == 0u) ++g_pixels_blacked;
    if (g_discard_scan && !rejected && !g_clearing) {
        note_heat(ux, uy);
        note_source(ux, color);
        // Very dark, not only exactly black: a rectangle that reads as black on
        // screen need not be written with a colour of exactly zero.
        const std::uint32_t red = (color >> 16u) & 0xFFu;
        const std::uint32_t green = (color >> 8u) & 0xFFu;
        const std::uint32_t blue = color & 0xFFu;
        if (red <= 8u && green <= 8u && blue <= 8u && ((color >> 24u) & 0xFFu) >= 96u) {
            ++g_opaque_black;
        }
    }
    ++g_stats.pixels_written;
}

// Nearest-neighbour sampling, with the coordinate wrapped rather than clamped,
// which is what the hardware does by default.
// Textures the decoder could not produce, by the format that defeated it.
std::map<std::uint8_t, std::uint64_t> g_missing_textures;
std::mutex g_missing_lock;

void note_missing_texture(const TextureState &texture) {
    std::lock_guard<std::mutex> guard(g_missing_lock);
    ++g_missing_textures[static_cast<std::uint8_t>(texture.format)];
}

std::uint32_t sample(const std::vector<std::uint32_t> &texels, const TextureState &texture, float u,
                     float v, bool uv_in_texels) {
    // A texture that could not be read draws nothing and says so, rather than
    // standing in for itself with opaque white.
    //
    // Returning 0xFFFFFFFF here put a solid white square on screen wherever a
    // decode failed, which is both a fabricated pixel and a silent fallback -
    // the one thing this profile is not allowed to do. It is counted instead,
    // and the format that could not be read is named once so the gap is a
    // reported fact rather than a shape someone has to notice.
    if (texels.empty() || texture.width == 0u || texture.height == 0u) {
        note_missing_texture(texture);
        return 0u;
    }
    if (!uv_in_texels) {
        // A transformed draw carries normalised coordinates; they only become
        // texels once scaled by the texture size.
        u *= static_cast<float>(texture.width);
        v *= static_cast<float>(texture.height);
    }
    auto wrap = [](std::int64_t index, std::uint32_t size) {
        index %= static_cast<std::int64_t>(size);
        if (index < 0) index += size;
        return static_cast<std::uint32_t>(index);
    };
    const auto fetch = [&](std::int64_t tx, std::int64_t ty) {
        return texels[static_cast<std::size_t>(wrap(ty, texture.height)) * texture.width +
                      wrap(tx, texture.width)];
    };
    if (!defjam::texture_filter_linear()) {
        return fetch(static_cast<std::int64_t>(u), static_cast<std::int64_t>(v));
    }
    // Bilinear, sampled about the texel centre.
    //
    // The title asks for this: register 0xC1 holds 0x000100, two byte fields
    // holding 0 and 1, which is the shape of a minification and magnification
    // filter pair, and this profile sampled the nearest texel for both. Every
    // textured pixel in the game came out harder-edged than the hardware would
    // draw it, uniformly, which is the kind of difference that reads as "looks
    // wrong somehow" rather than as a visible fault.
    const float fx = u - 0.5f;
    const float fy = v - 0.5f;
    const auto x0 = static_cast<std::int64_t>(std::floor(fx));
    const auto y0 = static_cast<std::int64_t>(std::floor(fy));
    const float ax = fx - static_cast<float>(x0);
    const float ay = fy - static_cast<float>(y0);
    const std::uint32_t c00 = fetch(x0, y0);
    const std::uint32_t c10 = fetch(x0 + 1, y0);
    const std::uint32_t c01 = fetch(x0, y0 + 1);
    const std::uint32_t c11 = fetch(x0 + 1, y0 + 1);
    std::uint32_t out = 0u;
    for (std::uint32_t shift = 0u; shift < 32u; shift += 8u) {
        const auto channel = [shift](std::uint32_t texel) {
            return static_cast<float>((texel >> shift) & 0xFFu);
        };
        const float top = channel(c00) + (channel(c10) - channel(c00)) * ax;
        const float bottom = channel(c01) + (channel(c11) - channel(c01)) * ax;
        float value = top + (bottom - top) * ay;
        if (value < 0.0f) value = 0.0f;
        if (value > 255.0f) value = 255.0f;
        out |= static_cast<std::uint32_t>(value + 0.5f) << shift;
    }
    return out;
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

    if (textured) note_texture_function(second.color);
    note_side((first.x + second.x) * 0.5f);
    const PixelTally tally = begin_primitive();
    const auto band = [&](std::int32_t from, std::int32_t to) {
    for (std::int32_t y = from; y <= to; ++y) {
        for (std::int32_t x = x0; x < x1; ++x) {
            std::uint32_t color = second.color;
            if (textured) {
                const float t = (static_cast<float>(x) - first.x) / span_x;
                const float s = (static_cast<float>(y) - first.y) / span_y;
                color = combine_texel(
                    sample(texels, texture, first.u + t * (second.u - first.u),
                           first.v + s * (second.v - first.v), uv_in_texels),
                    second.color);
            }
            put_pixel(x, y, color, second.z);
        }
    }
    };
    if (y1 > y0) fill_rows(y0, y1 - 1, x1 - x0, band);
    note_white_block(tally, second.color, texture, textured, (first.x + second.x) * 0.5f,
                     (first.y + second.y) * 0.5f);
    note_blackout(tally, second.color, texture, textured, (first.x + second.x) * 0.5f,
                  (first.y + second.y) * 0.5f);
    note_black_painter(tally, second.color, texture, textured, (first.x + second.x) * 0.5f,
                       (first.y + second.y) * 0.5f);
    note_census(tally, textured, (first.x + second.x) * 0.5f,
                static_cast<std::uint64_t>(std::max(0, x1 - x0)) *
                    static_cast<std::uint64_t>(std::max(0, y1 - y0)));
    note_blended(tally, second.color, texture, textured, (first.x + second.x) * 0.5f,
                 (first.y + second.y) * 0.5f);
    end_primitive(tally);
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

    if (textured) note_texture_function(a.color);
    note_side((a.x + b.x + c.x) / 3.0f);
    const bool fogging = fog_active();
    const PixelTally tally = begin_primitive();
    const float centre_x = (a.x + b.x + c.x) / 3.0f;
    const float centre_y = (a.y + b.y + c.y) / 3.0f;
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
            // Perspective correction. The three barycentric weights are scaled
            // by each vertex's 1/w and renormalised, which turns a weighting
            // that is linear in screen space into one that is linear in the
            // space the vertices came from. A screen-space draw carries 1/w of
            // one at every vertex and comes through this unchanged.
            float pa = ba, pb = bb, pc = bc;
            const float inv_w = a.inv_w * ba + b.inv_w * bb + c.inv_w * bc;
            if (inv_w > 0.0f) {
                const float scale = 1.0f / inv_w;
                pa = ba * a.inv_w * scale;
                pb = bb * b.inv_w * scale;
                pc = bc * c.inv_w * scale;
            }
            // The vertex colour is interpolated across the triangle whether or
            // not there is a texture, alpha included.
            //
            // It used to be interpolated only for textured draws; an untextured
            // one was filled flat with the first vertex's colour. That is what
            // painted black rectangles over the screen and blacked out the left
            // half of the main menu. The title darkens the edges of a scene with
            // a quad whose colour runs from opaque black at the border to fully
            // transparent in the middle, and taking the first vertex turns the
            // whole vignette into a solid black slab.
            //
            // Treating the guest's one blend mode as additive hid this, because
            // black adds nothing - and washed the fighter select, the venue
            // photographs and the autosave illustration out to white in the
            // process. The flat fill was the bug; the blend was not.
            const auto channel = [&](std::uint32_t shift) {
                return static_cast<float>((a.color >> shift) & 0xFFu) * pa +
                       static_cast<float>((b.color >> shift) & 0xFFu) * pb +
                       static_cast<float>((c.color >> shift) & 0xFFu) * pc;
            };
            std::uint32_t vertex = 0u;
            for (std::uint32_t shift = 0u; shift < 32u; shift += 8u) {
                float value = channel(shift);
                if (value < 0.0f) value = 0.0f;
                if (value > 255.0f) value = 255.0f;
                vertex |= static_cast<std::uint32_t>(value + 0.5f) << shift;
            }
            std::uint32_t color = vertex;
            if (textured) {
                color = combine_texel(
                    sample(texels, texture, a.u * pa + b.u * pb + c.u * pc,
                           a.v * pa + b.v * pb + c.v * pc, uv_in_texels),
                    vertex);
            }
            // Fog last, because it acts on the finished colour and not on the
            // texel that went into it.
            if (fogging) color = apply_fog(color, inv_w);
            // Depth stays linear in screen space: that is what a depth buffer
            // stores, and it is already the divided value.
            put_pixel(x, y, color, a.z * ba + b.z * bb + c.z * bc);
        }
    }
    };
    fill_rows(min_y, max_y, max_x - min_x + 1, band);
    note_white_block(tally, a.color, texture, textured, centre_x, centre_y);
    note_blackout(tally, a.color, texture, textured, centre_x, centre_y);
    note_black_painter(tally, a.color, texture, textured, centre_x, centre_y);
    note_census(tally, textured, centre_x,
                static_cast<std::uint64_t>(std::max(0, max_x - min_x + 1)) *
                    static_cast<std::uint64_t>(std::max(0, max_y - min_y + 1)));
    if (g_discard_scan && !textured && g_pixels_kept - tally.kept >= 5000u &&
        ((a.color | b.color | c.color) & 0x00FFFFFFu) == 0u) {
        describe_dark_quad(a, b, c, g_pixels_kept - tally.kept, centre_x, centre_y);
    }
    note_blended(tally, a.color, texture, textured, centre_x, centre_y);
    if (g_discard_scan && g_pixels_kept == tally.kept && g_pixels_dropped > tally.dropped &&
        centre_x < 240.0f) {
        describe_vanished(g_pixels_dropped - tally.dropped, a.color, texture, textured,
                          centre_x, centre_y);
    }
    end_primitive(tally);
}

} // namespace

// Whether to blend the four neighbouring texels rather than take the nearest.
//
// The title asks for it: register 0xC1 holds 0x000100, two byte fields holding
// 0 and 1, which is the shape of a minification and magnification filter pair.
// This rasteriser took the nearest texel for both, so every textured pixel in
// the game came out harder-edged than the hardware draws it.
//
// PSPRECOMP_DEFJAM_FILTER=0 restores nearest sampling, which is what the
// byte-exact comparisons against the GPU backend were made under.
// Whether a texel is multiplied by the vertex colour when the texture function
// register asks for it.
//
// PSPRECOMP_DEFJAM_MODULATE=0 turns it off in both backends. It used to be read
// only here, which made every comparison run with the card drawing meaningless.
bool texture_modulation_enabled() {
    static const bool enabled = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_MODULATE");
        return text != nullptr && text[0] != 0 && text[0] != 48;
    }();
    return enabled;
}

bool texture_filter_linear() {
    static const bool linear = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_FILTER");
        return text == nullptr || (text[0] != 0 && text[0] != 48);
    }();
    return linear;
}


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

std::string half_census_report() {
    if (!g_discard_scan) return {};
    std::ostringstream out;
    const auto line = [&out](const char *name, const HalfCensus &half) {
        out << "    " << name << "  " << half.primitives << " primitives (" << half.textured
            << " textured), " << half.covered << " pixels covered, " << half.written
            << " written";
        for (const auto &entry : half.targets) {
            out << "  |  buffer " << psprecomp::hex32(entry.first) << ": " << entry.second;
        }
        out << "\n";
    };
    out << "  buffers written since the last clear:  0x04000000 x" << g_heat_target_a.load()
        << "  other x" << g_heat_target_b.load();
    out << "   displayed: " << psprecomp::hex32(displayed_framebuffer()) << "\n";
    out << "  what the left half is written with: " << g_left_total.load() << " pixels, "
        << g_left_black_rgb.load() << " of them black" + std::string("\n");
    out << "    alpha 0 / 1-3 / 4-7 / 8-15 / 16-31 / 32-63 / 64-127 / 128-254 / 255:";
    for (const auto &bucket : g_left_alpha) out << " " << bucket.load();
    out << "\n";
    out << "  pixels written per screen cell since the last clear:\n";
    for (std::uint32_t row = 0; row < kHeatRows; ++row) {
        out << "   ";
        for (std::uint32_t column = 0; column < kHeatColumns; ++column) {
            out << " " << g_heat[row * kHeatColumns + column].load();
        }
        out << "\n";
    }
    out << "  clears that erased drawn pixels: " << g_clear_boundaries << "\n";
    out << "  the last whole stretch between two clears wrote: left " << g_left_last
        << ", right " << g_right_last << "\n";
    out << "  primitives by screen half, past the scan threshold:\n";
    line("left ", g_left);
    line("right", g_right);
    return out.str();
}

std::string missing_texture_report() {
    std::lock_guard<std::mutex> guard(g_missing_lock);
    if (g_missing_textures.empty()) return {};
    std::ostringstream out;
    out << "  pixels wanting a texture this profile could not read:\n";
    for (const auto &entry : g_missing_textures) {
        out << "    format " << texture_format_name(static_cast<TextureFormat>(entry.first))
            << "   " << entry.second << " pixels\n";
    }
    return out.str();
}

std::string blend_state_report() {
    std::ostringstream out;
    out << "  blend state: honouring registers " << (g_honour_blend_state ? "yes" : "no") << "\n";
    out << "    transparent pixels dropped with blending on  " << g_clear_alpha_blend_on << "\n";
    out << "    transparent pixels dropped with blending off " << g_clear_alpha_blend_off << "\n";
    return out.str();
}

void raster_set_scan_runtime(psprecomp::Runtime &runtime) { g_scan_runtime = &runtime; }

void raster_configure_side_split() {
    if (const char *text = std::getenv("PSPRECOMP_DEFJAM_BLEND")) {
        g_honour_blend_state = text[0] != 0 && text[0] != 48;
    }
    // 137,569,380 of the transparent pixels a run produces are drawn with
    // blending on against 424,800 with it off. The enable accounts for 99.7% of
    // them, so the unconditional drop this rasteriser applies to every alpha of
    // zero is very nearly the enable doing its job, not a missing alpha test.
    if (const char *text = std::getenv("PSPRECOMP_DEFJAM_DISCARD_SCAN")) {
        g_discard_scan = text[0] != 0 && text[0] != 48;
    }
    if (const char *text = std::getenv("PSPRECOMP_DEFJAM_SIDES")) {
        g_side_split = static_cast<std::uint32_t>(std::strtoul(text, nullptr, 0));
    }
}

void raster_reset() {
    g_stats = RasterStats{};
    g_surface.clear();
    g_surface_target = RenderTarget{};
}

RasterStats raster_stats() { return g_stats; }

std::string discard_state_report() {
    if (!g_discard_scan) return {};
    std::ostringstream out;
    out << "  registers differing between primitives that vanished and landed:\n";
    for (std::size_t i = 0; i < 256u; ++i) {
        const auto &gone = g_state_vanished[i];
        const auto &kept = g_state_landed[i];
        if (gone.empty() || kept.empty()) continue;
        bool same = gone.size() == kept.size();
        if (same) {
            for (const auto &entry : gone) {
                if (kept.count(entry.first) == 0u) same = false;
            }
        }
        if (same) continue;
        out << "    0x" << std::hex << i << std::dec << "   vanished";
        for (const auto &entry : gone) out << " " << entry.first;
        out << "   landed";
        for (const auto &entry : kept) out << " " << entry.first;
        out << "\n";
    }
    out << "    pixels kept " << g_pixels_kept << ", dropped " << g_pixels_dropped << "\n";
    return out.str();
}

std::string side_difference_report() {
    if (g_side_split == 0u) return {};
    std::ostringstream out;
    out << "  registers differing between screen halves (split at " << g_side_split << "):\n";
    for (std::size_t i = 0; i < 256u; ++i) {
        const auto &left = g_side_left[i];
        const auto &right = g_side_right[i];
        if (left.empty() && right.empty()) continue;
        bool same = left.size() == right.size();
        if (same) {
            for (const auto &entry : left) {
                if (right.count(entry.first) == 0u) same = false;
            }
        }
        if (same) continue;
        out << "    0x" << std::hex << i << std::dec << "   left";
        for (const auto &entry : left) out << " " << entry.first;
        out << "   right";
        for (const auto &entry : right) out << " " << entry.first;
        out << "\n";
    }
    return out.str();
}

std::string texture_function_report() {
    if (g_texture_function.empty()) return {};
    std::ostringstream out;
    out << "  texture function candidate 0xC4, by vertex colour:\n";
    for (const auto &entry : g_texture_function) {
        const std::uint64_t white = entry.second.first;
        const std::uint64_t coloured = entry.second.second;
        const std::uint64_t total = white + coloured;
        out << "    value " << entry.first << "   white " << white << "   coloured " << coloured;
        if (total != 0u) out << "   (" << (100u * coloured / total) << "% coloured)";
        out << "\n";
    }
    return out.str();
}

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

// Which buffer to read, when the question is where the picture went.
//
// PSPRECOMP_DEFJAM_DUMP_BUFFER names a guest address to dump instead of the one
// being drawn into. The title flips between two frame buffers and the main menu
// shows only part of what it draws; reading each buffer out separately says
// whether the missing part is sitting in the other one. Every measurement so
// far has been indirect, and three of them were designed badly enough to point
// the wrong way, so this one reads the memory itself.
std::uint32_t dump_buffer_override() {
    static const std::uint32_t address = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_DUMP_BUFFER");
        return text == nullptr ? 0u : static_cast<std::uint32_t>(std::strtoul(text, nullptr, 0));
    }();
    return address;
}

bool write_target_bmp(psprecomp::Runtime &runtime, const RenderTarget &target,
                      const std::string &path, std::string &error) {
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

// Reads one named buffer straight out of guest memory, whatever is being drawn
// into at the time.
bool dump_named_buffer(psprecomp::Runtime &runtime, std::uint32_t address, const std::string &path,
                       std::string &error) {
    flush_surface(runtime);
    RenderTarget target = g_surface_target.valid() ? g_surface_target : current_render_target();
    target.address = address;
    if (target.stride == 0u) target.stride = 512u;
    if (target.height == 0u) target.height = kDisplayHeight;
    if (target.width == 0u) target.width = kDisplayWidth;
    return write_target_bmp(runtime, target, path, error);
}

// Writes the host copy itself, without going through guest memory.
//
// The heat map says pixels land in the left half of the working copy and the
// buffer read back out of guest memory says they are not there. One of those is
// wrong and this says which: if the host copy holds the menu, the loss is in
// pushing it back; if it is black too, the writes counted are going somewhere
// this profile has not looked.
bool frame_scan_enabled() { return g_discard_scan; }

bool dump_host_surface(const std::string &path, std::string &error) {
    if (g_surface.empty() || !g_surface_target.valid()) {
        error = "no host surface";
        return false;
    }
    std::ofstream file(path, std::ios::binary);
    if (!file) {
        error = "could not open " + path;
        return false;
    }
    const std::uint32_t width = g_surface_target.width;
    const std::uint32_t height = g_surface_target.height;
    const std::uint32_t image_bytes = width * height * 4u;
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
    put32(54u + image_bytes);
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
            const std::uint32_t texel = g_surface[static_cast<std::size_t>(row) *
                                                      g_surface_target.stride + x];
            const std::uint8_t out[4] = {static_cast<std::uint8_t>((texel >> 16u) & 0xFFu),
                                         static_cast<std::uint8_t>((texel >> 8u) & 0xFFu),
                                         static_cast<std::uint8_t>(texel & 0xFFu),
                                         static_cast<std::uint8_t>((texel >> 24u) & 0xFFu)};
            file.write(reinterpret_cast<const char *>(out), 4);
        }
    }
    return static_cast<bool>(file);
}

bool dump_display(psprecomp::Runtime &runtime, const std::string &path, std::string &error) {
    flush_surface(runtime);
    RenderTarget target = g_surface_target.valid() ? g_surface_target : current_render_target();
    if (const std::uint32_t override_address = dump_buffer_override(); override_address != 0u) {
        target.address = override_address;
        if (target.stride == 0u) target.stride = 512u;
        if (target.height == 0u) target.height = kDisplayHeight;
        if (target.width == 0u) target.width = kDisplayWidth;
    }
    if (!target.valid()) {
        error = "no frame buffer has been drawn into";
        return false;
    }
    return write_target_bmp(runtime, target, path, error);
}

} // namespace defjam

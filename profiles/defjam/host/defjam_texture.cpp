#include "defjam_texture.hpp"

#include "defjam_ge.hpp"
#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <sstream>

namespace defjam {
namespace {

// GE register numbers for the texture state.
constexpr std::uint8_t kCmdTextureEnable = 0x1Eu;
constexpr std::uint8_t kCmdClutAddress = 0xB0u;
constexpr std::uint8_t kCmdClutAddressUpper = 0xB1u;
constexpr std::uint8_t kCmdTextureAddress0 = 0xA0u;
constexpr std::uint8_t kCmdTextureBufferWidth0 = 0xA8u;
constexpr std::uint8_t kCmdTextureSize0 = 0xB8u;
constexpr std::uint8_t kCmdTextureMode = 0xC2u;
constexpr std::uint8_t kCmdTextureFormat = 0xC3u;
constexpr std::uint8_t kCmdClutFormat = 0xC5u;

// A size register holds log2 of each dimension, so anything past 512 is not a
// texture the hardware can address and marks state we have misread.
constexpr std::uint32_t kMaxSizeLog2 = 9u;

TextureStats g_stats;
std::map<std::uint32_t, std::uint64_t> g_sizes;

} // namespace

const char *texture_format_name(TextureFormat format) {
    switch (format) {
    case TextureFormat::Rgb5650: return "5650";
    case TextureFormat::Rgba5551: return "5551";
    case TextureFormat::Rgba4444: return "4444";
    case TextureFormat::Rgba8888: return "8888";
    case TextureFormat::Clut4: return "clut4";
    case TextureFormat::Clut8: return "clut8";
    case TextureFormat::Clut16: return "clut16";
    case TextureFormat::Clut32: return "clut32";
    case TextureFormat::Dxt1: return "dxt1";
    case TextureFormat::Dxt3: return "dxt3";
    case TextureFormat::Dxt5: return "dxt5";
    }
    return "?";
}

bool texture_format_is_paletted(TextureFormat format) {
    return format == TextureFormat::Clut4 || format == TextureFormat::Clut8 ||
           format == TextureFormat::Clut16 || format == TextureFormat::Clut32;
}

bool texture_format_is_compressed(TextureFormat format) {
    return format == TextureFormat::Dxt1 || format == TextureFormat::Dxt3 ||
           format == TextureFormat::Dxt5;
}

TextureState current_texture_state() {
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    TextureState state;
    state.enabled = (registers[kCmdTextureEnable] & 1u) != 0u;

    // The address is split: the low 24 bits sit in the address register and the
    // high 8 in the buffer width register, which carries both.
    const std::uint32_t width_register = registers[kCmdTextureBufferWidth0];
    state.address = ((width_register & 0x00FF0000u) << 8u) |
                    (registers[kCmdTextureAddress0] & 0x00FFFFFFu);
    state.stride = width_register & 0x0000FFFFu;

    const std::uint32_t size_register = registers[kCmdTextureSize0];
    const std::uint32_t width_log2 = size_register & 0xFFu;
    const std::uint32_t height_log2 = (size_register >> 8u) & 0xFFu;
    if (width_log2 <= kMaxSizeLog2) state.width = 1u << width_log2;
    if (height_log2 <= kMaxSizeLog2) state.height = 1u << height_log2;

    state.format = static_cast<TextureFormat>(registers[kCmdTextureFormat] & 0xFu);

    const std::uint32_t mode = registers[kCmdTextureMode];
    state.swizzled = (mode & 1u) != 0u;
    state.levels = static_cast<std::uint8_t>(((mode >> 16u) & 0x7u) + 1u);

    const std::uint32_t clut_format = registers[kCmdClutFormat];
    state.clut_address = ((registers[kCmdClutAddressUpper] & 0x000F0000u) << 8u) |
                         (registers[kCmdClutAddress] & 0x00FFFFFFu);
    state.clut_format = static_cast<std::uint8_t>(clut_format & 0x3u);
    state.clut_shift = static_cast<std::uint8_t>((clut_format >> 2u) & 0x1Fu);
    state.clut_mask = static_cast<std::uint8_t>((clut_format >> 8u) & 0xFFu);
    state.clut_offset = static_cast<std::uint8_t>((clut_format >> 16u) & 0x1Fu);
    return state;
}

namespace {

// A palette entry, in whichever of the four packed forms the palette declares.
// The numbering here is the palette register's, which is not the vertex colour
// register's: 0 is 5650, 1 is 5551, 2 is 4444, 3 is 8888.
std::uint32_t expand_palette_entry(const std::uint8_t *at, std::uint8_t format) {
    const auto scale = [](std::uint32_t value, std::uint32_t bits) {
        const std::uint32_t max = (1u << bits) - 1u;
        return max == 0u ? 0u : (value * 255u + max / 2u) / max;
    };
    std::uint16_t packed{};
    switch (format) {
    case 0:
        std::memcpy(&packed, at, 2u);
        return 0xFF000000u | (scale((packed >> 11u) & 0x1Fu, 5u) << 16u) |
               (scale((packed >> 5u) & 0x3Fu, 6u) << 8u) | scale(packed & 0x1Fu, 5u);
    case 1:
        std::memcpy(&packed, at, 2u);
        return (scale((packed >> 15u) & 0x1u, 1u) << 24u) |
               (scale((packed >> 10u) & 0x1Fu, 5u) << 16u) |
               (scale((packed >> 5u) & 0x1Fu, 5u) << 8u) | scale(packed & 0x1Fu, 5u);
    case 2:
        std::memcpy(&packed, at, 2u);
        return (scale((packed >> 12u) & 0xFu, 4u) << 24u) |
               (scale((packed >> 8u) & 0xFu, 4u) << 16u) |
               (scale((packed >> 4u) & 0xFu, 4u) << 8u) | scale(packed & 0xFu, 4u);
    default: {
        std::uint32_t raw{};
        std::memcpy(&raw, at, 4u);
        return raw;
    }
    }
}

std::uint32_t palette_entry_bytes(std::uint8_t format) { return format == 3u ? 4u : 2u; }

} // namespace

void unswizzle(const std::uint8_t *source, std::size_t source_size, std::uint32_t stride_bytes,
               std::uint32_t rows, std::vector<std::uint8_t> &out) {
    out.assign(static_cast<std::size_t>(stride_bytes) * rows, 0u);
    if (source == nullptr || stride_bytes == 0u || rows == 0u) return;

    // Blocks are 16 bytes wide and 8 rows tall, stored one after another in
    // row-major order across the texture.
    const std::uint32_t blocks_across = (stride_bytes + 15u) / 16u;
    for (std::uint32_t y = 0; y < rows; ++y) {
        for (std::uint32_t x = 0; x < stride_bytes; ++x) {
            const std::uint32_t block = (x / 16u) + (y / 8u) * blocks_across;
            const std::size_t from =
                static_cast<std::size_t>(block) * 128u + (y % 8u) * 16u + (x % 16u);
            if (from >= source_size) continue;
            out[static_cast<std::size_t>(y) * stride_bytes + x] = source[from];
        }
    }
}

bool decode_texture(psprecomp::Runtime &runtime, const TextureState &state,
                    std::vector<std::uint32_t> &out, std::string &error) {
    out.clear();
    if (!state.valid()) {
        error = "the texture state does not describe a readable texture";
        return false;
    }
    if (texture_format_is_compressed(state.format) || state.format == TextureFormat::Clut16 ||
        state.format == TextureFormat::Clut32) {
        error = std::string("no decoder for ") + texture_format_name(state.format);
        return false;
    }

    // Row pitch in bytes. The stride register counts texels, and a 4-bit
    // format packs two of them into every byte.
    const std::uint32_t stride = state.stride != 0u ? state.stride : state.width;
    std::uint32_t stride_bytes = 0u;
    switch (state.format) {
    case TextureFormat::Clut4: stride_bytes = stride / 2u; break;
    case TextureFormat::Clut8: stride_bytes = stride; break;
    case TextureFormat::Rgba8888: stride_bytes = stride * 4u; break;
    default: stride_bytes = stride * 2u; break;
    }
    if (stride_bytes == 0u) {
        error = "the texture has a zero row pitch";
        return false;
    }

    const std::uint64_t span = static_cast<std::uint64_t>(stride_bytes) * state.height;
    if (span > 0x02000000ull) {
        error = "the texture is larger than any the hardware addresses";
        return false;
    }
    const auto bytes = static_cast<std::uint32_t>(span);
    if (!runtime.memory().contains(state.address, bytes)) {
        error = "the texture does not lie inside guest memory";
        return false;
    }

    std::vector<std::uint8_t> raw(bytes);
    runtime.memory().copy_out(state.address, raw);
    std::vector<std::uint8_t> linear;
    if (state.swizzled) {
        unswizzle(raw.data(), raw.size(), stride_bytes, state.height, linear);
    } else {
        linear = std::move(raw);
    }

    // The palette, for the indexed formats.
    std::vector<std::uint32_t> palette;
    if (texture_format_is_paletted(state.format)) {
        const std::uint32_t entries = state.format == TextureFormat::Clut4 ? 16u : 256u;
        const std::uint32_t entry_bytes = palette_entry_bytes(state.clut_format);
        const std::uint32_t palette_bytes = entries * entry_bytes;
        if (!runtime.memory().contains(state.clut_address, palette_bytes)) {
            error = "the palette does not lie inside guest memory";
            return false;
        }
        std::vector<std::uint8_t> palette_raw(palette_bytes);
        runtime.memory().copy_out(state.clut_address, palette_raw);
        palette.resize(entries);
        for (std::uint32_t i = 0; i < entries; ++i) {
            palette[i] = expand_palette_entry(
                palette_raw.data() + static_cast<std::size_t>(i) * entry_bytes, state.clut_format);
        }
    }

    out.assign(static_cast<std::size_t>(state.width) * state.height, 0u);
    for (std::uint32_t y = 0; y < state.height; ++y) {
        const std::size_t row = static_cast<std::size_t>(y) * stride_bytes;
        for (std::uint32_t x = 0; x < state.width; ++x) {
            std::uint32_t texel = 0u;
            switch (state.format) {
            case TextureFormat::Rgba8888: {
                const std::size_t at = row + static_cast<std::size_t>(x) * 4u;
                if (at + 4u > linear.size()) break;
                std::memcpy(&texel, linear.data() + at, 4u);
                break;
            }
            case TextureFormat::Clut8:
            case TextureFormat::Clut4: {
                const bool nibbles = state.format == TextureFormat::Clut4;
                const std::size_t at = row + (nibbles ? x / 2u : x);
                if (at >= linear.size()) break;
                std::uint32_t raw_index = linear[at];
                if (nibbles) raw_index = (x & 1u) != 0u ? (raw_index >> 4u) : (raw_index & 0xFu);
                // The palette registers select a window into the table.
                const std::uint32_t index = ((raw_index >> state.clut_shift) & state.clut_mask) |
                                            (static_cast<std::uint32_t>(state.clut_offset) << 4u);
                if (index >= palette.size()) {
                    ++g_stats.palette_out_of_range;
                    break;
                }
                texel = palette[index];
                break;
            }
            default: {
                const std::size_t at = row + static_cast<std::size_t>(x) * 2u;
                if (at + 2u > linear.size()) break;
                texel = expand_palette_entry(linear.data() + at,
                                             static_cast<std::uint8_t>(state.format));
                break;
            }
            }
            out[static_cast<std::size_t>(y) * state.width + x] = texel;
        }
    }
    return true;
}

void texture_reset() {
    g_stats = TextureStats{};
    g_sizes.clear();
}

TextureStats texture_stats() {
    TextureStats stats = g_stats;
    stats.sizes.assign(g_sizes.begin(), g_sizes.end());
    std::sort(stats.sizes.begin(), stats.sizes.end(),
              [](const auto &a, const auto &b) { return a.second > b.second; });
    return stats;
}

// Decoding every draw would be pointless work: a title sets a texture once and
// draws with it many times. This decodes when the state changes, which is the
// same shape a backend needs, and stops after a bound so a long run stays a
// measurement rather than a benchmark.
constexpr std::uint64_t kDecodeBudget = 4096u;
std::uint64_t g_last_signature = 0u;

void note_texture_draw(psprecomp::Runtime &runtime) {
    const TextureState state = current_texture_state();
    if (!state.enabled) {
        ++g_stats.untextured_draws;
        return;
    }
    ++g_stats.textured_draws;
    if (!state.valid()) {
        // Texturing is on but the state does not describe a texture we could
        // read. Counted rather than guessed at, because a wrong address here
        // samples whatever happens to be in memory.
        ++g_stats.unusable_state;
        return;
    }

    const auto index = static_cast<std::size_t>(state.format);
    if (index < std::size(g_stats.format_counts)) ++g_stats.format_counts[index];
    if (state.swizzled) ++g_stats.swizzled_draws;
    if (texture_format_is_paletted(state.format)) ++g_stats.paletted_draws;
    if (texture_format_is_compressed(state.format)) ++g_stats.compressed_draws;

    // Decode only when something about the texture actually changed.
    const std::uint64_t signature = (static_cast<std::uint64_t>(state.address) << 32u) ^
                                    (static_cast<std::uint64_t>(state.width) << 20u) ^
                                    (static_cast<std::uint64_t>(state.height) << 8u) ^
                                    static_cast<std::uint64_t>(state.format);
    if (signature != g_last_signature && g_stats.decoded + g_stats.decode_failures < kDecodeBudget) {
        g_last_signature = signature;
        static std::vector<std::uint32_t> pixels;
        std::string error;
        if (decode_texture(runtime, state, pixels, error)) {
            ++g_stats.decoded;
        } else {
            ++g_stats.decode_failures;
            static std::set<std::string> reported;
            if (reported.insert(error).second) runtime_log_line("texture decode: " + error);
        }
    }

    ++g_sizes[(state.width << 16u) | state.height];
    g_stats.max_width = std::max(g_stats.max_width, state.width);
    g_stats.max_height = std::max(g_stats.max_height, state.height);
}

std::string texture_report() {
    const TextureStats stats = texture_stats();
    std::ostringstream out;
    out << "  texture draws:      " << stats.textured_draws << " textured, "
        << stats.untextured_draws << " untextured, " << stats.unusable_state
        << " with unreadable state\n"
        << "  texture storage:    " << stats.swizzled_draws << " swizzled, "
        << stats.paletted_draws << " paletted, " << stats.compressed_draws << " compressed\n"
        << "  texture decode:     " << stats.decoded << " decoded, " << stats.decode_failures
        << " failed, " << stats.palette_out_of_range << " palette reads out of range\n";

    out << "  texture formats:   ";
    bool any = false;
    for (std::size_t i = 0; i < std::size(stats.format_counts); ++i) {
        if (stats.format_counts[i] == 0u) continue;
        out << " " << texture_format_name(static_cast<TextureFormat>(i)) << "="
            << stats.format_counts[i];
        any = true;
    }
    if (!any) out << " none";
    out << "\n";

    out << "  texture sizes:     ";
    for (std::size_t i = 0; i < stats.sizes.size() && i < 6u; ++i) {
        out << " " << (stats.sizes[i].first >> 16u) << "x" << (stats.sizes[i].first & 0xFFFFu)
            << "=" << stats.sizes[i].second;
    }
    if (stats.sizes.empty()) out << " none";
    out << "\n";
    return out.str();
}

} // namespace defjam

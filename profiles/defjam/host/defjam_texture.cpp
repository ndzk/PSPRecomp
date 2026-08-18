#include "defjam_texture.hpp"

#include "defjam_ge.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <map>
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

void note_texture_draw() {
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
        << stats.paletted_draws << " paletted, " << stats.compressed_draws << " compressed\n";

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

#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>
#include <vector>

namespace defjam {

// PSP texture state, read out of the GE register file.
//
// The vertices carry texture coordinates but say nothing about what is being
// sampled; that lives in the register file, spread across the address, buffer
// width, size, format and palette registers. This gathers it into one place.
//
// Register numbers are the published GE commands: texture address at 0xA0,
// buffer width at 0xA8, size at 0xB8, palette address at 0xB0, mode at 0xC2,
// format at 0xC3 and palette format at 0xC5, with texture mapping enabled by
// 0x1E.

enum class TextureFormat : std::uint8_t {
    Rgb5650 = 0,
    Rgba5551 = 1,
    Rgba4444 = 2,
    Rgba8888 = 3,
    Clut4 = 4,
    Clut8 = 5,
    Clut16 = 6,
    Clut32 = 7,
    Dxt1 = 8,
    Dxt3 = 9,
    Dxt5 = 10,
};

[[nodiscard]] const char *texture_format_name(TextureFormat format);

// Whether a format stores whole pixels or indices into a palette.
[[nodiscard]] bool texture_format_is_paletted(TextureFormat format);
// Whether it is one of the block-compressed forms.
[[nodiscard]] bool texture_format_is_compressed(TextureFormat format);

struct TextureState {
    bool enabled{};
    TextureFormat format{TextureFormat::Rgb5650};
    std::uint32_t address{};     // level 0
    std::uint32_t stride{};      // in texels, from the buffer width register
    std::uint32_t width{};       // 1 << the size register's low byte
    std::uint32_t height{};      // 1 << its high byte
    // The PSP can store a texture tiled rather than row by row. A decoder that
    // ignores this reads a picture that is scrambled in a regular pattern
    // rather than obviously wrong, so it is worth carrying explicitly.
    bool swizzled{};
    std::uint8_t levels{1};

    // Palette, for the CLUT formats.
    std::uint32_t clut_address{};
    std::uint8_t clut_format{};   // same 4 values as the low texture formats
    std::uint8_t clut_shift{};
    std::uint8_t clut_mask{};
    std::uint8_t clut_offset{};

    [[nodiscard]] bool valid() const {
        return enabled && address != 0u && width != 0u && height != 0u;
    }
};

// Reads the current state out of the latched GE register file.
[[nodiscard]] TextureState current_texture_state();

// Accumulated across a run, to answer what a decoder actually has to support
// before one is written.
struct TextureStats {
    std::uint64_t textured_draws{};
    std::uint64_t untextured_draws{};
    std::uint64_t swizzled_draws{};
    std::uint64_t paletted_draws{};
    std::uint64_t compressed_draws{};
    std::uint64_t unusable_state{};   // texturing on, but the state is not readable
    std::uint64_t format_counts[11]{};
    // Distinct width x height pairs, most frequent first when reported.
    std::vector<std::pair<std::uint32_t, std::uint64_t>> sizes;
    std::uint32_t max_width{}, max_height{};
};
[[nodiscard]] TextureStats texture_stats();
void texture_reset();
[[nodiscard]] std::string texture_report();

// Called by the display-list interpreter for each PRIM.
void note_texture_draw();

} // namespace defjam

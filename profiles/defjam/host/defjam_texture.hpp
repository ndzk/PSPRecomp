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

// Undoes the tiled layout the PSP stores textures in: blocks of 16 bytes by 8
// rows, laid out one block after another. `stride_bytes` is the row pitch of
// the linear result, and `rows` its height.
//
// Exposed because it is the part most likely to be wrong in a way that still
// produces a picture, so it is worth testing on its own.
void unswizzle(const std::uint8_t *source, std::size_t source_size, std::uint32_t stride_bytes,
               std::uint32_t rows, std::vector<std::uint8_t> &out);

// Decodes mip level 0 into ABGR8888, one word per texel, width * height words.
// Returns false with `error` set when the state names something this does not
// handle or the data is not all in guest memory.
[[nodiscard]] bool decode_texture(psprecomp::Runtime &runtime, const TextureState &state,
                                  std::vector<std::uint32_t> &out, std::string &error);

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
    std::uint64_t decoded{};              // textures turned into pixels
    std::uint64_t decode_failures{};
    std::uint64_t palette_out_of_range{}; // indices past the palette this format allows
};
[[nodiscard]] TextureStats texture_stats();
void texture_reset();
[[nodiscard]] std::string texture_report();

// Lists textures that decode to a single flat colour, and whether their source
// bytes were flat too, which separates one the title never wrote from one this
// decoder is getting wrong.
[[nodiscard]] std::string flat_texture_report();

// Records the texture registers in force for one draw, against whether the
// texture it samples carries any colour of its own.
void note_texture_function_use(std::uint32_t address, std::uint32_t function, std::uint32_t mode);
[[nodiscard]] std::string texture_function_split_report();

// Called by the display-list interpreter for each PRIM.
// Writes a texture's colour and alpha out as two images, for looking at.
void dump_overlay_texture(const TextureState &state, const std::vector<std::uint32_t> &out);

void note_texture_draw(psprecomp::Runtime &runtime);

} // namespace defjam

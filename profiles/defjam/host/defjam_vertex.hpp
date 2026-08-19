#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>
#include <vector>

namespace defjam {

// Declared rather than included: the texture header needs the vertex
// formats, so including it back here would close a loop.
struct TextureState;

// PSP vertex formats.
//
// The GE does not describe its vertices per draw; it latches one VTYPE word and
// every following PRIM reads vertices in that layout. Decoding it is the first
// thing any renderer backend needs, and it is worth having on its own: it turns
// "the title issued four million triangles" into "here is what they say".
//
// Field positions are from the published GU flags: texture at bit 0, colour at
// 2, normal at 5, position at 7, weight at 9, index at 11, weight count at 14,
// morph count at 18, and the transform bit at 23.

// Marks a field the format does not carry.
constexpr std::uint8_t kAbsent = 0xFFu;

struct VertexFormat {
    std::uint8_t texture{};     // 0 none, 1 u8, 2 u16, 3 float
    std::uint8_t color{};       // 0 none, 4 5650, 5 5551, 6 4444, 7 8888
    std::uint8_t normal{};      // 0 none, 1 s8, 2 s16, 3 float
    std::uint8_t position{};    // 1 s8, 2 s16, 3 float
    std::uint8_t weight{};
    std::uint8_t index{};       // 0 none, 1 u8, 2 u16
    std::uint8_t weight_count{};
    std::uint8_t morph_count{};
    // The transform bit. Set means the vertices are already in screen space and
    // the transform pipeline is skipped, which is how 2D overlays are drawn.
    bool through{};

    // Byte offsets within one vertex, and the stride between them. Each field
    // is aligned to its own size and the stride is padded to the largest
    // alignment present, which is what the hardware requires of the buffer.
    std::uint8_t weight_offset{};
    std::uint8_t texture_offset{};
    std::uint8_t color_offset{};
    std::uint8_t normal_offset{};
    std::uint8_t position_offset{};
    std::uint8_t stride{};

    [[nodiscard]] bool valid() const { return position != 0u && stride != 0u; }
};

[[nodiscard]] VertexFormat parse_vertex_type(std::uint32_t vtype);

// One decoded vertex, in a form a backend can use directly. Positions and
// texture coordinates from the integer formats are normalised for 3D draws and
// left as-is for through-mode ones, which is what those formats mean.
struct Vertex {
    float x{}, y{}, z{};
    float u{}, v{};
    // The reciprocal of the clip-space w this vertex was projected by, kept so
    // the rasteriser can correct for perspective.
    //
    // Interpolating texture coordinates straight across a triangle in screen
    // space is only right when the triangle is parallel to the screen. On one
    // that recedes, the far half is stretched and the near half compressed, and
    // the error grows with the angle - the warping familiar from hardware that
    // could not afford the divide. Carrying 1/w makes the correct interpolation
    // possible: weight u/w and v/w, weight 1/w alongside them, divide at the
    // end. It stays 1 for a vertex that arrives already in screen space, which
    // leaves every 2D overlay exactly as it was.
    float inv_w{1.0f};
    std::uint32_t color{0xFFFFFFFFu};   // ABGR8888
    bool has_uv{};
    bool has_color{};
    // Skinning weights, one per bone the format declares. The last weight is
    // often left implicit on hardware, but this title has not been observed
    // using skinning at all, so nothing here is inferred from its data.
    float weights[8]{};
    std::uint8_t weight_count{};
};

// Reads `count` vertices at `address`. Returns false when the format has no
// position, the stride is zero, or the buffer does not fit in guest memory -
// a partial decode is never reported as success.
[[nodiscard]] bool decode_vertices(psprecomp::Runtime &runtime, const VertexFormat &format,
                                   std::uint32_t address, std::uint32_t count,
                                   std::vector<Vertex> &out);

// Reads `count` indices at `index_address`, then the vertices they select from
// the array at `vertex_address`. Indices are u8 or u16 depending on the format.
//
// The vertex array has no stated length, so the bound is the largest index the
// draw actually uses: everything up to and including it must fit in guest
// memory, or the draw is refused rather than half-read.
[[nodiscard]] bool decode_indexed_vertices(psprecomp::Runtime &runtime, const VertexFormat &format,
                                           std::uint32_t vertex_address,
                                           std::uint32_t index_address, std::uint32_t count,
                                           std::vector<Vertex> &out);

// What the draws actually contained, accumulated across a run. This exists to
// answer whether the interpreter hands a backend enough to work with, before
// there is a backend to find out the hard way.
struct VertexStats {
    std::uint64_t draws_decoded{};
    std::uint64_t draws_skipped{};      // no vertex address, or a format we could not read
    std::uint64_t vertices_decoded{};
    std::uint64_t indexed_draws{};
    std::uint64_t indexed_decoded{};
    std::uint32_t max_index{};      // the largest index any draw referenced
    std::uint64_t transformed{};    // primitives put through the matrix pipeline
    std::uint64_t behind_eye{};     // dropped: a vertex behind the near plane
    std::uint64_t skinned{};        // primitives blended through bone matrices
    std::uint64_t clipped{};        // primitives the near plane cut rather than dropped
    // Drawn, but nowhere anyone can see. Distinguishes geometry that was
    // never emitted from geometry that landed off the screen, which look
    // the same in a picture and mean different bugs.
    std::uint64_t offscreen{};
    std::uint64_t through_draws{};
    std::uint64_t with_uv{}, with_color{}, with_normal{};
    // 0x53 and 0x54, the two registers the audit reports as written most often
    // and read by nothing, split by whether the draw carries normals.
    std::uint64_t normals_with_flag{};
    std::uint64_t normals_without_flag{};
    std::uint64_t normals_with_colour{};
    std::uint64_t plain_with_flag{};
    std::uint64_t plain_without_flag{};
    std::uint64_t plain_with_colour{};
    // The extent of decoded positions, kept apart for the two kinds of draw.
    // Mixing them hides the answer: through-mode vertices are screen pixels and
    // transformed ones are model coordinates, so one combined range is always
    // dominated by whichever happens to be larger.
    struct Extent {
        float min_x{}, min_y{}, min_z{}, max_x{}, max_y{}, max_z{};
        bool any{};
        void add(float x, float y, float z);
    };
    Extent screen;      // through-mode
    Extent model;       // transformed
    // Distinct VTYPE words seen, most frequent first when reported.
    std::vector<std::pair<std::uint32_t, std::uint64_t>> vertex_types;
};
[[nodiscard]] VertexStats vertex_stats();
void vertex_reset();
[[nodiscard]] std::string vertex_report();

// Called by the display-list interpreter for each PRIM.
// Puts vertices through world, view and projection, leaving them in screen
// pixels. Returns false when the primitive cannot be drawn - currently when any
// vertex falls behind the near plane, since nothing clips against it yet.
// Transforms, clips against the near plane and draws one primitive. Replaces
// transforming a whole draw at once, which could only ever keep or drop a
// primitive whole.
void transform_and_draw(psprecomp::Runtime &runtime, std::uint32_t primitive,
                        const std::vector<Vertex> &vertices, const VertexFormat &format,
                        const TextureState &texture);

[[nodiscard]] bool transform_to_screen(std::vector<Vertex> &vertices, std::uint32_t width,
                                       std::uint32_t height);

void note_draw(psprecomp::Runtime &runtime, std::uint32_t primitive, std::uint32_t vtype,
               std::uint32_t vertex_address,
               std::uint32_t index_address, std::uint32_t count);

} // namespace defjam

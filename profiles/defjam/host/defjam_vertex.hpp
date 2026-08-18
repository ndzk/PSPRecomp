#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>
#include <vector>

namespace defjam {

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
    std::uint32_t color{0xFFFFFFFFu};   // ABGR8888
    bool has_uv{};
    bool has_color{};
};

// Reads `count` vertices at `address`. Returns false when the format has no
// position, the stride is zero, or the buffer does not fit in guest memory -
// a partial decode is never reported as success.
[[nodiscard]] bool decode_vertices(psprecomp::Runtime &runtime, const VertexFormat &format,
                                   std::uint32_t address, std::uint32_t count,
                                   std::vector<Vertex> &out);

// What the draws actually contained, accumulated across a run. This exists to
// answer whether the interpreter hands a backend enough to work with, before
// there is a backend to find out the hard way.
struct VertexStats {
    std::uint64_t draws_decoded{};
    std::uint64_t draws_skipped{};      // no vertex address, or a format we could not read
    std::uint64_t vertices_decoded{};
    std::uint64_t indexed_draws{};
    std::uint64_t through_draws{};
    std::uint64_t with_uv{}, with_color{}, with_normal{};
    // The extent of every decoded position, which shows at a glance whether the
    // numbers are plausible coordinates or garbage.
    float min_x{}, min_y{}, min_z{}, max_x{}, max_y{}, max_z{};
    bool any_position{};
    // Distinct VTYPE words seen, most frequent first when reported.
    std::vector<std::pair<std::uint32_t, std::uint64_t>> vertex_types;
};
[[nodiscard]] VertexStats vertex_stats();
void vertex_reset();
[[nodiscard]] std::string vertex_report();

// Called by the display-list interpreter for each PRIM.
void note_draw(psprecomp::Runtime &runtime, std::uint32_t vtype, std::uint32_t vertex_address,
               std::uint32_t index_address, std::uint32_t count);

} // namespace defjam

#include "defjam_vertex.hpp"

#include "defjam_ge.hpp"
#include "defjam_profile.hpp"
#include "defjam_raster.hpp"
#include "defjam_texture.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <sstream>

namespace defjam {
namespace {

using psprecomp::Runtime;

// Bytes a component occupies, and the alignment it demands, which for every
// PSP vertex component is the size of its scalar.
struct Component {
    std::uint8_t size{};
    std::uint8_t align{};
};

Component position_component(std::uint8_t code) {
    switch (code) {
    case 1: return {3u, 1u};    // three signed bytes
    case 2: return {6u, 2u};    // three signed shorts
    case 3: return {12u, 4u};   // three floats
    default: return {};
    }
}

Component normal_component(std::uint8_t code) { return position_component(code); }

Component texture_component(std::uint8_t code) {
    switch (code) {
    case 1: return {2u, 1u};
    case 2: return {4u, 2u};
    case 3: return {8u, 4u};
    default: return {};
    }
}

Component color_component(std::uint8_t code) {
    switch (code) {
    case 4:
    case 5:
    case 6: return {2u, 2u};    // the packed 16-bit forms
    case 7: return {4u, 4u};    // ABGR8888
    default: return {};
    }
}

Component weight_component(std::uint8_t code, std::uint8_t count) {
    std::uint8_t scalar = 0u;
    switch (code) {
    case 1: scalar = 1u; break;
    case 2: scalar = 2u; break;
    case 3: scalar = 4u; break;
    default: return {};
    }
    const auto size = static_cast<std::uint8_t>(scalar * std::max<std::uint8_t>(1u, count));
    return {size, scalar};
}

std::uint32_t align_up(std::uint32_t value, std::uint8_t alignment) {
    if (alignment <= 1u) return value;
    const std::uint32_t mask = static_cast<std::uint32_t>(alignment) - 1u;
    return (value + mask) & ~mask;
}

// Integer positions and texture coordinates are normalised for transformed
// draws and taken raw for through-mode ones, which is what those formats mean.
float read_position_scalar(const std::uint8_t *at, std::uint8_t code, std::size_t index,
                           bool through) {
    switch (code) {
    case 1: {
        const auto raw = static_cast<std::int8_t>(at[index]);
        return through ? static_cast<float>(raw) : static_cast<float>(raw) / 128.0f;
    }
    case 2: {
        std::int16_t raw{};
        std::memcpy(&raw, at + index * 2u, 2u);
        return through ? static_cast<float>(raw) : static_cast<float>(raw) / 32768.0f;
    }
    case 3: {
        float raw{};
        std::memcpy(&raw, at + index * 4u, 4u);
        return raw;
    }
    default: return 0.0f;
    }
}

float read_texture_scalar(const std::uint8_t *at, std::uint8_t code, std::size_t index,
                          bool through) {
    switch (code) {
    case 1: {
        const std::uint8_t raw = at[index];
        return through ? static_cast<float>(raw) : static_cast<float>(raw) / 128.0f;
    }
    case 2: {
        std::uint16_t raw{};
        std::memcpy(&raw, at + index * 2u, 2u);
        return through ? static_cast<float>(raw) : static_cast<float>(raw) / 32768.0f;
    }
    case 3: {
        float raw{};
        std::memcpy(&raw, at + index * 4u, 4u);
        return raw;
    }
    default: return 0.0f;
    }
}

// The packed colour formats expand to ABGR8888 by scaling each field to its
// full range, so a saturated input stays saturated rather than losing its top.
std::uint32_t expand_color(const std::uint8_t *at, std::uint8_t code) {
    const auto scale = [](std::uint32_t value, std::uint32_t bits) {
        const std::uint32_t max = (1u << bits) - 1u;
        return max == 0u ? 0u : (value * 255u + max / 2u) / max;
    };
    std::uint16_t packed{};
    switch (code) {
    case 4:  // 5650, no alpha channel
        std::memcpy(&packed, at, 2u);
        return 0xFF000000u | (scale((packed >> 11u) & 0x1Fu, 5u) << 16u) |
               (scale((packed >> 5u) & 0x3Fu, 6u) << 8u) | scale(packed & 0x1Fu, 5u);
    case 5:  // 5551
        std::memcpy(&packed, at, 2u);
        return (scale((packed >> 15u) & 0x1u, 1u) << 24u) |
               (scale((packed >> 10u) & 0x1Fu, 5u) << 16u) |
               (scale((packed >> 5u) & 0x1Fu, 5u) << 8u) | scale(packed & 0x1Fu, 5u);
    case 6:  // 4444
        std::memcpy(&packed, at, 2u);
        return (scale((packed >> 12u) & 0xFu, 4u) << 24u) |
               (scale((packed >> 8u) & 0xFu, 4u) << 16u) |
               (scale((packed >> 4u) & 0xFu, 4u) << 8u) | scale(packed & 0xFu, 4u);
    case 7: {
        std::uint32_t raw{};
        std::memcpy(&raw, at, 4u);
        return raw;
    }
    default: return 0xFFFFFFFFu;
    }
}

VertexStats g_stats;
std::map<std::uint32_t, std::uint64_t> g_types;

} // namespace

VertexFormat parse_vertex_type(std::uint32_t vtype) {
    VertexFormat format;
    format.texture = static_cast<std::uint8_t>(vtype & 0x3u);
    format.color = static_cast<std::uint8_t>((vtype >> 2u) & 0x7u);
    format.normal = static_cast<std::uint8_t>((vtype >> 5u) & 0x3u);
    format.position = static_cast<std::uint8_t>((vtype >> 7u) & 0x3u);
    format.weight = static_cast<std::uint8_t>((vtype >> 9u) & 0x3u);
    format.index = static_cast<std::uint8_t>((vtype >> 11u) & 0x3u);
    format.weight_count = static_cast<std::uint8_t>(((vtype >> 14u) & 0x7u) + 1u);
    format.morph_count = static_cast<std::uint8_t>(((vtype >> 18u) & 0x7u) + 1u);
    format.through = ((vtype >> 23u) & 0x1u) != 0u;
    if (format.position == 0u) return format;   // no position: nothing to draw

    // Fields sit in this order, each aligned to its own scalar, and the stride
    // is padded to the widest alignment present so the next vertex starts
    // aligned as well.
    const Component weights = weight_component(format.weight, format.weight_count);
    const Component texture = texture_component(format.texture);
    const Component color = color_component(format.color);
    const Component normal = normal_component(format.normal);
    const Component position = position_component(format.position);

    std::uint32_t cursor = 0u;
    std::uint8_t widest = 1u;
    const auto place = [&cursor, &widest](const Component &component, std::uint8_t &offset) {
        if (component.size == 0u) {
            offset = kAbsent;
            return;
        }
        cursor = align_up(cursor, component.align);
        offset = static_cast<std::uint8_t>(cursor);
        cursor += component.size;
        widest = std::max(widest, component.align);
    };
    place(weights, format.weight_offset);
    place(texture, format.texture_offset);
    place(color, format.color_offset);
    place(normal, format.normal_offset);
    place(position, format.position_offset);

    format.stride = static_cast<std::uint8_t>(align_up(cursor, widest));
    return format;
}

namespace {

// Decodes one vertex out of a staged buffer.
Vertex read_vertex(const std::uint8_t *base, const VertexFormat &format) {
    Vertex vertex;
    const std::uint8_t *position = base + format.position_offset;
    vertex.x = read_position_scalar(position, format.position, 0u, format.through);
    vertex.y = read_position_scalar(position, format.position, 1u, format.through);
    vertex.z = read_position_scalar(position, format.position, 2u, format.through);
    if (format.texture_offset != kAbsent) {
        const std::uint8_t *texture = base + format.texture_offset;
        vertex.u = read_texture_scalar(texture, format.texture, 0u, format.through);
        vertex.v = read_texture_scalar(texture, format.texture, 1u, format.through);
        vertex.has_uv = true;
    }
    if (format.color_offset != kAbsent) {
        vertex.color = expand_color(base + format.color_offset, format.color);
        vertex.has_color = true;
    }
    if (format.weight_offset != kAbsent && format.weight != 0u) {
        const std::uint8_t *weights = base + format.weight_offset;
        vertex.weight_count = std::min<std::uint8_t>(format.weight_count, 8u);
        for (std::uint8_t i = 0; i < vertex.weight_count; ++i) {
            // Weights use the same scaling as the other integer components.
            vertex.weights[i] = read_texture_scalar(weights, format.weight, i, false);
        }
    }
    return vertex;
}

// Staging buffers reused across draws. A title issues over a million of them in
// a run, and a fresh allocation per draw dominates everything else here.
std::vector<std::uint8_t> g_vertex_staging;
std::vector<std::uint8_t> g_index_staging;

// Copies `span` bytes of guest memory into `staging`, or fails if they are not
// all there.
bool stage(Runtime &runtime, std::uint32_t address, std::uint32_t span,
           std::vector<std::uint8_t> &staging) {
    if (span == 0u || !runtime.memory().contains(address, span)) return false;
    staging.resize(span);
    runtime.memory().copy_out(address, staging);
    return true;
}

} // namespace

bool decode_vertices(Runtime &runtime, const VertexFormat &format, std::uint32_t address,
                     std::uint32_t count, std::vector<Vertex> &out) {
    out.clear();
    if (!format.valid() || address == 0u || count == 0u) return false;
    const std::uint64_t bytes = static_cast<std::uint64_t>(format.stride) * count;
    if (bytes > 0xFFFFFFFFull) return false;
    if (!stage(runtime, address, static_cast<std::uint32_t>(bytes), g_vertex_staging)) return false;

    out.resize(count);
    for (std::uint32_t i = 0; i < count; ++i) {
        out[i] = read_vertex(g_vertex_staging.data() + static_cast<std::size_t>(i) * format.stride,
                             format);
    }
    return true;
}

bool decode_indexed_vertices(Runtime &runtime, const VertexFormat &format,
                             std::uint32_t vertex_address, std::uint32_t index_address,
                             std::uint32_t count, std::vector<Vertex> &out) {
    out.clear();
    if (!format.valid() || vertex_address == 0u || index_address == 0u || count == 0u) return false;
    const std::uint32_t index_size = format.index == 1u ? 1u : format.index == 2u ? 2u : 0u;
    if (index_size == 0u) return false;

    const std::uint64_t index_bytes = static_cast<std::uint64_t>(index_size) * count;
    if (index_bytes > 0xFFFFFFFFull) return false;
    if (!stage(runtime, index_address, static_cast<std::uint32_t>(index_bytes), g_index_staging))
        return false;

    // The vertex array's length is not stated anywhere, so the largest index
    // used is what has to be in memory.
    std::uint32_t highest = 0u;
    for (std::uint32_t i = 0; i < count; ++i) {
        std::uint32_t index = 0u;
        if (index_size == 1u) {
            index = g_index_staging[i];
        } else {
            std::uint16_t raw{};
            std::memcpy(&raw, g_index_staging.data() + static_cast<std::size_t>(i) * 2u, 2u);
            index = raw;
        }
        highest = std::max(highest, index);
    }

    g_stats.max_index = std::max(g_stats.max_index, highest);
    const std::uint64_t vertex_bytes =
        (static_cast<std::uint64_t>(highest) + 1u) * format.stride;
    if (vertex_bytes > 0xFFFFFFFFull) return false;
    if (!stage(runtime, vertex_address, static_cast<std::uint32_t>(vertex_bytes), g_vertex_staging))
        return false;

    out.resize(count);
    for (std::uint32_t i = 0; i < count; ++i) {
        std::uint32_t index = 0u;
        if (index_size == 1u) {
            index = g_index_staging[i];
        } else {
            std::uint16_t raw{};
            std::memcpy(&raw, g_index_staging.data() + static_cast<std::size_t>(i) * 2u, 2u);
            index = raw;
        }
        out[i] = read_vertex(
            g_vertex_staging.data() + static_cast<std::size_t>(index) * format.stride, format);
    }
    return true;
}

void VertexStats::Extent::add(float x, float y, float z) {
    if (!any) {
        min_x = max_x = x;
        min_y = max_y = y;
        min_z = max_z = z;
        any = true;
        return;
    }
    min_x = std::min(min_x, x);
    max_x = std::max(max_x, x);
    min_y = std::min(min_y, y);
    max_y = std::max(max_y, y);
    min_z = std::min(min_z, z);
    max_z = std::max(max_z, z);
}

namespace {

// World and view are four columns of three, with an implicit fourth row of
// (0,0,0,1). Projection is a full four by four, also column-major.
void apply_4x3(const float *m, float x, float y, float z, float &ox, float &oy, float &oz) {
    ox = m[0] * x + m[3] * y + m[6] * z + m[9];
    oy = m[1] * x + m[4] * y + m[7] * z + m[10];
    oz = m[2] * x + m[5] * y + m[8] * z + m[11];
}

// Transforms one position all the way to screen pixels. Returns false when the
// vertex is behind the eye, where the perspective divide has no meaning.

// Clipping against the near plane, which is the difference between a character
// being drawn and not being drawn at all.
//
// A vertex behind the eye used to drop the whole primitive, and one just in
// front of the plane survived the w test and then divided by almost nothing,
// which is where screen coordinates in the tens of millions came from. Both are
// the same omission. Measured on a fight: 135,974 of 1,883,137 transformed
// draws thrown away whole, and the characters standing closest to the camera
// were the ones that disappeared.
//
// This has to happen before the divide. After it the near plane is no longer a
// plane in that space and the damage is already done.
struct ClipVertex {
    float x{}, y{}, z{}, w{};
    float u{}, v{};
    std::uint32_t color{0xFFFFFFFFu};
    bool has_uv{};
    bool has_color{};
};

// Where a vertex sits relative to the near plane. The PSP maps that plane to a
// device depth of minus one, so it is the set of points with z equal to minus
// w, and anything in front of it has a positive distance here.
//
// The plane is nudged a hair behind that, and it has to be. This title draws
// its flat content through the transform with z landing exactly on minus w,
// where the distance is zero and rounding decides the sign: cutting at exactly
// the plane threw away 989,010 primitives and left the screen black. A
// thousandth of w is far below one step of a sixteen bit depth buffer, so
// nothing that should have been cut survives it.
constexpr float kOnThePlane = 1.0f / 1024.0f;

float near_distance(const ClipVertex &vertex) {
    return vertex.z + vertex.w * (1.0f + kOnThePlane);
}

ClipVertex between(const ClipVertex &from, const ClipVertex &to, float t) {
    ClipVertex out;
    out.x = from.x + (to.x - from.x) * t;
    out.y = from.y + (to.y - from.y) * t;
    out.z = from.z + (to.z - from.z) * t;
    out.w = from.w + (to.w - from.w) * t;
    out.u = from.u + (to.u - from.u) * t;
    out.v = from.v + (to.v - from.v) * t;
    out.has_uv = from.has_uv;
    out.has_color = from.has_color;
    // Colour is interpolated per channel in the same proportion, which is what
    // the rasteriser does across a triangle.
    std::uint32_t blended = 0u;
    for (std::uint32_t shift = 0u; shift < 32u; shift += 8u) {
        const float a = static_cast<float>((from.color >> shift) & 0xFFu);
        const float b = static_cast<float>((to.color >> shift) & 0xFFu);
        float mixed = a + (b - a) * t;
        if (mixed < 0.0f) mixed = 0.0f;
        if (mixed > 255.0f) mixed = 255.0f;
        blended |= static_cast<std::uint32_t>(mixed + 0.5f) << shift;
    }
    out.color = blended;
    return out;
}

// One polygon against one plane. A triangle comes out as nothing, as itself, or
// as a quad when a single corner was behind.
std::size_t clip_against_near(const ClipVertex *in, std::size_t count, ClipVertex *out) {
    std::size_t produced = 0u;
    for (std::size_t i = 0; i < count; ++i) {
        const ClipVertex &current = in[i];
        const ClipVertex &next = in[(i + 1u) % count];
        const float here = near_distance(current);
        const float there = near_distance(next);
        const bool inside = here > 0.0f;
        const bool next_inside = there > 0.0f;
        if (inside) out[produced++] = current;
        if (inside != next_inside) {
            const float span = here - there;
            const float t = span == 0.0f ? 0.0f : here / span;
            out[produced++] = between(current, next, t);
        }
        if (produced + 2u >= 8u) break;
    }
    return produced;
}

bool to_screen(const GeMatrices &matrices, const Vertex &vertex, std::uint32_t width,
               std::uint32_t height, float &sx, float &sy, float &sz) {
    const float x = vertex.x, y = vertex.y, z = vertex.z;
    float wx = x, wy = y, wz = z;
    if (vertex.weight_count != 0u && matrices.bones_seen != 0u) {
        // A skinned vertex is placed by a weighted blend of bone matrices in
        // place of the world matrix. Blending the transformed positions is
        // equivalent to blending the matrices and cheaper to reason about.
        wx = wy = wz = 0.0f;
        for (std::uint8_t i = 0; i < vertex.weight_count && i < matrices.bones_seen; ++i) {
            const float weight = vertex.weights[i];
            if (weight == 0.0f) continue;
            float bx{}, by{}, bz{};
            apply_4x3(matrices.bone[i], x, y, z, bx, by, bz);
            wx += bx * weight;
            wy += by * weight;
            wz += bz * weight;
        }
    }
    // Bones pose, the world matrix places. See to_clip.
    if (matrices.world_seen) {
        const float px = wx, py = wy, pz = wz;
        apply_4x3(matrices.world, px, py, pz, wx, wy, wz);
    }
    float vx = wx, vy = wy, vz = wz;
    if (matrices.view_seen) apply_4x3(matrices.view, wx, wy, wz, vx, vy, vz);

    const float *p = matrices.projection;
    float cx = vx, cy = vy, cz = vz, cw = 1.0f;
    if (matrices.projection_seen) {
        cx = p[0] * vx + p[4] * vy + p[8] * vz + p[12];
        cy = p[1] * vx + p[5] * vy + p[9] * vz + p[13];
        cz = p[2] * vx + p[6] * vy + p[10] * vz + p[14];
        cw = p[3] * vx + p[7] * vy + p[11] * vz + p[15];
    }
    // A w at or below zero is behind the near plane. Proper clipping would cut
    // the primitive against it; dropping the vertex is the honest short version
    // and loses geometry rather than smearing it across the screen.
    if (!(cw > 0.0001f)) return false;

    const float ndc_x = cx / cw;
    const float ndc_y = cy / cw;
    const float ndc_z = cz / cw;

    // The viewport says where the clip cube lands. Its scales and centres are
    // floats in the top 24 bits of their operands, like the matrices, and the
    // offsets are in sixteenths of a pixel.
    //
    // This title states 240 and -136 for the scales against centres of 2048,
    // with offsets of 1808 and 1912 - which comes to x = ndc.x * 240 + 240 and
    // y = ndc.y * -136 + 136, mapping the cube onto 480 by 272 with the
    // vertical flip built into the negative scale rather than applied by hand.
    const Viewport viewport = current_viewport();
    (void)width;
    (void)height;
    sx = ndc_x * viewport.x_scale + viewport.x_center - viewport.x_offset;
    sy = ndc_y * viewport.y_scale + viewport.y_center - viewport.y_offset;
    // Depth comes out in the buffer range directly. The z scale is negative
    // here, so the near plane is the high end - the opposite of the mapping
    // this used before reading the registers.
    sz = ndc_z * viewport.z_scale + viewport.z_center;
    return true;
}

} // namespace

bool transform_to_screen(std::vector<Vertex> &vertices, std::uint32_t width, std::uint32_t height) {
    const GeMatrices &matrices = ge_matrices();
    if (!matrices.projection_seen) return false;   // nothing to transform with

    // Every transformed vertex in a run lands at depth 65535, which is what
    // cz == -cw gives for all of them. Whether that is a defect in this pipeline
    // or the matrices the title actually sets is not something to reason about
    // from the symptom, so the first transform reports what it was handed.
    static bool described = false;
    if (!described) {
        described = true;
        const auto row = [](const char *label, const float *m, std::uint32_t count) {
            std::string text = label;
            for (std::uint32_t i = 0; i < count; ++i) {
                text += " " + std::to_string(m[i]);
            }
            runtime_log_line(text);
        };
        runtime_log_line("first transformed draw, matrices as captured:");
        if (matrices.world_seen) row("  world     ", matrices.world, 12u);
        if (matrices.view_seen) row("  view      ", matrices.view, 12u);
        row("  projection", matrices.projection, 16u);
        const Viewport viewport = current_viewport();
        runtime_log_line("  viewport   scale " + std::to_string(viewport.x_scale) + " " +
                         std::to_string(viewport.y_scale) + " " + std::to_string(viewport.z_scale) +
                         "  centre " + std::to_string(viewport.x_center) + " " +
                         std::to_string(viewport.y_center) + " " +
                         std::to_string(viewport.z_center));
        if (!vertices.empty()) {
            runtime_log_line("  first vertex " + std::to_string(vertices[0].x) + " " +
                             std::to_string(vertices[0].y) + " " + std::to_string(vertices[0].z));
        }
    }

    for (Vertex &vertex : vertices) {
        float sx{}, sy{}, sz{};
        if (vertex.weight_count != 0u) {
            ++g_stats.skinned;
            // Skinned positions come out in the tens of millions, which is not
            // a pose but arithmetic gone wrong. Which of the three inputs is at
            // fault - the weights, the bone matrices, or how many of them are
            // live - is not decidable from the symptom, so the first one says
            // what it was handed.
            static bool described = false;
            if (!described) {
                described = true;
                std::string text = "first skinned vertex: weights";
                for (std::uint8_t i = 0; i < vertex.weight_count; ++i) {
                    text += " " + std::to_string(vertex.weights[i]);
                }
                text += ", bones seen " + std::to_string(matrices.bones_seen);
                runtime_log_line(text);
                runtime_log_line("  model position " + std::to_string(vertex.x) + " " +
                                 std::to_string(vertex.y) + " " + std::to_string(vertex.z));
                for (std::uint8_t b = 0; b < matrices.bones_seen && b < 8u; ++b) {
                    std::string row = "  bone " + std::to_string(b);
                    for (std::uint32_t e = 0; e < 12u; ++e) {
                        row += " " + std::to_string(matrices.bone[b][e]);
                    }
                    runtime_log_line(row);
                }
            }
        }
        if (!to_screen(matrices, vertex, width, height, sx, sy, sz)) {
            ++g_stats.behind_eye;
            return false;   // drop the whole primitive rather than part of it
        }
        vertex.x = sx;
        vertex.y = sy;
        vertex.z = sz;
    }
    ++g_stats.transformed;
    return true;
}


namespace {

// The transform, stopping at clip space instead of going all the way to the
// screen, so the near plane can still be cut against.
void to_clip(const GeMatrices &matrices, const Vertex &vertex, ClipVertex &out) {
    const float x = vertex.x, y = vertex.y, z = vertex.z;
    float wx = x, wy = y, wz = z;
    if (vertex.weight_count != 0u && matrices.bones_seen != 0u) {
        wx = wy = wz = 0.0f;
        for (std::uint8_t i = 0; i < vertex.weight_count && i < matrices.bones_seen; ++i) {
            const float weight = vertex.weights[i];
            if (weight == 0.0f) continue;
            float bx{}, by{}, bz{};
            apply_4x3(matrices.bone[i], x, y, z, bx, by, bz);
            wx += bx * weight;
            wy += by * weight;
            wz += bz * weight;
        }
    }
    // The world matrix applies either way, and that is the whole bug behind
    // characters that were drawn and never seen.
    //
    // Bones pose a model in its own space: measured on a fight, they moved a
    // vertex from (4.88, -1.49, 2.78) to (4.78, -1.05, 2.62), which is a pose
    // and not a placement. The world matrix is what puts the posed model in the
    // scene - the same vertex through it lands at (17.9, 16.4, 48.6). Treating
    // the two as alternatives left every skinned model sitting near the origin
    // while the camera looked at a scene a hundred units away, so 86 million of
    // 98 million primitives were drawn off the screen.
    if (matrices.world_seen) {
        const float px = wx, py = wy, pz = wz;
        apply_4x3(matrices.world, px, py, pz, wx, wy, wz);
    }
    float vx = wx, vy = wy, vz = wz;
    if (matrices.view_seen) apply_4x3(matrices.view, wx, wy, wz, vx, vy, vz);

    const float *p = matrices.projection;
    out.x = p[0] * vx + p[4] * vy + p[8] * vz + p[12];
    out.y = p[1] * vx + p[5] * vy + p[9] * vz + p[13];
    out.z = p[2] * vx + p[6] * vy + p[10] * vz + p[14];
    out.w = p[3] * vx + p[7] * vy + p[11] * vz + p[15];
    out.u = vertex.u;
    out.v = vertex.v;
    out.color = vertex.color;
    out.has_uv = vertex.has_uv;
    out.has_color = vertex.has_color;
}

// The divide and the viewport, for a vertex already known to be in front.
Vertex to_screen_from_clip(const ClipVertex &clip) {
    Vertex out;
    const float inverse = 1.0f / clip.w;
    const float ndc_x = clip.x * inverse;
    const float ndc_y = clip.y * inverse;
    const float ndc_z = clip.z * inverse;
    const Viewport viewport = current_viewport();
    out.x = ndc_x * viewport.x_scale + viewport.x_center - viewport.x_offset;
    out.y = ndc_y * viewport.y_scale + viewport.y_center - viewport.y_offset;
    out.z = ndc_z * viewport.z_scale + viewport.z_center;
    out.inv_w = inverse;
    out.u = clip.u;
    out.v = clip.v;
    out.color = clip.color;
    out.has_uv = clip.has_uv;
    out.has_color = clip.has_color;
    return out;
}

void draw_clipped_triangle(Runtime &runtime, const ClipVertex &a, const ClipVertex &b,
                           const ClipVertex &c, const VertexFormat &format,
                           const TextureState &texture) {
    const ClipVertex in[3] = {a, b, c};
    ClipVertex out[8];
    const std::size_t produced = clip_against_near(in, 3u, out);
    if (produced < 3u) {
        ++g_stats.behind_eye;
        return;
    }
    if (produced > 3u) ++g_stats.clipped;

    // The near plane implies a positive w for any sane projection, but a
    // primitive that reaches here with one is not something to divide by.
    for (std::size_t i = 0; i < produced; ++i) {
        if (!(out[i].w > 0.0f)) {
            ++g_stats.behind_eye;
            return;
        }
    }
    static std::vector<Vertex> screen;
    screen.resize(produced);
    for (std::size_t i = 0; i < produced; ++i) screen[i] = to_screen_from_clip(out[i]);

    {
        const RenderTarget target = current_render_target();
        float min_x = screen[0].x, max_x = screen[0].x;
        float min_y = screen[0].y, max_y = screen[0].y;
        for (std::size_t i = 1; i < produced; ++i) {
            min_x = std::min(min_x, screen[i].x);
            max_x = std::max(max_x, screen[i].x);
            min_y = std::min(min_y, screen[i].y);
            max_y = std::max(max_y, screen[i].y);
        }
        if (max_x < 0.0f || max_y < 0.0f || min_x >= static_cast<float>(target.width) ||
            min_y >= static_cast<float>(target.height)) {
            ++g_stats.offscreen;
        }
    // Primitives that span the screen and end on a straight horizontal edge.
    //
    // A fight shows a hard horizontal boundary running the full width of the
    // frame, with everything above it darkened; it cuts through the fighters'
    // bodies, so it is an overlay rather than scenery. That boundary is the edge
    // of a quad, and this finds the quad by its geometry instead of by what its
    // pixels come out as - which matters because it runs in the shared vertex
    // stage and so works on the graphics backend, not only on the reference.
    //
    // PSPRECOMP_DEFJAM_EDGE=<row> names the screen row to look for.
    {
        static const float wanted = [] {
            const char *text = std::getenv("PSPRECOMP_DEFJAM_EDGE");
            return text == nullptr ? -1.0f : static_cast<float>(std::atof(text));
        }();
        if (wanted >= 0.0f) {
            static int described = 0;
            // On screen, and covering most of its width. The first pass asked
            // only for width and filled up with wall panels sitting entirely to
            // the left of the frame, which cannot draw the boundary that is
            // visible in it.
            const bool onscreen = max_x > 0.0f && min_x < 480.0f && max_y > 0.0f && min_y < 272.0f;
            const float visible = std::min(max_x, 480.0f) - std::max(min_x, 0.0f);
            const bool wide = onscreen && visible >= 380.0f;
            // Every screen-spanning overlay, not only ones ending exactly where
            // a row was guessed. The row came from measuring a scaled window
            // screenshot, so it is good to a few pixels at best, and a two-pixel
            // window around a guess is how the last seven measurements missed.
            const bool edge = wanted == 0.0f || std::fabs(max_y - wanted) <= 10.0f ||
                              std::fabs(min_y - wanted) <= 10.0f;
            // One line per distinct overlay, not the first sixty seen.
            //
            // A plain cap fills during boot and never reaches the screen being
            // investigated - that has now cost three sessions. Keying on what
            // the overlay is instead means the handful drawn while starting up
            // take a handful of slots and leave the rest free for whatever a
            // fight draws, whenever the fight happens.
            static std::set<std::uint64_t> kinds;
            const std::uint64_t kind = (static_cast<std::uint64_t>(texture.address) << 32u) ^
                                       (static_cast<std::uint64_t>(screen[0].color) << 4u) ^
                                       static_cast<std::uint64_t>(texture.enabled ? 1u : 0u);
            // The blended screen-spanning overlay, dumped where it is found.
            //
            // Naming its texture by address does not survive a restart: the
            // title loads it wherever there is room, so an address read out of
            // one run's log is a different texture, or nothing, in the next.
            // Recognising it by what it is - blended, on screen, spanning the
            // frame, among four hundred unblended scenery panels - does.
            // Skipping the near-plane blended overlays, on request.
            //
            // One of these draws the dark band across a fight. Every reading of
            // the data so far says the title asks for it: the depth is 65535,
            // which with this game's negative depth scale is the near plane, and
            // the texture is a structure fading into a dark gradient. Three
            // times today a conclusion of "this is a fault" turned into "the
            // title asks for this", so rather than a fourth guess at the alpha
            // formula, here is the frame with the thing left out. If it looks
            // right without it, the draw is wrong; if it looks emptier, the draw
            // belongs and only its strength is in question.
            static const bool skip_overlays = [] {
                const char *text = std::getenv("PSPRECOMP_DEFJAM_NO_OVERLAY");
                return text != nullptr && text[0] != 0 && text[0] != 48;
            }();
            if (skip_overlays && wide && texture.enabled &&
                (ge_registers()[0x1Du] & 1u) != 0u && screen[0].z >= 65000.0f) {
                ++g_stats.transformed;
                return;
            }
            if (wide && texture.enabled && (ge_registers()[0x1Du] & 1u) != 0u) {
                // Every distinct one, not the first. The first blended overlay
                // in a run is a wall on the boot screen, and a single-shot dump
                // never gets past it to the one a fight draws.
                static std::set<std::uint32_t> dumped_textures;
                if (dumped_textures.size() < 24u &&
                    dumped_textures.count(texture.address) == 0u) {
                    std::vector<std::uint32_t> texels;
                    std::string error;
                    if (decode_texture(runtime, texture, texels, error) && !texels.empty()) {
                        dumped_textures.insert(texture.address);
                        dump_overlay_texture(texture, texels);
                        // The texture coordinates this overlay actually samples.
                        //
                        // Its alpha is a smooth vertical gradient and the screen
                        // shows a hard horizontal edge. A gradient stretched over
                        // 182 rows cannot produce a hard line, so the sampled
                        // range must be missing the transition and sitting inside
                        // one flat side of it. These are the numbers that say so.
                        std::string uv = "  overlay uv:";
                        for (std::size_t i = 0; i < produced; ++i) {
                            uv += " (" + std::to_string(screen[i].u) + "," +
                                  std::to_string(screen[i].v) + ")";
                        }
                        uv += "  through " + std::to_string(format.through ? 1 : 0) +
                              "  texture " + std::to_string(texture.width) + "x" +
                              std::to_string(texture.height) + " stride " +
                              std::to_string(texture.stride);
                        runtime_log_line(uv);
                        // Depth, which this scan has never printed for these
                        // draws.
                        //
                        // The coordinates turned out to cover the whole texture,
                        // so nothing is collapsing the gradient: the hard line on
                        // screen is the quad's own top edge, where the texture is
                        // opaque. A quad that should be hidden behind the arena
                        // and is not would look exactly like that - a band across
                        // the frame cutting through the fighters.
                        const std::array<std::uint32_t, 256> &depth_regs = ge_registers();
                        runtime_log_line(
                            "  overlay depth: test " + std::to_string(depth_regs[0x23u]) +
                            "  func " + std::to_string(depth_regs[0xDEu]) + "  write-disable " +
                            std::to_string(depth_regs[0xE7u]) + "  z " +
                            std::to_string(screen[0].z) + ".." + std::to_string(screen[2].z));
                        runtime_log_line("overlay texture dumped: " +
                                         psprecomp::hex32(texture.address) + " " +
                                         std::to_string(texture.width) + "x" +
                                         std::to_string(texture.height));
                    }
                }
            }
            if (wide && edge && described < 400 && kinds.insert(kind).second) {
                ++described;
                const std::array<std::uint32_t, 256> &regs = ge_registers();
                runtime_log_line(
                    "edge primitive x " + std::to_string(min_x) + ".." + std::to_string(max_x) +
                    "  y " + std::to_string(min_y) + ".." + std::to_string(max_y) + "  colour " +
                    psprecomp::hex32(screen[0].color) + "  textured " +
                    std::to_string(texture.enabled ? 1 : 0) + "  texture " +
                    psprecomp::hex32(texture.address) + " " + std::to_string(texture.width) + "x" +
                    std::to_string(texture.height) + " format " +
                    std::to_string(static_cast<int>(texture.format)) + "  0x1d " +
                    std::to_string(regs[0x1Du]) + "  0xc6 " + std::to_string(regs[0xC6u]) +
                    "  0xc4 " + std::to_string(regs[0xC4u]));
            }
        }
    }
    }

    // The clipped polygon is convex, so a fan from its first corner covers it.
    static std::vector<Vertex> triangle(3u);
    for (std::size_t i = 1u; i + 1u < produced; ++i) {
        triangle[0] = screen[0];
        triangle[1] = screen[i];
        triangle[2] = screen[i + 1u];
        (void)rasterise(runtime, 3u, triangle, format, texture, true);
    }
    ++g_stats.transformed;
}

} // namespace

void transform_and_draw(Runtime &runtime, std::uint32_t primitive,
                        const std::vector<Vertex> &vertices, const VertexFormat &format,
                        const TextureState &texture) {
    const GeMatrices &matrices = ge_matrices();
    if (!matrices.projection_seen) return;

    static std::vector<ClipVertex> clip;
    clip.resize(vertices.size());
    for (std::size_t i = 0; i < vertices.size(); ++i) {
        if (vertices[i].weight_count != 0u) ++g_stats.skinned;
        to_clip(matrices, vertices[i], clip[i]);

        // Skinned geometry is drawn and lands off the screen: 86 million of 98
        // million primitives, against 78 million skinned. Where along the chain
        // it goes wrong is not visible from either end, so one vertex reports
        // every step of it.
        static bool traced = false;
        if (!traced && vertices[i].weight_count != 0u) {
            traced = true;
            const Vertex &v = vertices[i];
            const ClipVertex &c = clip[i];
            runtime_log_line("skinned chain: model " + std::to_string(v.x) + " " +
                             std::to_string(v.y) + " " + std::to_string(v.z));
            // The two steps between the model and clip space, recomputed here
            // so the trace says which one moves the vertex out of the frustum.
            float bx = 0.0f, by = 0.0f, bz = 0.0f;
            for (std::uint8_t k = 0; k < v.weight_count && k < matrices.bones_seen; ++k) {
                if (v.weights[k] == 0.0f) continue;
                float tx{}, ty{}, tz{};
                apply_4x3(matrices.bone[k], v.x, v.y, v.z, tx, ty, tz);
                bx += tx * v.weights[k];
                by += ty * v.weights[k];
                bz += tz * v.weights[k];
            }
            float sum = 0.0f;
            for (std::uint8_t k = 0; k < v.weight_count; ++k) sum += v.weights[k];
            runtime_log_line("  after bones " + std::to_string(bx) + " " + std::to_string(by) +
                             " " + std::to_string(bz) + "  weights sum " + std::to_string(sum));
            float ex = bx, ey = by, ez = bz;
            if (matrices.view_seen) apply_4x3(matrices.view, bx, by, bz, ex, ey, ez);
            runtime_log_line("  after view " + std::to_string(ex) + " " + std::to_string(ey) +
                             " " + std::to_string(ez));
            if (matrices.world_seen) {
                float ax{}, ay{}, az{};
                apply_4x3(matrices.world, v.x, v.y, v.z, ax, ay, az);
                runtime_log_line("  world instead " + std::to_string(ax) + " " +
                                 std::to_string(ay) + " " + std::to_string(az));
            }
            runtime_log_line("  clip " + std::to_string(c.x) + " " + std::to_string(c.y) +
                             " " + std::to_string(c.z) + " w " + std::to_string(c.w));
            if (c.w > 0.0f) {
                const Vertex screen = to_screen_from_clip(c);
                runtime_log_line("  screen " + std::to_string(screen.x) + " " +
                                 std::to_string(screen.y) + " depth " +
                                 std::to_string(screen.z));
            }
            const Viewport vp = current_viewport();
            runtime_log_line("  viewport scale " + std::to_string(vp.x_scale) + " " +
                             std::to_string(vp.y_scale) + "  centre " +
                             std::to_string(vp.x_center) + " " + std::to_string(vp.y_center) +
                             "  offset " + std::to_string(vp.x_offset) + " " +
                             std::to_string(vp.y_offset));
        }
    }

    switch (primitive) {
    case 3u:
        for (std::size_t i = 0; i + 2u < clip.size(); i += 3u) {
            draw_clipped_triangle(runtime, clip[i], clip[i + 1u], clip[i + 2u], format, texture);
        }
        return;
    case 4u:
        // Strips alternate their winding, which would matter to a renderer that
        // culled by facing. Neither this one nor the card does.
        for (std::size_t i = 0; i + 2u < clip.size(); ++i) {
            draw_clipped_triangle(runtime, clip[i], clip[i + 1u], clip[i + 2u], format, texture);
        }
        return;
    case 5u:
        for (std::size_t i = 1u; i + 1u < clip.size(); ++i) {
            draw_clipped_triangle(runtime, clip[0], clip[i], clip[i + 1u], format, texture);
        }
        return;
    default: {
        // Anything else keeps the old behaviour: project what is in front and
        // drop the primitive if any corner is not. Sprites and lines are the
        // only shapes that land here, and this title draws them through-mode.
        static std::vector<Vertex> screen;
        screen.resize(clip.size());
        for (std::size_t i = 0; i < clip.size(); ++i) {
            if (near_distance(clip[i]) <= 0.0f || clip[i].w <= 0.0001f) {
                ++g_stats.behind_eye;
                return;
            }
            screen[i] = to_screen_from_clip(clip[i]);
        }
        ++g_stats.transformed;
        (void)rasterise(runtime, primitive, screen, format, texture, true);
        return;
    }
    }
}

void vertex_reset() {
    g_stats = VertexStats{};
    g_types.clear();
}

VertexStats vertex_stats() {
    VertexStats stats = g_stats;
    stats.vertex_types.assign(g_types.begin(), g_types.end());
    std::sort(stats.vertex_types.begin(), stats.vertex_types.end(),
              [](const auto &a, const auto &b) { return a.second > b.second; });
    return stats;
}

void note_draw(Runtime &runtime, std::uint32_t primitive, std::uint32_t vtype,
               std::uint32_t vertex_address,
               std::uint32_t index_address, std::uint32_t count) {
    ++g_types[vtype];
    const VertexFormat format = parse_vertex_type(vtype);
    if (format.index != 0u) ++g_stats.indexed_draws;
    if (format.through) ++g_stats.through_draws;
    if (format.texture != 0u) ++g_stats.with_uv;
    if (format.color != 0u) ++g_stats.with_color;
    if (format.normal != 0u) ++g_stats.with_normal;
    note_draw_state();
    // Whether the two registers the audit says this profile ignores track the
    // presence of normals.
    //
    // 0x53 holds 0 or 1 across 363,290 writes and 0x54 holds 0 or 0x808080
    // across 353,392, written in near lockstep, one draw at a time. An enable
    // paired with a colour is the shape of a lighting or material setting, and
    // a draw that is lit is a draw that carries normals. If the two line up,
    // the title is asking for shading this rasteriser does not do; if they do
    // not, the pair means something else and the guess is dead rather than
    // half-believed.
    {
        const std::array<std::uint32_t, 256> &registers = ge_registers();
        const bool flagged = (registers[0x53u] & 1u) != 0u;
        const bool lit_colour = registers[0x54u] != 0u;
        const bool normals = format.normal != 0u;
        if (normals) {
            if (flagged) ++g_stats.normals_with_flag;
            else ++g_stats.normals_without_flag;
            if (lit_colour) ++g_stats.normals_with_colour;
        } else {
            if (flagged) ++g_stats.plain_with_flag;
            else ++g_stats.plain_without_flag;
            if (lit_colour) ++g_stats.plain_with_colour;
        }
    }

    static std::vector<Vertex> vertices;
    const bool indexed = format.index != 0u;
    const bool decoded =
        indexed ? decode_indexed_vertices(runtime, format, vertex_address, index_address, count,
                                          vertices)
                : decode_vertices(runtime, format, vertex_address, count, vertices);
    if (!decoded) {
        ++g_stats.draws_skipped;
        return;
    }
    if (indexed) ++g_stats.indexed_decoded;
    ++g_stats.draws_decoded;
    g_stats.vertices_decoded += vertices.size();
    // Transformed draws are put through the matrix pipeline first, which leaves
    // them in the same screen space a through-mode draw already occupies, so
    // the rasteriser needs no second path.
    if (!format.through) {
        // Transformed draws are clipped and drawn per primitive: a triangle
        // crossing the near plane becomes a smaller triangle or a quad, and
        // only whole primitives behind the eye are lost.
        transform_and_draw(runtime, primitive, vertices, format, current_texture_state());
        VertexStats::Extent &extent = g_stats.model;
        for (const Vertex &vertex : vertices) extent.add(vertex.x, vertex.y, vertex.z);
        return;
    }
    (void)rasterise(runtime, primitive, vertices, format, current_texture_state(), true);

    // Everything that reaches here is a through-mode draw: the transformed
    // path returned above.
    VertexStats::Extent &extent = g_stats.screen;
    for (const Vertex &vertex : vertices) extent.add(vertex.x, vertex.y, vertex.z);
}

std::string vertex_report() {
    const VertexStats stats = vertex_stats();
    std::ostringstream out;
    out << "  vertex draws:       " << stats.draws_decoded << " decoded, " << stats.draws_skipped
        << " skipped, " << stats.vertices_decoded << " vertices\n"
        << "  vertex content:     " << stats.with_uv << " textured, " << stats.with_color
        << " coloured, " << stats.with_normal << " with normals ["
        << stats.normals_with_flag << " with 0x53, " << stats.normals_without_flag
        << " without, " << stats.normals_with_colour << " with 0x54; plain "
        << stats.plain_with_flag << "/" << stats.plain_without_flag << "/"
        << stats.plain_with_colour << "], " << stats.indexed_draws
        << " indexed (" << stats.indexed_decoded << " walked, highest index "
        << stats.max_index << "), " << stats.through_draws << " through\n"
        << "  vertex transform:   " << stats.transformed << " transformed, " << stats.behind_eye
        << " dropped behind the eye, " << stats.offscreen << " off screen, "
        << stats.clipped << " clipped, " << stats.skinned << " skinned\n";
    const auto extent_line = [&out](const char *label, const VertexStats::Extent &extent) {
        if (!extent.any) return;
        out << label << " x " << extent.min_x << ".." << extent.max_x << "  y " << extent.min_y
            << ".." << extent.max_y << "  z " << extent.min_z << ".." << extent.max_z << "\n";
    };
    // Both are screen coordinates: the extent is taken after the transform has
    // run, so the only difference is which path the draw took to get there.
    extent_line("  through extent:    ", stats.screen);
    extent_line("  transformed extent:", stats.model);
    out << "  vertex types:      ";
    for (std::size_t i = 0; i < stats.vertex_types.size() && i < 6u; ++i) {
        const VertexFormat format = parse_vertex_type(stats.vertex_types[i].first);
        out << " " << psprecomp::hex32(stats.vertex_types[i].first) << "(stride "
            << static_cast<int>(format.stride) << ")=" << stats.vertex_types[i].second;
    }
    out << "\n";
    return out.str();
}

} // namespace defjam

#include "defjam_vertex.hpp"

#include "defjam_ge.hpp"
#include "defjam_profile.hpp"
#include "defjam_raster.hpp"
#include "defjam_texture.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstring>
#include <map>
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
    } else if (matrices.world_seen) {
        apply_4x3(matrices.world, x, y, z, wx, wy, wz);
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
    bool drawable = true;
    if (!format.through) {
        const RenderTarget target = current_render_target();
        drawable = transform_to_screen(vertices, target.width, target.height);
    }
    if (drawable)
        (void)rasterise(runtime, primitive, vertices, format, current_texture_state(), true);

    VertexStats::Extent &extent = format.through ? g_stats.screen : g_stats.model;
    for (const Vertex &vertex : vertices) extent.add(vertex.x, vertex.y, vertex.z);
}

std::string vertex_report() {
    const VertexStats stats = vertex_stats();
    std::ostringstream out;
    out << "  vertex draws:       " << stats.draws_decoded << " decoded, " << stats.draws_skipped
        << " skipped, " << stats.vertices_decoded << " vertices\n"
        << "  vertex content:     " << stats.with_uv << " textured, " << stats.with_color
        << " coloured, " << stats.with_normal << " with normals, " << stats.indexed_draws
        << " indexed (" << stats.indexed_decoded << " walked, highest index "
        << stats.max_index << "), " << stats.through_draws << " through\n"
        << "  vertex transform:   " << stats.transformed << " transformed, " << stats.behind_eye
        << " dropped behind the eye, " << stats.skinned << " skinned\n";
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

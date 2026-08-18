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

    {
        // One-off: dump the raw bytes of a textured through-mode vertex and
        // lay them out by the offsets the format parser computed, so the two
        // can be compared side by side.
        static int reported = 0;
        if (vtype == 0x0080111Eu && reported++ < 2 && vertex_address != 0u &&
            runtime.memory().contains(vertex_address, 32u)) {
            std::vector<std::uint8_t> bytes(32u);
            runtime.memory().copy_out(vertex_address, bytes);
            std::string hex;
            for (std::size_t i = 0; i < bytes.size(); ++i) {
                if (i == format.stride) hex += " |";
                const char digits[] = "0123456789abcdef";
                hex += " ";
                hex += digits[bytes[i] >> 4u];
                hex += digits[bytes[i] & 0xFu];
            }
            runtime_log_line("vertex bytes at " + psprecomp::hex32(vertex_address) + hex);
            runtime_log_line("  offsets: texture=" + std::to_string(format.texture_offset) +
                             " color=" + std::to_string(format.color_offset) +
                             " normal=" + std::to_string(format.normal_offset) +
                             " position=" + std::to_string(format.position_offset) +
                             " stride=" + std::to_string(format.stride) +
                             " texfmt=" + std::to_string(format.texture) +
                             " through=" + std::to_string(format.through ? 1 : 0));
            const auto u16at = [&bytes](std::size_t at) {
                return static_cast<std::uint32_t>(bytes[at]) |
                       (static_cast<std::uint32_t>(bytes[at + 1u]) << 8u);
            };
            const auto s16at = [&bytes](std::size_t at) {
                return static_cast<std::int32_t>(
                    static_cast<std::int16_t>(bytes[at] | (bytes[at + 1u] << 8u)));
            };
            runtime_log_line("  as fields: uv=" + std::to_string(u16at(0)) + "," +
                             std::to_string(u16at(2)) + " color=" +
                             psprecomp::hex32(u16at(4) | (u16at(6) << 16u)) + " pos=" +
                             std::to_string(s16at(8)) + "," + std::to_string(s16at(10)) + "," +
                             std::to_string(s16at(12)));
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
    // Hand the decoded vertices to the rasteriser. It draws the screen-space
    // ones and counts the rest.
    (void)rasterise(runtime, primitive, vertices, format, current_texture_state());

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
        << stats.max_index << "), " << stats.through_draws << " through\n";
    const auto extent_line = [&out](const char *label, const VertexStats::Extent &extent) {
        if (!extent.any) return;
        out << label << " x " << extent.min_x << ".." << extent.max_x << "  y " << extent.min_y
            << ".." << extent.max_y << "  z " << extent.min_z << ".." << extent.max_z << "\n";
    };
    extent_line("  screen extent:     ", stats.screen);
    extent_line("  model extent:      ", stats.model);
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

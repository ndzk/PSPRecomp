#include "defjam_ge.hpp"

#include "defjam_profile.hpp"
#include "defjam_raster.hpp"
#include "defjam_texture.hpp"
#include "defjam_vertex.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstring>
#include <map>
#include <sstream>
#include <utility>
#include <vector>

namespace defjam {
namespace {

using psprecomp::Runtime;

// Control-flow and state commands this interpreter acts on. Everything else is
// latched into the register file and left for a backend to read.
constexpr std::uint8_t kCmdNop = 0x00u;
constexpr std::uint8_t kCmdVaddr = 0x01u;
constexpr std::uint8_t kCmdIaddr = 0x02u;
constexpr std::uint8_t kCmdPrim = 0x04u;
constexpr std::uint8_t kCmdBezier = 0x05u;
constexpr std::uint8_t kCmdSpline = 0x06u;
constexpr std::uint8_t kCmdBoundingBox = 0x07u;
constexpr std::uint8_t kCmdJump = 0x08u;
constexpr std::uint8_t kCmdBranchJump = 0x09u;
constexpr std::uint8_t kCmdCall = 0x0Au;
constexpr std::uint8_t kCmdRet = 0x0Bu;
constexpr std::uint8_t kCmdEnd = 0x0Cu;
constexpr std::uint8_t kCmdSignal = 0x0Eu;
constexpr std::uint8_t kCmdFinish = 0x0Fu;
constexpr std::uint8_t kCmdBase = 0x10u;
constexpr std::uint8_t kCmdVertexType = 0x12u;
constexpr std::uint8_t kCmdOffsetAddr = 0x13u;
constexpr std::uint8_t kCmdOrigin = 0x14u;
constexpr std::uint8_t kCmdFrameBufferPointer = 0x9Cu;
constexpr std::uint8_t kCmdFrameBufferWidth = 0x9Du;

// A malformed or self-referential list must not spin forever.
constexpr std::uint32_t kMaxCommandsPerList = 2u * 1000u * 1000u;

std::array<std::uint32_t, 256> g_registers{};
GeStats g_stats{};
std::map<std::uint8_t, std::uint64_t> g_command_histogram;

// The offset register, which is a whole address rather than a few high bits.
std::uint32_t g_offset_address = 0u;
// VADDR and IADDR resolved at the moment they were issued. They must not be
// resolved at draw time: BASE is a latched register the guest moves around
// between setting an address and drawing with it, so resolving late reads a
// different BASE than the one that was current, and the address comes out in a
// region that does not exist.
std::uint32_t g_vertex_address = 0u;
std::uint32_t g_index_address = 0u;

// Matrix upload. Each pair is a number command that sets the write cursor and a
// data command that streams elements from it.
// Measured, not looked up. A run that reaches a fight issues 0x2B 95,697,769
// times against 7,974,815 of 0x2A - exactly twelve data words per number, which
// is one 4x3 bone matrix each. Nothing else in the stream has that shape, and
// the pair this was originally written against, 0x38 and 0x39, never appears at
// all: bones_seen stayed zero through 96 million weighted vertices, so every
// skinned vertex fell back to the world matrix and every character stood in its
// bind pose.
constexpr std::uint8_t kCmdBoneNumber = 0x2Au;
constexpr std::uint8_t kCmdBoneData = 0x2Bu;
constexpr std::uint8_t kCmdWorldNumber = 0x3Au;
constexpr std::uint8_t kCmdWorldData = 0x3Bu;
constexpr std::uint8_t kCmdViewNumber = 0x3Cu;
constexpr std::uint8_t kCmdViewData = 0x3Du;
constexpr std::uint8_t kCmdProjectionNumber = 0x3Eu;
constexpr std::uint8_t kCmdProjectionData = 0x3Fu;

GeMatrices g_matrices;
std::uint32_t g_bone_cursor = 0u;
std::uint32_t g_world_cursor = 0u;
std::uint32_t g_view_cursor = 0u;
std::uint32_t g_projection_cursor = 0u;

// An operand carries the top 24 bits of the float; the low eight are zero.
float matrix_element(std::uint32_t data) {
    const std::uint32_t bits = data << 8u;
    float value{};
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

void write_matrix(float *matrix, std::uint32_t size, std::uint32_t &cursor, std::uint32_t data,
                  bool &seen) {
    if (cursor < size) {
        matrix[cursor] = matrix_element(data);
        seen = true;
    }
    ++cursor;
}

// BASE supplies four high bits a 24-bit operand cannot hold, the offset
// register is added whole, and the result is a 28-bit address.
std::uint32_t resolve_address(std::uint32_t data24) {
    const std::uint32_t base = (g_registers[kCmdBase] & 0x000F0000u) << 8u;
    return (g_offset_address + (base | (data24 & 0x00FFFFFFu))) & 0x0FFFFFFFu;
}

} // namespace

void ge_reset() {
    g_matrices = GeMatrices{};
    g_bone_cursor = 0u;
    g_world_cursor = g_view_cursor = g_projection_cursor = 0u;
    vertex_reset();
    texture_reset();
    raster_reset();
    g_offset_address = 0u;
    g_vertex_address = 0u;
    g_index_address = 0u;
    g_registers.fill(0u);
    g_stats = GeStats{};
    g_command_histogram.clear();
}

const std::array<std::uint32_t, 256> &ge_registers() { return g_registers; }
const GeMatrices &ge_matrices() { return g_matrices; }

Viewport current_viewport() {
    // Register numbers: scales at 0x42 to 0x44, centres at 0x45 to 0x47, and
    // the screen offsets at 0x4C and 0x4D.
    const auto as_float = [](std::uint32_t data) {
        const std::uint32_t bits = data << 8u;
        float value{};
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    };
    Viewport viewport;
    viewport.x_scale = as_float(g_registers[0x42]);
    viewport.y_scale = as_float(g_registers[0x43]);
    viewport.z_scale = as_float(g_registers[0x44]);
    viewport.x_center = as_float(g_registers[0x45]);
    viewport.y_center = as_float(g_registers[0x46]);
    viewport.z_center = as_float(g_registers[0x47]);
    viewport.x_offset = static_cast<float>(g_registers[0x4C] & 0xFFFFu) / 16.0f;
    viewport.y_offset = static_cast<float>(g_registers[0x4D] & 0xFFFFu) / 16.0f;
    return viewport;
}

GeStats ge_stats() { return g_stats; }

GeExecution ge_execute_list(Runtime &runtime, GeListState &state, std::uint32_t stall) {
    GeExecution result{};
    // Where interpretation stopped is recorded in the state as well as
    // returned, because the state is what a later resume continues from.
    const auto stop_at = [&result, &state](std::uint32_t address) {
        result.resume_address = address;
        state.resume = address;
        return result;
    };
    std::uint32_t pc = state.resume;
    auto &call_stack = state.call_stack;
    std::uint32_t &call_depth = state.call_depth;
    std::uint32_t executed = 0u;
    ++g_stats.lists_executed;

    while (true) {
        // The stall address is where the guest has told the GE to pause; it is
        // not an error to reach it, it just means "no more work yet".
        if (stall != 0u && pc == stall) return stop_at(pc);
        if (++executed > kMaxCommandsPerList) {
            ++g_stats.truncated_lists;
            runtime_log_line("ge: list truncated after " + std::to_string(executed) +
                             " commands at " + psprecomp::hex32(pc));
            return stop_at(pc);
        }
        if (!runtime.memory().contains(pc, 4u)) {
            runtime_log_line("ge: list ran outside guest memory at " + psprecomp::hex32(pc));
            return stop_at(pc);
        }

        const std::uint32_t word = runtime.memory().load32(pc);
        const auto command = static_cast<std::uint8_t>(word >> 24u);
        const std::uint32_t data = word & 0x00FFFFFFu;
        pc += 4u;
        ++g_stats.commands;
        ++g_command_histogram[command];

        // Every command latches, including the ones handled below; a backend
        // reads draw state straight out of this file.
        g_registers[command] = data;

        switch (command) {
        case kCmdNop:
        case kCmdBase:
            break;

        case kCmdBoneNumber: g_bone_cursor = data & 0x7Fu; break;
        case kCmdBoneData: {
            // The bone matrices are one continuous run of 96 elements, twelve
            // per matrix, so the cursor addresses them as a single array.
            const std::uint32_t index = g_bone_cursor / 12u;
            if (index < 8u) {
                g_matrices.bone[index][g_bone_cursor % 12u] = matrix_element(data);
                g_matrices.bones_seen =
                    std::max<std::uint8_t>(g_matrices.bones_seen, static_cast<std::uint8_t>(index + 1u));
            }
            ++g_bone_cursor;
            break;
        }
        case kCmdWorldNumber: g_world_cursor = data & 0xFu; break;
        case kCmdViewNumber: g_view_cursor = data & 0xFu; break;
        case kCmdProjectionNumber: g_projection_cursor = data & 0x1Fu; break;
        case kCmdWorldData:
            write_matrix(g_matrices.world, 12u, g_world_cursor, data, g_matrices.world_seen);
            break;
        case kCmdViewData:
            write_matrix(g_matrices.view, 12u, g_view_cursor, data, g_matrices.view_seen);
            break;
        case kCmdProjectionData:
            write_matrix(g_matrices.projection, 16u, g_projection_cursor, data,
                         g_matrices.projection_seen);
            break;

        case kCmdVaddr:
            g_vertex_address = resolve_address(data);
            break;

        case kCmdIaddr:
            g_index_address = resolve_address(data);
            break;

        case kCmdOffsetAddr:
            g_offset_address = data << 8u;
            break;

        case kCmdOrigin:
            // ORIGIN sets the offset to where this command itself sits.
            g_offset_address = pc - 4u;
            break;

        case kCmdVertexType:
            g_stats.last_vertex_type = data;
            break;

        case kCmdFrameBufferPointer:
        case kCmdFrameBufferWidth: {
            const std::uint32_t target = g_registers[kCmdFrameBufferPointer] & 0x00FFFFF0u;
            if (target != g_stats.last_framebuffer) {
                g_stats.last_framebuffer = target;
                ++g_stats.framebuffer_changes;
            }
            break;
        }

        case kCmdPrim: {
            const std::uint32_t primitive = (data >> 16u) & 7u;
            const std::uint32_t count = data & 0xFFFFu;
            ++g_stats.draws;
            g_stats.vertices += count;
            ++g_stats.primitives[primitive];
            // VADDR and IADDR are 24-bit and carry the same BASE high bits as
            // any other list address.
            note_texture_draw(runtime);
            note_draw(runtime, primitive, g_registers[kCmdVertexType], g_vertex_address, g_index_address,
                      count);
            break;
        }

        case kCmdBezier:
        case kCmdSpline:
            // Patch primitives are not interpreted. They are counted so their
            // presence is visible rather than silently skipped, because the
            // vertex cursor they consume is not modelled and a title using them
            // would desync a naive walk.
            ++g_stats.unknown_commands;
            break;

        case kCmdBoundingBox:
            break;

        case kCmdJump:
            ++g_stats.jumps;
            pc = resolve_address(data);
            break;

        case kCmdBranchJump:
            // Without bounding-box culling the conservative answer is to take
            // the branch, which draws more rather than less.
            ++g_stats.jumps;
            pc = resolve_address(data);
            break;

        case kCmdCall:
            ++g_stats.calls;
            if (call_depth < kGeCallStackDepth) {
                call_stack[call_depth++] = pc;
                pc = resolve_address(data);
            } else {
                runtime_log_line("ge: call stack overflow at " + psprecomp::hex32(pc));
                return stop_at(pc);
            }
            break;

        case kCmdRet:
            ++g_stats.returns;
            if (call_depth > 0u) pc = call_stack[--call_depth];
            break;

        case kCmdSignal:
            // On hardware this raises the registered signal callback with the
            // command's payload; the caller delivers it once we return.
            ++g_stats.signals;
            result.signalled = true;
            result.signal_argument = data;
            break;

        case kCmdFinish:
            // Likewise for the finish callback. Execution continues to END.
            ++g_stats.finishes;
            result.finished = true;
            result.finish_argument = data;
            break;

        case kCmdEnd:
            return stop_at(pc);

        default:
            // Ordinary state registers: latched above, nothing more to do.
            break;
        }
    }
}

std::string ge_report() {
    std::ostringstream out;
    out << "  GE lists executed:  " << g_stats.lists_executed << "\n"
        << "  GE commands:        " << g_stats.commands << "\n"
        << "  GE draws:           " << g_stats.draws << ", " << g_stats.vertices << " vertices\n"
        << "  GE flow:            " << g_stats.jumps << " jumps, " << g_stats.calls << " calls, "
        << g_stats.returns << " returns, " << g_stats.signals << " signals, "
        << g_stats.finishes << " finishes\n"
        << "  GE framebuffer:     " << psprecomp::hex32(g_stats.last_framebuffer) << ", "
        << g_stats.framebuffer_changes << " changes\n"
        << "  GE vertex type:     " << psprecomp::hex32(g_stats.last_vertex_type) << "\n";
    if (g_stats.truncated_lists != 0u)
        out << "  GE truncated lists: " << g_stats.truncated_lists << "\n";
    if (g_stats.unknown_commands != 0u)
        out << "  GE patch commands:  " << g_stats.unknown_commands << " (not interpreted)\n";

    static const char *primitive_names[8] = {"points", "lines",     "linestrip", "triangles",
                                             "tristrip", "trifan", "sprites",   "?"};
    out << "  GE primitives:     ";
    bool any = false;
    for (std::uint32_t i = 0; i < 8u; ++i) {
        if (g_stats.primitives[i] == 0u) continue;
        out << ' ' << primitive_names[i] << '=' << g_stats.primitives[i];
        any = true;
    }
    if (!any) out << " none";
    out << "\n";

    // The busiest state registers say what the title actually configures.
    std::vector<std::pair<std::uint64_t, std::uint8_t>> ranked;
    for (const auto &[command, count] : g_command_histogram) ranked.emplace_back(count, command);
    std::sort(ranked.rbegin(), ranked.rend());
    out << "  GE top commands:   ";
    for (std::size_t i = 0; i < ranked.size() && i < 10u; ++i) {
        std::ostringstream hex;
        hex << std::hex << static_cast<unsigned>(ranked[i].second);
        out << " 0x" << hex.str() << '=' << ranked[i].first;
    }
    out << "\n";
    return out.str();
}

} // namespace defjam

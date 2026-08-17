#include "defjam_ge.hpp"

#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
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
constexpr std::uint32_t kCallStackDepth = 32u;

std::array<std::uint32_t, 256> g_registers{};
GeStats g_stats{};
std::map<std::uint8_t, std::uint64_t> g_command_histogram;

// BASE supplies the high bits of an address that a 24-bit operand cannot hold.
std::uint32_t resolve_address(std::uint32_t data24) {
    const std::uint32_t base = (g_registers[kCmdBase] & 0x000F0000u) << 8u;
    return base | (data24 & 0x00FFFFFFu);
}

} // namespace

void ge_reset() {
    g_registers.fill(0u);
    g_stats = GeStats{};
    g_command_histogram.clear();
}

const std::array<std::uint32_t, 256> &ge_registers() { return g_registers; }
GeStats ge_stats() { return g_stats; }

std::uint32_t ge_execute_list(Runtime &runtime, std::uint32_t start, std::uint32_t stall) {
    std::uint32_t pc = start;
    std::array<std::uint32_t, kCallStackDepth> call_stack{};
    std::uint32_t call_depth = 0u;
    std::uint32_t executed = 0u;
    ++g_stats.lists_executed;

    while (true) {
        // The stall address is where the guest has told the GE to pause; it is
        // not an error to reach it, it just means "no more work yet".
        if (stall != 0u && pc == stall) return pc;
        if (++executed > kMaxCommandsPerList) {
            ++g_stats.truncated_lists;
            runtime_log_line("ge: list truncated after " + std::to_string(executed) +
                             " commands at " + psprecomp::hex32(pc));
            return pc;
        }
        if (!runtime.memory().contains(pc, 4u)) {
            runtime_log_line("ge: list ran outside guest memory at " + psprecomp::hex32(pc));
            return pc;
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
        case kCmdVaddr:
        case kCmdIaddr:
        case kCmdBase:
        case kCmdOffsetAddr:
        case kCmdOrigin:
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
            if (call_depth < kCallStackDepth) {
                call_stack[call_depth++] = pc;
                pc = resolve_address(data);
            } else {
                runtime_log_line("ge: call stack overflow at " + psprecomp::hex32(pc));
                return pc;
            }
            break;

        case kCmdRet:
            ++g_stats.returns;
            if (call_depth > 0u) pc = call_stack[--call_depth];
            break;

        case kCmdSignal:
            ++g_stats.signals;
            break;

        case kCmdFinish:
            ++g_stats.finishes;
            break;

        case kCmdEnd:
            return pc;

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

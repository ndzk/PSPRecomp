#include "defjam_ge.hpp"
#include "defjam_gpu.hpp"

#include "defjam_profile.hpp"
#include "defjam_raster.hpp"
#include "defjam_texture.hpp"
#include "defjam_vertex.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <sstream>
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

// Every command the title issues, with the distinct values it gives each one.
//
// Written to find the blend registers the way the bone matrices were found -
// from what the stream does rather than from a remembered number. A register
// that only ever holds zero and one is an enable bit; one holding small packed
// fields is a mode. Guessing 0xE0 cost a reverted change and a broken frame.
std::map<std::uint8_t, std::set<std::uint32_t>> g_command_values;
std::map<std::uint8_t, std::uint64_t> g_command_counts;

void note_command(std::uint8_t command, std::uint32_t data) {
    ++g_command_counts[command];
    std::set<std::uint32_t> &seen = g_command_values[command];
    if (seen.size() < 12u) seen.insert(data);
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
        note_command(command, data);

        // A block transfer. The operands were identified from what the title
        // writes into the display list, not assumed; PSPRECOMP_DEFJAM_KICK
        // prints the register file and the surrounding list words, which is how
        // 0xB2/0xB3 were found to be the source after 0xB0/0xB1 had been read
        // by mistake.
        if (command == 0xEAu && data != 0u) {
            static std::uint32_t kicks = 0u;
            if (std::getenv("PSPRECOMP_DEFJAM_KICK") != nullptr && kicks < 8u) {
                ++kicks;
                // The list address matters as much as the operands: the source
                // pointer is a word somebody wrote into this list, and finding
                // that writer needs the address it was written to.
                std::string line = "kick " + std::to_string(kicks) + " arg=" + std::to_string(data) +
                                   " list=" + psprecomp::hex32(pc - 4u);
                for (std::uint32_t back = 10u; back >= 1u; --back) {
                    const std::uint32_t at = pc - 4u - back * 4u;
                    if (!runtime.memory().contains(at, 4u)) continue;
                    line += "  " + psprecomp::hex32(at) + ":" +
                            psprecomp::hex32(runtime.memory().load32(at));
                }
                for (std::uint32_t reg = 0xB0u; reg <= 0xEFu; ++reg) {
                    if (g_registers[reg] == 0u) continue;
                    line += "  " + psprecomp::hex32(reg) + "=" + psprecomp::hex32(g_registers[reg]);
                }
                // The source stride cannot be read from one sample, but it can
                // be measured: in a real image adjacent rows resemble each
                // other, so the candidate stride that minimises the row-to-row
                // difference is the one the data actually has.
                const std::uint32_t source =
                    ((g_registers[0xB1u] & 0x000F0000u) << 8u) | (g_registers[0xB0u] & 0x00FFFFFFu);
                for (const std::uint32_t stride : {512u, 1024u, 2048u, 4096u}) {
                    std::uint64_t total = 0u;
                    std::uint64_t samples = 0u;
                    for (std::uint32_t row = 0; row < 32u; ++row) {
                        for (std::uint32_t x = 0; x < 256u; x += 4u) {
                            const std::uint32_t a = source + row * stride + x;
                            const std::uint32_t b = a + stride;
                            if (!runtime.memory().contains(b, 4u)) continue;
                            const std::uint32_t va = runtime.memory().load32(a);
                            const std::uint32_t vb = runtime.memory().load32(b);
                            for (std::uint32_t byte = 0; byte < 4u; ++byte) {
                                const int da = static_cast<int>((va >> (byte * 8u)) & 0xFFu);
                                const int db = static_cast<int>((vb >> (byte * 8u)) & 0xFFu);
                                total += static_cast<std::uint64_t>(std::abs(da - db));
                                ++samples;
                            }
                        }
                    }
                    if (samples != 0u) {
                        line += "  stride" + std::to_string(stride) + "=" +
                                std::to_string(total / samples);
                    }
                }
                // The row-difference measure said "not an image" while a watch
                // on the same address showed alpha-0xFF pixels, so decide it
                // the way that has held up elsewhere: real artwork keeps alpha
                // in one or two values, noise spreads it over all 256.
                std::set<std::uint32_t> alphas;
                std::uint32_t opaque = 0u;
                std::uint32_t looked = 0u;
                for (std::uint32_t k = 0; k < 4096u; ++k) {
                    const std::uint32_t at = source + k * 4u;
                    if (!runtime.memory().contains(at, 4u)) break;
                    const std::uint32_t alpha = (runtime.memory().load32(at) >> 24u) & 0xFFu;
                    alphas.insert(alpha);
                    if (alpha == 0xFFu) ++opaque;
                    ++looked;
                }
                line += "  source=" + psprecomp::hex32(source) + " alphas=" +
                        std::to_string(alphas.size()) + " opaque=" + std::to_string(opaque) + "/" +
                        std::to_string(looked);
                for (std::uint32_t k = 0; k < 4u; ++k) {
                    if (!runtime.memory().contains(source + k * 4u, 4u)) break;
                    line += " " + psprecomp::hex32(runtime.memory().load32(source + k * 4u));
                }
                runtime_log_line(line);
            }

            // The block transfer the title uses to read a rendered frame back out
            // of VRAM. Leaving it unhandled left the destination holding whatever
            // the allocator had last put there, which a colour quantiser
            // downstream then read as 65 230 distinct colours and turned into a
            // fatal allocation failure. Operands come from the display list:
            // 0xB2/0xB3 source, 0xB4/0xB5 destination, 0xEE size, and the kick
            // argument selects the texel width. PSPRECOMP_DEFJAM_NO_TRANSFER=1
            // restores the old behaviour for an A/B.
            static const bool skip = [] {
                const char *text = std::getenv("PSPRECOMP_DEFJAM_NO_TRANSFER");
                return text != nullptr && *text != 0 && *text != 48;
            }();
            if (!skip) {
                // The list sets 0xB2/0xB3 for the source, not 0xB0/0xB1: those two
                // still hold texture-setup values latched long before, and
                // reading them named a RAM address that was never the source.
                // Dumping the list words settled it - the source is VRAM.
                // The transfer reads guest VRAM, and with the card drawing,
                // guest VRAM only holds the frame after a window present has
                // resolved it. Headless GPU runs measured the consequence
                // directly: the venue photo readback copied solid black
                // (65 536 pixels, one colour). Resolving here makes the source
                // current in every mode, window or not.
                gpu_resolve(runtime);
                const std::uint32_t src =
                    ((g_registers[0xB3u] & 0x000F0000u) << 8u) | (g_registers[0xB2u] & 0x00FFFFF0u);
                const std::uint32_t dst =
                    ((g_registers[0xB5u] & 0x000F0000u) << 8u) | (g_registers[0xB4u] & 0x00FFFFF0u);
                const std::uint32_t size = g_registers[0xEEu];
                const std::uint32_t width = (size & 0x3FFu) + 1u;
                const std::uint32_t height = ((size >> 10u) & 0x3FFu) + 1u;
                const std::uint32_t texel = data == 1u ? 4u : 2u;
                std::uint32_t src_pitch = (g_registers[0xB3u] & 0xFFFFu) * texel;
                const std::uint32_t dst_pitch = (g_registers[0xB5u] & 0xFFFFu) * texel;
                if (src_pitch == 0u) {
                    src_pitch = width * texel;
                    runtime_log_line("transfer: source pitch register is zero; using the width "
                                     "instead, which is an assumption this run cannot check");
                }
                std::uint32_t copied = 0u;
                for (std::uint32_t row = 0; row < height; ++row) {
                    const std::uint32_t from = src + row * src_pitch;
                    const std::uint32_t to = dst + row * dst_pitch;
                    const std::uint32_t bytes = width * texel;
                    if (!runtime.memory().contains(from, bytes) ||
                        !runtime.memory().contains(to, bytes)) {
                        break;
                    }
                    for (std::uint32_t at = 0; at < bytes; at += 4u) {
                        runtime.memory().store32(to + at, runtime.memory().load32(from + at));
                    }
                    ++copied;
                }
                runtime_log_line("transfer: " + psprecomp::hex32(src) + " -> " +
                                 psprecomp::hex32(dst) + ", " + std::to_string(width) + "x" +
                                 std::to_string(height) + " at " + std::to_string(texel) +
                                 " bytes, rows copied " + std::to_string(copied));
            }
        }

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

// Every GE register this profile consumes, listed once so the audit below can
// say what is left over.
//
// The list is maintained by hand against the code that reads them, which is the
// only place the truth lives: the display-list walker in this file, the vertex
// pipeline, the texture decoder and the rasteriser. Adding a register to the
// code without adding it here makes the audit overstate the gap, which is the
// safe direction to be wrong in.
constexpr std::uint8_t kConsumed[] = {
    0x00u, 0x01u, 0x02u, 0x04u, 0x05u, 0x06u, 0x07u, 0x08u, 0x09u, 0x0Au, 0x0Bu, 0x0Cu,
    0x0Eu, 0x0Fu, 0x10u, 0x12u, 0x13u, 0x14u, 0x1Du, 0x1Eu, 0x23u, 0x2Au, 0x2Bu, 0x3Au,
    0x3Bu, 0x3Cu, 0x3Du, 0x3Eu, 0x3Fu, 0x42u, 0x43u, 0x44u, 0x45u, 0x46u, 0x47u, 0x4Cu,
    0x4Du, 0x9Cu, 0x9Du, 0xA0u, 0xA8u, 0xB0u, 0xB1u, 0xB8u, 0xC2u, 0xC3u, 0xC4u, 0xC5u,
    0xC6u, 0xD3u, 0xDEu, 0xE7u,
};

bool is_consumed(std::uint8_t command) {
    for (const std::uint8_t entry : kConsumed) {
        if (entry == command) return true;
    }
    return false;
}

// What this profile is not doing, ranked by how hard the title leans on it.
//
// Every register the title writes is already counted with the set of values it
// takes. Crossing that against the registers anything here actually reads turns
// a vague sense that the render state is incomplete into a list: a register the
// title writes often, with values other than zero, that nothing reads, is a
// feature that is missing and mattering. One that only ever holds zero is
// missing and costing nothing, which is worth knowing too, because it is the
// difference between a gap to close and a gap to leave alone.
// The value each register actually holds when a draw happens.
//
// Counting writes overstates the gap and points at the wrong registers. 0x53
// and 0x54 are written 363,290 and 353,392 times, more than anything else this
// profile ignores, and both sat at the top of the first audit - but sampled at
// the moment a draw is issued, 0x53 is set for all 172,204 of them and 0x54 is
// clear for all but six. Their state never varies between draws, so ignoring
// them cannot make one draw come out different from another, whatever they
// mean. A register only matters here if what it holds while drawing changes.
struct DrawState {
    std::array<std::uint32_t, 4> values{};
    std::array<std::uint64_t, 4> counts{};
    std::uint8_t distinct{};
    bool overflowed{};
};
std::array<DrawState, 256> g_draw_state;
std::uint64_t g_draws_sampled = 0u;

void note_draw_state() {
    ++g_draws_sampled;
    const std::array<std::uint32_t, 256> &registers = ge_registers();
    for (std::size_t i = 0; i < 256u; ++i) {
        DrawState &entry = g_draw_state[i];
        const std::uint32_t value = registers[i];
        bool found = false;
        for (std::uint8_t slot = 0; slot < entry.distinct; ++slot) {
            if (entry.values[slot] == value) {
                ++entry.counts[slot];
                found = true;
                break;
            }
        }
        if (found) continue;
        if (entry.distinct >= entry.values.size()) {
            entry.overflowed = true;
            continue;
        }
        entry.values[entry.distinct] = value;
        entry.counts[entry.distinct] = 1u;
        ++entry.distinct;
    }
}

std::string register_audit_report() {
    std::ostringstream out;
    std::ostringstream held;
    out << "  GE state ignored here, varying across " << g_draws_sampled << " draws:\n";
    std::uint64_t constant = 0u;
    for (std::size_t i = 0; i < 256u; ++i) {
        const DrawState &entry = g_draw_state[i];
        if (entry.distinct == 0u) continue;
        if (is_consumed(static_cast<std::uint8_t>(i))) continue;
        if (entry.distinct == 1u && !entry.overflowed) {
            // Held at one value for every draw in the run. That rules it out as
            // the reason one draw comes out right and the next one wrong, and
            // rules out nothing else: a setting that is wrong the same way in
            // every draw is wrong across the whole picture, and is harder to
            // see for exactly that reason. So these get named, not counted.
            if (entry.values[0] != 0u) {
                held << "    0x" << std::hex << i << std::dec << "  " << entry.values[0] << "\n";
                ++constant;
            }
            continue;
        }
        out << "    0x" << std::hex << i << std::dec << " ";
        for (std::uint8_t slot = 0; slot < entry.distinct; ++slot) {
            out << "  " << entry.values[slot] << " x" << entry.counts[slot];
        }
        if (entry.overflowed) out << "  ...";
        out << "\n";
    }
    out << "  GE state ignored here, held at one non-zero value for all " << g_draws_sampled
        << " draws (" << constant << "):\n"
        << held.str();
    return out.str();
}

// Every GE command this profile has an opinion about, so the ones it does not
// are a named list instead of a silence. Handled: consumed by rendering code.
// Latched: stored and read as draw state. Everything else is Unknown, and any
// Unknown command the title writes with a non-zero operand is reported at the
// end of the run. Future venues then introduce themselves by name in a report
// line rather than as a visual mystery.
enum class CommandClass : std::uint8_t { Unknown, Handled, Latched };

CommandClass command_class(std::uint8_t command) {
    switch (command) {
    // List flow and draws, handled in the loop below.
    case 0x00: case 0x01: case 0x02: case 0x04: case 0x08: case 0x0A: case 0x0B:
    case 0x0C: case 0x0E: case 0x0F: case 0x10: case 0x12: case 0x13: case 0x15:
    case 0x16:
    // Matrices and bones.
    case 0x2A: case 0x2B: case 0x2C: case 0x2D: case 0x2E: case 0x2F:
    case 0x30: case 0x31:
    // Viewport, offset, scissor, target.
    case 0x42: case 0x43: case 0x44: case 0x45: case 0x46: case 0x47:
    case 0x4C: case 0x4D: case 0xD5: case 0x9C: case 0x9D:
    // Texture state, function, palette, filter, blend, depth, clear.
    case 0x1D: case 0x1E: case 0x21: case 0x22: case 0x23: case 0x53: case 0x54:
    case 0x56: case 0x5D: case 0x63: case 0x64: case 0x65: case 0x9B:
    case 0xA0: case 0xA8: case 0xB0: case 0xB1: case 0xB2: case 0xB3: case 0xB4:
    case 0xB5: case 0xB8: case 0xC1: case 0xC2: case 0xC3: case 0xC4: case 0xC5:
    case 0xC6: case 0xD3: case 0xDB: case 0xDE: case 0xE7: case 0xEA: case 0xEE:
        return CommandClass::Handled;
    // Written by this title, read by nothing here yet; kept as latched state.
    case 0x17: case 0x18: case 0x19: case 0x1A: case 0x1B: case 0x1C: case 0x1F:
    case 0x20: case 0x50: case 0x51: case 0x52: case 0x55: case 0x57: case 0x58:
    case 0x5B: case 0x5C: case 0x5E: case 0x5F: case 0x60: case 0x61: case 0x62:
    case 0x66: case 0x67: case 0x68: case 0x72: case 0x73: case 0x74: case 0x7B:
    case 0x7E: case 0x80: case 0x8C: case 0x90: case 0x93: case 0xC7: case 0xC8:
    case 0xC9: case 0xCF: case 0xD0: case 0xD2: case 0xD7: case 0xDC: case 0xDF:
    case 0xE2: case 0xE3: case 0xE4: case 0xE5: case 0xEB: case 0xEC:
        return CommandClass::Latched;
    default:
        return CommandClass::Unknown;
    }
}

std::string unknown_command_report() {
    std::ostringstream out;
    bool any = false;
    for (const auto &[command, count] : g_command_counts) {
        if (command_class(command) != CommandClass::Unknown) continue;
        const std::set<std::uint32_t> &values = g_command_values[command];
        const bool interesting =
            values.size() > 1u || (values.size() == 1u && *values.begin() != 0u);
        if (!interesting) continue;
        if (!any) {
            out << "  GE commands this profile does not know, written with data:" << char(10);
            any = true;
        }
        out << "    0x" << std::hex << static_cast<std::uint32_t>(command) << std::dec
            << "  x" << count << ", values";
        for (const std::uint32_t value : values) out << " " << value;
        out << char(10);
    }
    return out.str();
}

std::string command_value_report() {
    std::ostringstream out;
    out << "  GE registers written, with the values used:\n";
    for (const auto &entry : g_command_values) {
        const std::set<std::uint32_t> &values = entry.second;
        // Everything, unfiltered. Two registers were guessed from memory today
        // and both were wrong, so the full picture is the starting point for
        // anything that reads guest render state.
        out << "    0x" << std::hex << static_cast<std::uint32_t>(entry.first) << std::dec
            << "  used " << g_command_counts[entry.first] << " times, values";
        for (const std::uint32_t value : values) out << " " << value;
        out << "\n";
    }
    return out.str();
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

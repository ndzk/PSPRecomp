#include "defjam_profile.hpp"

#include "defjam_io.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <array>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <optional>
#include <sstream>
#include <string>
#include <vector>

namespace defjam {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::Runtime;

// ---------------------------------------------------------------------------
// Logging
// ---------------------------------------------------------------------------
std::ofstream g_log;
bool g_log_open = false;

// ---------------------------------------------------------------------------
// Guest memory map
// ---------------------------------------------------------------------------
// PSP user memory ends at 0x0A000000. The heap grows up from the end of the
// loaded image; thread stacks grow down from the top. They must not meet.
constexpr std::uint32_t kUserMemoryEnd = 0x0A000000u;
constexpr std::uint32_t kVramBase = 0x04000000u;
constexpr std::uint32_t kVramSize = 2u * 1024u * 1024u;

// Both trampolines are guest addresses that no real code occupies; returning to
// them is how a thread body or a callback signals completion.
constexpr std::uint32_t kThreadReturnAddress = 0x00000000u;
constexpr std::uint32_t kInterruptReturnAddress = 0x00000004u;

struct PartitionBlock {
    std::string name;
    std::uint32_t address{};
    std::uint32_t size{};
};

struct PartitionTable {
    std::uint32_t next_address{};
    std::int32_t next_uid{0x100};
    std::map<std::int32_t, PartitionBlock> blocks;
};

// ---------------------------------------------------------------------------
// Threads
// ---------------------------------------------------------------------------
enum class ThreadState { Created, Ready, Running, Sleeping, Delayed, Completed };

struct ThreadRecord {
    std::string name;
    std::uint32_t entry{};
    std::uint32_t priority{32u};
    std::uint32_t stack_size{};
    std::uint32_t stack_top{};     // highest address (stack grows down)
    std::uint32_t stack_bottom{};
    // PSP keeps a per-thread control block at the top of the thread's stack and
    // points $k0 at it while the thread runs. Guest code reaches thread-local
    // data through $k0, so it must be a real address: leaving it zero turns the
    // first such access into a store near address 0.
    std::uint32_t kernel_context{};
    std::uint32_t exit_status{};
    ThreadState state{ThreadState::Created};
    AllegrexContext suspended{};
    std::uint32_t wakeup_count{};
    std::uint64_t delay_until_us{};
    std::uint64_t ready_sequence{};
    bool waiting_thread_end{false};
    std::int32_t waiting_on_thread{-1};
};

struct ThreadTable {
    std::int32_t next_uid{1};
    std::int32_t current_uid{0};
    std::uint32_t next_stack_top{kUserMemoryEnd};
    std::uint64_t ready_sequence{0};
    std::uint64_t switches{0};
    std::map<std::int32_t, ThreadRecord> threads;
};

struct SemaphoreWaiter {
    std::int32_t thread_uid{};
    std::int32_t requested{};
};

struct SemaphoreRecord {
    std::string name;
    std::int32_t count{};
    std::int32_t maximum{};
    std::vector<SemaphoreWaiter> waiters;
};

struct EventFlagWaiter {
    std::int32_t thread_uid{};
    std::uint32_t pattern{};
    std::uint32_t mode{};
    std::uint32_t result_ptr{};
};

struct EventFlagRecord {
    std::string name;
    std::uint32_t attributes{};
    std::uint32_t pattern{};
    std::vector<EventFlagWaiter> waiters;
};

struct MbxMessage {
    std::uint32_t address{};
};

struct MbxWaiter {
    std::int32_t thread_uid{};
    std::uint32_t message_out{};
};

struct MbxRecord {
    std::string name;
    std::vector<MbxMessage> messages;
    std::vector<MbxWaiter> waiters;
};

struct CallbackRecord {
    std::string name;
    std::uint32_t function{};
    std::uint32_t argument{};
    std::int32_t owner_thread{};
    std::uint32_t pending{};
};

// A frame recording where guest execution should resume once it returns to the
// interrupt trampoline.
struct AsyncReturnFrame {
    AllegrexContext resume;
};

PartitionTable g_partitions;
ThreadTable g_threads;
std::map<std::int32_t, SemaphoreRecord> g_semaphores;
std::map<std::int32_t, EventFlagRecord> g_event_flags;
std::map<std::int32_t, MbxRecord> g_mailboxes;
std::map<std::int32_t, CallbackRecord> g_callbacks;
std::map<std::int32_t, std::vector<AsyncReturnFrame>> g_async_frames;
std::int32_t g_next_kernel_uid = 0x1000;
std::uint64_t g_virtual_time_us = 0;
std::uint32_t g_compiled_sdk_version = 0;

// Display / GE
std::uint32_t g_display_framebuffer = 0;
std::uint32_t g_display_stride = 512;
std::uint32_t g_display_format = 3;
std::uint64_t g_vblanks = 0;
std::uint64_t g_display_list_submissions = 0;
std::uint64_t g_framebuffer_sets = 0;
std::int32_t g_next_ge_list_id = 0x10;
std::uint32_t g_ge_edram_translation = 0x400;
std::map<std::int32_t, std::uint32_t> g_ge_lists;  // id -> stall address

std::uint64_t g_starvation_tick_us = 0;

// ---------------------------------------------------------------------------
// Audio
// ---------------------------------------------------------------------------
// No sound is produced yet; a real output path is Phase 7 work. What matters
// here is timing. The blocking output calls are how a PSP title paces its audio
// thread, so each channel models the drain time of the buffer it accepted. If
// these returned immediately the audio thread would spin as fast as the
// dispatcher allows and starve everything else.
constexpr std::uint32_t kAudioChannels = 8u;
constexpr std::uint32_t kAudioSampleRate = 44100u;

struct AudioChannel {
    bool reserved{};
    std::uint32_t sample_count{};
    std::uint32_t format{};
    std::uint32_t left_volume{};
    std::uint32_t right_volume{};
    // Virtual time at which the queued buffer has finished playing.
    std::uint64_t busy_until_us{};
};

std::array<AudioChannel, kAudioChannels> g_audio_channels{};
std::uint64_t g_audio_buffers = 0;
std::uint64_t g_audio_samples = 0;

std::uint64_t audio_buffer_duration_us(std::uint32_t samples) {
    return (static_cast<std::uint64_t>(samples) * 1000000ull) / kAudioSampleRate;
}

// ---------------------------------------------------------------------------
// Dispatch trace
// ---------------------------------------------------------------------------
struct DispatchTraceEntry {
    std::uint32_t pc{};
    std::int32_t thread_uid{};
    std::uint64_t virtual_time_us{};
};

std::vector<DispatchTraceEntry> g_trace;
std::size_t g_trace_head = 0;      // next slot to write
std::uint64_t g_trace_total = 0;   // dispatches seen, for wraparound reporting

void pre_dispatch_hook(Runtime &, AllegrexContext &, std::uint32_t dispatch_pc,
                       std::int32_t dispatch_thread_uid) {
    if (g_trace.empty()) return;
    g_trace[g_trace_head] = DispatchTraceEntry{dispatch_pc, dispatch_thread_uid, g_virtual_time_us};
    g_trace_head = (g_trace_head + 1u) % g_trace.size();
    ++g_trace_total;
}

// ---------------------------------------------------------------------------
// Small helpers
// ---------------------------------------------------------------------------
void set_return(AllegrexContext &ctx, std::uint32_t value) { ctx.set_gpr(2, value); }
void set_return64(AllegrexContext &ctx, std::uint64_t value) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(value & 0xFFFFFFFFu));
    ctx.set_gpr(3, static_cast<std::uint32_t>(value >> 32u));
}
void set_success(AllegrexContext &ctx) { set_return(ctx, 0u); }

std::string read_guest_string(Runtime &rt, std::uint32_t address, std::size_t limit = 64u) {
    std::string out;
    for (std::size_t i = 0; i < limit && address != 0u; ++i) {
        const std::uint8_t c = rt.memory().load8(address + static_cast<std::uint32_t>(i));
        if (c == 0u) break;
        out.push_back(static_cast<char>(c));
    }
    return out;
}

std::int32_t allocate_kernel_uid() { return g_next_kernel_uid++; }

// The context a blocked thread resumes with: the HLE call has "returned"
// already, so its saved pc is the caller's return address and v0 is the result.
AllegrexContext make_wait_context(const AllegrexContext &ctx, std::uint32_t result = 0u) {
    AllegrexContext suspended = ctx;
    suspended.set_gpr(2, result);
    suspended.pc = ctx.gpr[31];
    return suspended;
}

ThreadRecord *thread_at(std::int32_t uid) {
    const auto it = g_threads.threads.find(uid);
    return it == g_threads.threads.end() ? nullptr : &it->second;
}

ThreadRecord *current_thread() { return thread_at(g_threads.current_uid); }

void make_ready(ThreadRecord &thread) {
    thread.state = ThreadState::Ready;
    thread.ready_sequence = ++g_threads.ready_sequence;
}

void promote_expired_delays() {
    for (auto &[uid, thread] : g_threads.threads) {
        if (thread.state == ThreadState::Delayed && thread.delay_until_us <= g_virtual_time_us) {
            (void)uid;
            make_ready(thread);
        }
    }
}

// Highest priority wins; PSP priorities are inverted, so the smallest number is
// most urgent. Equal priority is strict FIFO by the order threads became ready.
std::int32_t best_ready_thread() {
    std::int32_t best = -1;
    for (auto &[uid, thread] : g_threads.threads) {
        if (thread.state != ThreadState::Ready) continue;
        if (best == -1) { best = uid; continue; }
        const ThreadRecord &other = g_threads.threads[best];
        if (thread.priority < other.priority ||
            (thread.priority == other.priority && thread.ready_sequence < other.ready_sequence)) {
            best = uid;
        }
    }
    return best;
}

// Switches to the next runnable thread. Returns false when nothing can run,
// which the caller reports as a deadlock rather than spinning.
bool activate_next_thread(Runtime &rt, AllegrexContext &ctx, const char *reason) {
    promote_expired_delays();
    std::int32_t next = best_ready_thread();
    if (next == -1) {
        // Nothing runnable: jump virtual time forward to the earliest deadline
        // rather than spinning. Deterministic and avoids a livelock against a
        // guest that only ever sleeps.
        std::optional<std::uint64_t> earliest;
        for (const auto &[uid, thread] : g_threads.threads) {
            (void)uid;
            if (thread.state != ThreadState::Delayed) continue;
            if (!earliest || thread.delay_until_us < *earliest) earliest = thread.delay_until_us;
        }
        if (!earliest) return false;
        g_virtual_time_us = std::max(g_virtual_time_us, *earliest);
        promote_expired_delays();
        next = best_ready_thread();
        if (next == -1) return false;
    }

    ThreadRecord &thread = g_threads.threads[next];
    thread.state = ThreadState::Running;
    g_threads.current_uid = next;
    ++g_threads.switches;
    ctx = thread.suspended;
    psprecomp::set_runtime_thread_identity(next, thread.name);
    (void)rt;
    (void)reason;
    return true;
}

// Saves the caller as blocked, then hands the CPU to somebody else.
bool block_current_thread(Runtime &rt, AllegrexContext &ctx, ThreadState state,
                          const AllegrexContext &suspended, const char *reason) {
    ThreadRecord *thread = current_thread();
    if (thread == nullptr) return false;
    thread->suspended = suspended;
    thread->state = state;
    if (!activate_next_thread(rt, ctx, reason)) {
        rt.stop(std::string("deadlock: no runnable PSP thread (") + reason + ")");
        return false;
    }
    return true;
}

// `result` is what the guest sees in v0 once it resumes, which matters for
// calls that block and then report how much work they accepted.
void delay_current_thread(Runtime &rt, AllegrexContext &ctx, std::uint32_t microseconds,
                          std::uint32_t result = 0u) {
    ThreadRecord *thread = current_thread();
    if (thread == nullptr) return;
    thread->delay_until_us = g_virtual_time_us + microseconds;
    (void)block_current_thread(rt, ctx, ThreadState::Delayed, make_wait_context(ctx, result),
                               "delay");
}

// Re-schedules if a strictly higher priority thread became runnable.
void preempt_if_higher_priority(Runtime &rt, AllegrexContext &ctx) {
    ThreadRecord *running = current_thread();
    if (running == nullptr) return;
    const std::int32_t best = best_ready_thread();
    if (best == -1) return;
    if (g_threads.threads[best].priority >= running->priority) return;
    running->suspended = make_wait_context(ctx, ctx.gpr[2]);
    make_ready(*running);
    (void)activate_next_thread(rt, ctx, "preempt");
}

// ---------------------------------------------------------------------------
// Stacks
// ---------------------------------------------------------------------------
// Reserved at the top of every thread stack for the control block $k0 points at.
constexpr std::uint32_t kKernelContextSize = 0x100u;

std::uint32_t allocate_thread_stack(std::uint32_t size) {
    const std::uint32_t aligned = (size + 0xFFu) & ~0xFFu;
    if (g_threads.next_stack_top < aligned) return 0u;
    const std::uint32_t bottom = g_threads.next_stack_top - aligned;
    if (bottom < g_partitions.next_address) return 0u;  // heap and stacks met
    g_threads.next_stack_top = bottom;
    return bottom;
}

// ---------------------------------------------------------------------------
// Guest trampolines
// ---------------------------------------------------------------------------
void thread_return_trampoline(Runtime &rt, AllegrexContext &ctx) {
    ThreadRecord *thread = current_thread();
    if (thread != nullptr) {
        thread->exit_status = ctx.gpr[2];
        thread->state = ThreadState::Completed;
        runtime_log_line("thread " + std::to_string(g_threads.current_uid) + " (" + thread->name +
                         ") returned, status=" + std::to_string(thread->exit_status));
        // Wake anything blocked in sceKernelWaitThreadEnd on this thread.
        for (auto &[uid, other] : g_threads.threads) {
            (void)uid;
            if (other.waiting_thread_end && other.waiting_on_thread == g_threads.current_uid) {
                other.waiting_thread_end = false;
                other.waiting_on_thread = -1;
                make_ready(other);
            }
        }
    }
    if (!activate_next_thread(rt, ctx, "thread-exit")) {
        rt.stop("all PSP threads have exited");
    }
}

void interrupt_return_trampoline(Runtime &rt, AllegrexContext &ctx) {
    auto &frames = g_async_frames[g_threads.current_uid];
    if (frames.empty()) {
        rt.stop("returned to the interrupt trampoline with no pending frame");
        return;
    }
    ctx = frames.back().resume;
    frames.pop_back();
}

// ---------------------------------------------------------------------------
// Runtime hooks
// ---------------------------------------------------------------------------
void starvation_tick(Runtime &rt, AllegrexContext &ctx) {
    g_virtual_time_us += g_starvation_tick_us;
    promote_expired_delays();
    ThreadRecord *running = current_thread();
    if (running == nullptr) return;
    const std::int32_t best = best_ready_thread();
    if (best == -1) return;
    if (g_threads.threads[best].priority >= running->priority) return;
    // Resume the preempted thread exactly where it was, not at $ra.
    running->suspended = ctx;
    make_ready(*running);
    (void)activate_next_thread(rt, ctx, "timer-preempt");
}

} // namespace

// ---------------------------------------------------------------------------
// Logging
// ---------------------------------------------------------------------------
void runtime_log_initialize(const std::string &path) {
    g_log.open(path, std::ios::out | std::ios::trunc);
    g_log_open = g_log.is_open();
}

void runtime_log_line(const std::string &line) {
    if (!g_log_open) return;
    g_log << '[' << g_virtual_time_us << "us] " << line << '\n';
    g_log.flush();
}

void runtime_log_shutdown() {
    if (g_log_open) g_log.close();
    g_log_open = false;
}

HeadlessStats headless_stats() {
    HeadlessStats stats;
    stats.vblanks = g_vblanks;
    stats.display_list_submissions = g_display_list_submissions;
    stats.frame_buffer_sets = g_framebuffer_sets;
    stats.thread_switches = g_threads.switches;
    stats.audio_buffers = g_audio_buffers;
    stats.audio_samples = g_audio_samples;
    stats.virtual_time_us = g_virtual_time_us;
    stats.live_threads = 0u;
    for (const auto &[uid, thread] : g_threads.threads) {
        (void)uid;
        if (thread.state != ThreadState::Completed) ++stats.live_threads;
    }
    return stats;
}

bool dispatch_trace_enabled() { return !g_trace.empty(); }

void install_dispatch_trace() {
    const char *text = std::getenv("PSPRECOMP_DEFJAM_TRACE");
    if (text == nullptr || *text == '\0' || std::strcmp(text, "0") == 0) return;

    std::size_t entries = 256u;
    const unsigned long long parsed = std::strtoull(text, nullptr, 0);
    if (parsed > 1ull) entries = static_cast<std::size_t>(std::min<unsigned long long>(parsed, 1u << 20u));

    g_trace.assign(entries, DispatchTraceEntry{});
    g_trace_head = 0;
    g_trace_total = 0;
    psprecomp::set_runtime_pre_dispatch_hook(&pre_dispatch_hook);
    runtime_log_line("dispatch trace enabled, " + std::to_string(entries) + " entries");
}

void dump_dispatch_trace(std::size_t limit) {
    if (g_trace.empty()) {
        std::cerr << "[trace] not enabled; set PSPRECOMP_DEFJAM_TRACE=1 (or a ring size)\n";
        return;
    }
    const std::size_t recorded = static_cast<std::size_t>(
        std::min<std::uint64_t>(g_trace_total, g_trace.size()));
    const std::size_t show = std::min(limit, recorded);
    std::cerr << "[trace] last " << show << " outer dispatches of " << g_trace_total
              << " total (oldest first):\n";

    // Walk back `show` slots from the write head.
    std::size_t index = (g_trace_head + g_trace.size() - show) % g_trace.size();
    std::uint32_t previous = 0u;
    std::uint64_t repeat = 0u;
    for (std::size_t i = 0; i < show; ++i) {
        const DispatchTraceEntry &entry = g_trace[index];
        index = (index + 1u) % g_trace.size();
        if (i != 0u && entry.pc == previous) { ++repeat; continue; }
        if (repeat != 0u) {
            std::cerr << "           ... previous PC repeated " << repeat << " more time(s)\n";
            repeat = 0u;
        }
        const std::uint32_t unit = entry.pc >= 0x08804000u ? (entry.pc - 0x08804000u) / 0x4000u : 0u;
        std::cerr << "  " << psprecomp::hex32(entry.pc) << "  unit=" << unit
                  << " thread=" << entry.thread_uid << " t=" << entry.virtual_time_us << "us\n";
        previous = entry.pc;
    }
    if (repeat != 0u)
        std::cerr << "           ... previous PC repeated " << repeat << " more time(s)\n";
}

void install_starvation_preemption() {
    const char *interval_text = std::getenv("PSPRECOMP_TIME_TICK_DISPATCHES");
    std::uint64_t interval = 256u;
    if (interval_text != nullptr && *interval_text != '\0') {
        const unsigned long long parsed = std::strtoull(interval_text, nullptr, 0);
        if (parsed != 0u) interval = parsed;
    }
    // Virtual microseconds charged per tick. The ratio sets how fast guest time
    // advances relative to executed work.
    g_starvation_tick_us = std::max<std::uint64_t>(1u, interval / 4u);
    psprecomp::set_runtime_starvation_hook(&starvation_tick, interval);
}

void install_profile(Runtime &runtime, std::uint32_t user_arena_start) {
    // Reset every table so the entry point is re-entrant for tests.
    g_partitions = PartitionTable{};
    g_threads = ThreadTable{};
    g_semaphores.clear();
    g_event_flags.clear();
    g_mailboxes.clear();
    g_callbacks.clear();
    g_async_frames.clear();
    g_next_kernel_uid = 0x1000;
    g_virtual_time_us = 0;
    g_vblanks = 0;
    g_display_list_submissions = 0;
    g_framebuffer_sets = 0;
    g_ge_lists.clear();
    g_next_ge_list_id = 0x10;
    g_audio_channels.fill(AudioChannel{});
    g_audio_buffers = 0;
    g_audio_samples = 0;

    g_partitions.next_address = (user_arena_start + 0xFFu) & ~0xFFu;
    g_threads.next_stack_top = kUserMemoryEnd;

    // The module entry runs as PSP thread 0 on its own stack.
    constexpr std::uint32_t kModuleStackSize = 256u * 1024u;
    ThreadRecord module_thread;
    module_thread.name = "module_start";
    module_thread.priority = 32u;
    module_thread.stack_size = kModuleStackSize;
    module_thread.stack_bottom = allocate_thread_stack(kModuleStackSize);
    module_thread.stack_top = module_thread.stack_bottom + kModuleStackSize;
    module_thread.kernel_context = module_thread.stack_top - kKernelContextSize;
    module_thread.state = ThreadState::Running;
    g_threads.threads[0] = module_thread;
    g_threads.current_uid = 0;
    psprecomp::set_runtime_thread_identity(0, "module_start");

    runtime.memory().zero(module_thread.kernel_context, kKernelContextSize);
    // $k0 addresses the thread control block; the usable stack starts below it,
    // leaving 16 bytes of o32 argument save area.
    runtime.cpu().set_gpr(26, module_thread.kernel_context);
    runtime.cpu().set_gpr(29, module_thread.kernel_context - 16u);
    runtime.cpu().set_gpr(31, kThreadReturnAddress);

    runtime.register_function(kThreadReturnAddress, &thread_return_trampoline, "psp_thread_return");
    runtime.register_function(kInterruptReturnAddress, &interrupt_return_trampoline,
                              "psp_interrupt_return");

    runtime_log_line("install_profile: arena=" + psprecomp::hex32(g_partitions.next_address) +
                     " module stack=" + psprecomp::hex32(module_thread.stack_bottom) + ".." +
                     psprecomp::hex32(module_thread.stack_top));

    // -----------------------------------------------------------------------
    // SysMemUserForUser
    // -----------------------------------------------------------------------
    runtime.register_hle("SysMemUserForUser", 0x7591C7DBu, [](Runtime &, AllegrexContext &ctx) {
        g_compiled_sdk_version = ctx.gpr[4];
        set_success(ctx);
    });
    runtime.register_hle("SysMemUserForUser", 0xF77D77CBu, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
    });
    runtime.register_hle("SysMemUserForUser", 0xA291F107u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, g_threads.next_stack_top - g_partitions.next_address);
    });
    runtime.register_hle("SysMemUserForUser", 0x237DBD4Fu, [](Runtime &rt, AllegrexContext &ctx) {
        // int sceKernelAllocPartitionMemory(SceUID partition, const char *name,
        //                                   int type, SceSize size, void *addr)
        // The fifth argument is spilled to the o32 save area at sp+16.
        const std::uint32_t partition = ctx.gpr[4];
        const std::string name = read_guest_string(rt, ctx.gpr[5]);
        const std::uint32_t type = ctx.gpr[6];
        const std::uint32_t size = ctx.gpr[7];
        const std::uint32_t requested_addr = rt.memory().load32(ctx.gpr[29] + 16u);

        // PSP_SMEM_Low=0, High=1, Addr=2, LowAligned=3, HighAligned=4. Only the
        // low-end forms are modelled; anything else is refused rather than
        // silently satisfied from the wrong end of memory.
        if (type != 0u && type != 3u) {
            runtime_log_line("AllocPartitionMemory UNSUPPORTED type=" + std::to_string(type) +
                             " name=" + name + " size=" + std::to_string(size) +
                             " addr=" + psprecomp::hex32(requested_addr));
            rt.stop("sceKernelAllocPartitionMemory type " + std::to_string(type) +
                    " is not implemented (name=" + name + ", size=" + std::to_string(size) + ")");
            return;
        }

        std::uint32_t alignment = 0x100u;
        if (type == 3u && requested_addr != 0u) alignment = std::max(0x100u, requested_addr);
        const std::uint32_t aligned_size = (size + 0xFFu) & ~0xFFu;
        const std::uint32_t address =
            (g_partitions.next_address + alignment - 1u) & ~(alignment - 1u);
        if (aligned_size == 0u || address + aligned_size > g_threads.next_stack_top) {
            runtime_log_line("AllocPartitionMemory FAILED name=" + name +
                             " size=" + std::to_string(size) + " free=" +
                             std::to_string(g_threads.next_stack_top - g_partitions.next_address));
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        g_partitions.next_address = address + aligned_size;
        rt.memory().zero(address, aligned_size);
        const std::int32_t uid = g_partitions.next_uid++;
        g_partitions.blocks.emplace(uid, PartitionBlock{name, address, aligned_size});
        runtime_log_line("AllocPartitionMemory partition=" + std::to_string(partition) +
                         " name=" + name + " type=" + std::to_string(type) +
                         " size=" + std::to_string(size) + " -> uid=" + std::to_string(uid) +
                         " addr=" + psprecomp::hex32(address) + " end=" +
                         psprecomp::hex32(address + aligned_size) + " free_after=" +
                         std::to_string(g_threads.next_stack_top - g_partitions.next_address));
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("SysMemUserForUser", 0x9D9A5BA1u, [](Runtime &, AllegrexContext &ctx) {
        const auto it = g_partitions.blocks.find(static_cast<std::int32_t>(ctx.gpr[4]));
        set_return(ctx, it == g_partitions.blocks.end() ? 0u : it->second.address);
    });
    runtime.register_hle("SysMemUserForUser", 0xB6D61D02u, [](Runtime &, AllegrexContext &ctx) {
        // Memory is never reclaimed; only the handle is dropped.
        g_partitions.blocks.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_success(ctx);
    });
    runtime.register_hle("SysMemUserForUser", 0x13A5ABEFu, [](Runtime &rt, AllegrexContext &ctx) {
        runtime_log_line("guest printf: " + read_guest_string(rt, ctx.gpr[4], 256u));
        set_success(ctx);
    });

    // -----------------------------------------------------------------------
    // ThreadManForUser - threads
    // -----------------------------------------------------------------------
    runtime.register_hle("ThreadManForUser", 0x446D8DE6u, [](Runtime &rt, AllegrexContext &ctx) {
        // (name, entry, priority, stack size, attr, option)
        ThreadRecord thread;
        thread.name = read_guest_string(rt, ctx.gpr[4]);
        thread.entry = ctx.gpr[5];
        thread.priority = ctx.gpr[6];
        thread.stack_size = ctx.gpr[7];
        thread.stack_bottom = allocate_thread_stack(thread.stack_size);
        if (thread.stack_bottom == 0u) {
            runtime_log_line("CreateThread FAILED (out of stack space) name=" + thread.name);
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        thread.stack_top = thread.stack_bottom + ((thread.stack_size + 0xFFu) & ~0xFFu);
        thread.kernel_context = thread.stack_top - kKernelContextSize;
        rt.memory().zero(thread.kernel_context, kKernelContextSize);
        thread.state = ThreadState::Created;
        const std::int32_t uid = g_threads.next_uid++;
        g_threads.threads[uid] = thread;
        runtime_log_line("CreateThread uid=" + std::to_string(uid) + " name=" + thread.name +
                         " entry=" + psprecomp::hex32(thread.entry) +
                         " prio=" + std::to_string(thread.priority));
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ThreadManForUser", 0xF475845Du, [](Runtime &rt, AllegrexContext &ctx) {
        // (thid, arglen, argp)
        const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
        ThreadRecord *thread = thread_at(uid);
        if (thread == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        AllegrexContext start{};
        start.pc = thread->entry;
        start.set_gpr(4, ctx.gpr[5]);                        // a0 = arglen
        start.set_gpr(5, ctx.gpr[6]);                        // a1 = argp
        start.set_gpr(26, thread->kernel_context);           // k0 = thread control block
        start.set_gpr(29, thread->kernel_context - 16u);     // sp, below the control block
        start.set_gpr(31, kThreadReturnAddress);             // ra
        thread->suspended = start;
        make_ready(*thread);
        set_success(ctx);
        preempt_if_higher_priority(rt, ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x293B45B8u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(g_threads.current_uid));
    });
    runtime.register_hle("ThreadManForUser", 0x94AA61EEu, [](Runtime &, AllegrexContext &ctx) {
        ThreadRecord *thread = current_thread();
        set_return(ctx, thread == nullptr ? 32u : thread->priority);
    });
    runtime.register_hle("ThreadManForUser", 0x71BC9871u, [](Runtime &rt, AllegrexContext &ctx) {
        ThreadRecord *thread = thread_at(static_cast<std::int32_t>(ctx.gpr[4]));
        if (thread == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        thread->priority = ctx.gpr[5];
        set_success(ctx);
        preempt_if_higher_priority(rt, ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x912354A7u, [](Runtime &rt, AllegrexContext &ctx) {
        // Move the running thread to the back of its priority band.
        ThreadRecord *running = current_thread();
        if (running != nullptr) {
            running->suspended = make_wait_context(ctx, 0u);
            make_ready(*running);
            (void)activate_next_thread(rt, ctx, "rotate-ready-queue");
        } else {
            set_success(ctx);
        }
    });
    const auto exit_thread = [](Runtime &rt, AllegrexContext &ctx) {
        ThreadRecord *thread = current_thread();
        if (thread != nullptr) {
            thread->exit_status = ctx.gpr[4];
            thread->state = ThreadState::Completed;
            for (auto &[uid, other] : g_threads.threads) {
                (void)uid;
                if (other.waiting_thread_end && other.waiting_on_thread == g_threads.current_uid) {
                    other.waiting_thread_end = false;
                    other.waiting_on_thread = -1;
                    make_ready(other);
                }
            }
        }
        if (!activate_next_thread(rt, ctx, "exit-thread")) rt.stop("all PSP threads have exited");
    };
    runtime.register_hle("ThreadManForUser", 0xAA73C935u, exit_thread);  // ExitThread
    runtime.register_hle("ThreadManForUser", 0x809CE29Bu, exit_thread);  // ExitDeleteThread
    const auto terminate_thread = [](Runtime &rt, AllegrexContext &ctx) {
        ThreadRecord *thread = thread_at(static_cast<std::int32_t>(ctx.gpr[4]));
        if (thread == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        thread->state = ThreadState::Completed;
        set_success(ctx);
        (void)rt;
    };
    runtime.register_hle("ThreadManForUser", 0x616403BAu, terminate_thread);
    runtime.register_hle("ThreadManForUser", 0x383F7BCCu, terminate_thread);
    runtime.register_hle("ThreadManForUser", 0x9FA03CD3u, [](Runtime &, AllegrexContext &ctx) {
        g_threads.threads.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_success(ctx);
    });

    const auto sleep_thread = [](Runtime &rt, AllegrexContext &ctx) {
        ThreadRecord *thread = current_thread();
        if (thread == nullptr) { set_success(ctx); return; }
        if (thread->wakeup_count > 0u) {   // a pending wakeup cancels the sleep
            --thread->wakeup_count;
            set_success(ctx);
            return;
        }
        (void)block_current_thread(rt, ctx, ThreadState::Sleeping, make_wait_context(ctx), "sleep");
    };
    runtime.register_hle("ThreadManForUser", 0x9ACE131Eu, sleep_thread);
    runtime.register_hle("ThreadManForUser", 0xD59EAD2Fu, [](Runtime &rt, AllegrexContext &ctx) {
        ThreadRecord *thread = thread_at(static_cast<std::int32_t>(ctx.gpr[4]));
        if (thread == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        if (thread->state == ThreadState::Sleeping) make_ready(*thread);
        else ++thread->wakeup_count;
        set_success(ctx);
        preempt_if_higher_priority(rt, ctx);
    });
    const auto delay_thread = [](Runtime &rt, AllegrexContext &ctx) {
        delay_current_thread(rt, ctx, ctx.gpr[4]);
    };
    runtime.register_hle("ThreadManForUser", 0xCEADEB47u, delay_thread);
    runtime.register_hle("ThreadManForUser", 0x68DA9E36u, delay_thread);

    const auto wait_thread_end = [](Runtime &rt, AllegrexContext &ctx) {
        const std::int32_t target = static_cast<std::int32_t>(ctx.gpr[4]);
        ThreadRecord *other = thread_at(target);
        if (other == nullptr || other->state == ThreadState::Completed) {
            set_success(ctx);
            return;
        }
        ThreadRecord *self = current_thread();
        if (self == nullptr) { set_success(ctx); return; }
        self->waiting_thread_end = true;
        self->waiting_on_thread = target;
        (void)block_current_thread(rt, ctx, ThreadState::Sleeping, make_wait_context(ctx),
                                   "wait-thread-end");
    };
    runtime.register_hle("ThreadManForUser", 0x278C0DF5u, wait_thread_end);
    runtime.register_hle("ThreadManForUser", 0x840E8133u, wait_thread_end);

    runtime.register_hle("ThreadManForUser", 0xEA748E31u, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
    });
    const auto refer_thread_status = [](Runtime &rt, AllegrexContext &ctx) {
        // Writing a full SceKernelThreadInfo needs the SDK layout this build
        // was compiled against; refuse rather than hand back a wrong struct.
        (void)rt;
        set_return(ctx, static_cast<std::uint32_t>(-1));
    };
    runtime.register_hle("ThreadManForUser", 0x17C1684Eu, refer_thread_status);
    runtime.register_hle("ThreadManForUser", 0xFFC36A14u, refer_thread_status);

    // -----------------------------------------------------------------------
    // ThreadManForUser - time
    // -----------------------------------------------------------------------
    runtime.register_hle("ThreadManForUser", 0xDB738F35u, [](Runtime &rt, AllegrexContext &ctx) {
        // Writes a 64-bit tick through the pointer in a0.
        if (ctx.gpr[4] != 0u) {
            rt.memory().store32(ctx.gpr[4], static_cast<std::uint32_t>(g_virtual_time_us));
            rt.memory().store32(ctx.gpr[4] + 4u, static_cast<std::uint32_t>(g_virtual_time_us >> 32u));
        }
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x369ED59Du, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(g_virtual_time_us));
    });

    // -----------------------------------------------------------------------
    // ThreadManForUser - semaphores
    // -----------------------------------------------------------------------
    runtime.register_hle("ThreadManForUser", 0xD6DA4BA1u, [](Runtime &rt, AllegrexContext &ctx) {
        SemaphoreRecord record;
        record.name = read_guest_string(rt, ctx.gpr[4]);
        record.count = static_cast<std::int32_t>(ctx.gpr[6]);
        record.maximum = static_cast<std::int32_t>(ctx.gpr[7]);
        const std::int32_t uid = allocate_kernel_uid();
        g_semaphores[uid] = record;
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ThreadManForUser", 0x28B6489Cu, [](Runtime &, AllegrexContext &ctx) {
        g_semaphores.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x3F53E640u, [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_semaphores.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_semaphores.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        it->second.count += static_cast<std::int32_t>(ctx.gpr[5]);
        // Release waiters in FIFO order while the count covers them.
        auto &waiters = it->second.waiters;
        while (!waiters.empty() && it->second.count >= waiters.front().requested) {
            it->second.count -= waiters.front().requested;
            if (ThreadRecord *thread = thread_at(waiters.front().thread_uid); thread != nullptr)
                make_ready(*thread);
            waiters.erase(waiters.begin());
        }
        set_success(ctx);
        preempt_if_higher_priority(rt, ctx);
    });
    const auto wait_sema = [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_semaphores.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_semaphores.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        const std::int32_t requested = static_cast<std::int32_t>(ctx.gpr[5]);
        if (it->second.count >= requested) {
            it->second.count -= requested;
            set_success(ctx);
            return;
        }
        it->second.waiters.push_back(SemaphoreWaiter{g_threads.current_uid, requested});
        (void)block_current_thread(rt, ctx, ThreadState::Sleeping, make_wait_context(ctx), "sema");
    };
    runtime.register_hle("ThreadManForUser", 0x4E3A1105u, wait_sema);
    runtime.register_hle("ThreadManForUser", 0x6D212BACu, wait_sema);
    runtime.register_hle("ThreadManForUser", 0x58B1F937u, [](Runtime &, AllegrexContext &ctx) {
        const auto it = g_semaphores.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_semaphores.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        const std::int32_t requested = static_cast<std::int32_t>(ctx.gpr[5]);
        if (it->second.count < requested) {
            set_return(ctx, 0x800201ADu);  // SCE_KERNEL_ERROR_SEMA_ZERO
            return;
        }
        it->second.count -= requested;
        set_success(ctx);
    });

    // -----------------------------------------------------------------------
    // ThreadManForUser - event flags
    // -----------------------------------------------------------------------
    const auto event_flag_matches = [](const EventFlagRecord &flag, std::uint32_t requested,
                                       std::uint32_t mode) {
        if ((mode & 1u) != 0u) return (flag.pattern & requested) != 0u;   // OR
        return (flag.pattern & requested) == requested;                    // AND
    };
    const auto consume_event_flag = [](EventFlagRecord &flag, std::uint32_t requested,
                                       std::uint32_t mode) {
        if ((mode & 0x20u) != 0u) flag.pattern &= ~requested;  // CLEAR_PAT
        if ((mode & 0x10u) != 0u) flag.pattern = 0u;           // CLEAR_ALL
    };

    runtime.register_hle("ThreadManForUser", 0x55C20A00u, [](Runtime &rt, AllegrexContext &ctx) {
        EventFlagRecord record;
        record.name = read_guest_string(rt, ctx.gpr[4]);
        record.attributes = ctx.gpr[5];
        record.pattern = ctx.gpr[6];
        const std::int32_t uid = allocate_kernel_uid();
        g_event_flags[uid] = record;
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ThreadManForUser", 0xEF9E4C70u, [](Runtime &, AllegrexContext &ctx) {
        g_event_flags.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x1FB15A32u,
        [event_flag_matches, consume_event_flag](Runtime &rt, AllegrexContext &ctx) {
            const auto it = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == g_event_flags.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            it->second.pattern |= ctx.gpr[5];
            auto &waiters = it->second.waiters;
            for (auto waiter = waiters.begin(); waiter != waiters.end();) {
                if (!event_flag_matches(it->second, waiter->pattern, waiter->mode)) {
                    ++waiter;
                    continue;
                }
                if (waiter->result_ptr != 0u)
                    rt.memory().store32(waiter->result_ptr, it->second.pattern);
                consume_event_flag(it->second, waiter->pattern, waiter->mode);
                if (ThreadRecord *thread = thread_at(waiter->thread_uid); thread != nullptr)
                    make_ready(*thread);
                waiter = waiters.erase(waiter);
            }
            set_success(ctx);
            preempt_if_higher_priority(rt, ctx);
        });
    runtime.register_hle("ThreadManForUser", 0x812346E4u, [](Runtime &, AllegrexContext &ctx) {
        const auto it = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_event_flags.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        it->second.pattern &= ctx.gpr[5];
        set_success(ctx);
    });
    const auto wait_event_flag =
        [event_flag_matches, consume_event_flag](Runtime &rt, AllegrexContext &ctx) {
            const auto it = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == g_event_flags.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            const std::uint32_t pattern = ctx.gpr[5];
            const std::uint32_t mode = ctx.gpr[6];
            const std::uint32_t result_ptr = ctx.gpr[7];
            if (event_flag_matches(it->second, pattern, mode)) {
                if (result_ptr != 0u) rt.memory().store32(result_ptr, it->second.pattern);
                consume_event_flag(it->second, pattern, mode);
                set_success(ctx);
                return;
            }
            it->second.waiters.push_back(
                EventFlagWaiter{g_threads.current_uid, pattern, mode, result_ptr});
            (void)block_current_thread(rt, ctx, ThreadState::Sleeping, make_wait_context(ctx),
                                       "event-flag");
        };
    runtime.register_hle("ThreadManForUser", 0x402FCF22u, wait_event_flag);
    runtime.register_hle("ThreadManForUser", 0x30FD48F0u,
        [event_flag_matches, consume_event_flag](Runtime &rt, AllegrexContext &ctx) {
            const auto it = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == g_event_flags.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            const std::uint32_t pattern = ctx.gpr[5];
            const std::uint32_t mode = ctx.gpr[6];
            if (!event_flag_matches(it->second, pattern, mode)) {
                set_return(ctx, 0x800201A8u);  // SCE_KERNEL_ERROR_EVF_COND
                return;
            }
            if (ctx.gpr[7] != 0u) rt.memory().store32(ctx.gpr[7], it->second.pattern);
            consume_event_flag(it->second, pattern, mode);
            set_success(ctx);
        });

    // -----------------------------------------------------------------------
    // ThreadManForUser - message boxes
    // -----------------------------------------------------------------------
    runtime.register_hle("ThreadManForUser", 0x8125221Du, [](Runtime &rt, AllegrexContext &ctx) {
        MbxRecord record;
        record.name = read_guest_string(rt, ctx.gpr[4]);
        const std::int32_t uid = allocate_kernel_uid();
        g_mailboxes[uid] = record;
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ThreadManForUser", 0x86255ADAu, [](Runtime &, AllegrexContext &ctx) {
        g_mailboxes.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0xE9B3061Eu, [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_mailboxes.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_mailboxes.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        const std::uint32_t message = ctx.gpr[5];
        if (!it->second.waiters.empty()) {
            const MbxWaiter waiter = it->second.waiters.front();
            it->second.waiters.erase(it->second.waiters.begin());
            if (waiter.message_out != 0u) rt.memory().store32(waiter.message_out, message);
            if (ThreadRecord *thread = thread_at(waiter.thread_uid); thread != nullptr)
                make_ready(*thread);
        } else {
            it->second.messages.push_back(MbxMessage{message});
        }
        set_success(ctx);
        preempt_if_higher_priority(rt, ctx);
    });
    const auto receive_mbx = [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_mailboxes.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_mailboxes.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        if (!it->second.messages.empty()) {
            const std::uint32_t message = it->second.messages.front().address;
            it->second.messages.erase(it->second.messages.begin());
            if (ctx.gpr[5] != 0u) rt.memory().store32(ctx.gpr[5], message);
            set_success(ctx);
            return;
        }
        it->second.waiters.push_back(MbxWaiter{g_threads.current_uid, ctx.gpr[5]});
        (void)block_current_thread(rt, ctx, ThreadState::Sleeping, make_wait_context(ctx), "mbx");
    };
    runtime.register_hle("ThreadManForUser", 0x18260574u, receive_mbx);
    runtime.register_hle("ThreadManForUser", 0xF3986382u, receive_mbx);
    runtime.register_hle("ThreadManForUser", 0x0D81716Au, [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_mailboxes.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_mailboxes.end() || it->second.messages.empty()) {
            set_return(ctx, 0x800201B4u);  // SCE_KERNEL_ERROR_MBOX_NOMSG
            return;
        }
        const std::uint32_t message = it->second.messages.front().address;
        it->second.messages.erase(it->second.messages.begin());
        if (ctx.gpr[5] != 0u) rt.memory().store32(ctx.gpr[5], message);
        set_success(ctx);
    });

    // -----------------------------------------------------------------------
    // ThreadManForUser - callbacks and alarms
    // -----------------------------------------------------------------------
    runtime.register_hle("ThreadManForUser", 0xE81CAF8Fu, [](Runtime &rt, AllegrexContext &ctx) {
        CallbackRecord record;
        record.name = read_guest_string(rt, ctx.gpr[4]);
        record.function = ctx.gpr[5];
        record.argument = ctx.gpr[6];
        record.owner_thread = g_threads.current_uid;
        const std::int32_t uid = allocate_kernel_uid();
        g_callbacks[uid] = record;
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ThreadManForUser", 0xEDBA5844u, [](Runtime &, AllegrexContext &ctx) {
        g_callbacks.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x349D6D6Cu, [](Runtime &, AllegrexContext &ctx) {
        // Nothing currently notifies a callback, so there is never one pending.
        // Advance time so a poll loop cannot freeze the virtual clock.
        g_virtual_time_us += 25u;
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x6652B8CAu, [](Runtime &, AllegrexContext &ctx) {
        // Alarms are not delivered yet; hand back a uid so the caller proceeds.
        set_return(ctx, static_cast<std::uint32_t>(allocate_kernel_uid()));
    });
    runtime.register_hle("ThreadManForUser", 0x7E65B999u, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
    });

    // -----------------------------------------------------------------------
    // sceDisplay
    // -----------------------------------------------------------------------
    runtime.register_hle("sceDisplay", 0x0E20F177u, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
    });
    runtime.register_hle("sceDisplay", 0x289D82FEu, [](Runtime &, AllegrexContext &ctx) {
        g_display_framebuffer = ctx.gpr[4];
        g_display_stride = ctx.gpr[5];
        g_display_format = ctx.gpr[6];
        ++g_framebuffer_sets;
        set_success(ctx);
    });
    runtime.register_hle("sceDisplay", 0xEEDA2E54u, [](Runtime &rt, AllegrexContext &ctx) {
        if (ctx.gpr[4] != 0u) rt.memory().store32(ctx.gpr[4], g_display_framebuffer);
        if (ctx.gpr[5] != 0u) rt.memory().store32(ctx.gpr[5], g_display_stride);
        if (ctx.gpr[6] != 0u) rt.memory().store32(ctx.gpr[6], g_display_format);
        set_success(ctx);
    });
    runtime.register_hle("sceDisplay", 0x9C6EAAD7u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(g_vblanks));
    });
    runtime.register_hle("sceDisplay", 0x984C27E7u, [](Runtime &rt, AllegrexContext &ctx) {
        // 59.94 Hz. Delaying to the next boundary is the whole frame pacing
        // model until a real presenter exists.
        constexpr std::uint64_t kVblankPeriodUs = 16683u;
        ++g_vblanks;
        const std::uint32_t remainder =
            static_cast<std::uint32_t>(kVblankPeriodUs - (g_virtual_time_us % kVblankPeriodUs));
        delay_current_thread(rt, ctx, remainder);
    });

    // -----------------------------------------------------------------------
    // sceGe_user
    // -----------------------------------------------------------------------
    runtime.register_hle("sceGe_user", 0xE47E40E4u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, kVramBase);
    });
    runtime.register_hle("sceGe_user", 0x1F6752ADu, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, kVramSize);
    });
    runtime.register_hle("sceGe_user", 0xB77905EAu, [](Runtime &, AllegrexContext &ctx) {
        const std::uint32_t previous = g_ge_edram_translation;
        g_ge_edram_translation = ctx.gpr[4];
        set_return(ctx, previous);
    });
    runtime.register_hle("sceGe_user", 0xA4FC06A4u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(allocate_kernel_uid()));
    });
    runtime.register_hle("sceGe_user", 0x05DB22CEu, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
    });
    runtime.register_hle("sceGe_user", 0xAB49E76Au, [](Runtime &, AllegrexContext &ctx) {
        // Headless: record the submission and report it complete immediately.
        // A real GE backend replaces this in Phase 6.
        const std::int32_t id = g_next_ge_list_id++;
        g_ge_lists[id] = ctx.gpr[5];
        ++g_display_list_submissions;
        set_return(ctx, static_cast<std::uint32_t>(id));
    });
    runtime.register_hle("sceGe_user", 0xE0D68148u, [](Runtime &, AllegrexContext &ctx) {
        const auto it = g_ge_lists.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it != g_ge_lists.end()) it->second = ctx.gpr[5];
        set_success(ctx);
    });
    runtime.register_hle("sceGe_user", 0x03444EB4u, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
    });
    runtime.register_hle("sceGe_user", 0xB287BD61u, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
    });

    // -----------------------------------------------------------------------
    // sceCtrl - no buttons held, sticks centred
    // -----------------------------------------------------------------------
    runtime.register_hle("sceCtrl", 0x6A2774F3u, [](Runtime &, AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceCtrl", 0x1F4011E6u, [](Runtime &, AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceCtrl", 0xA7144800u, [](Runtime &, AllegrexContext &ctx) { set_success(ctx); });
    runtime.register_hle("sceCtrl", 0x1F803938u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::uint32_t buffer = ctx.gpr[4];
        const std::uint32_t count = std::max(1u, ctx.gpr[5]);
        for (std::uint32_t i = 0; i < count; ++i) {
            const std::uint32_t entry = buffer + i * 16u;
            rt.memory().store32(entry, static_cast<std::uint32_t>(g_virtual_time_us));
            rt.memory().store32(entry + 4u, 0u);      // buttons
            rt.memory().store8(entry + 8u, 128u);     // analog x
            rt.memory().store8(entry + 9u, 128u);     // analog y
        }
        set_return(ctx, count);
    });

    // -----------------------------------------------------------------------
    // sceAudio
    // -----------------------------------------------------------------------
    runtime.register_hle("sceAudio", 0x5EC81C55u, [](Runtime &, AllegrexContext &ctx) {
        // (channel, samplecount, format); channel -1 asks for any free one.
        const std::int32_t requested = static_cast<std::int32_t>(ctx.gpr[4]);
        std::int32_t channel = requested;
        if (requested < 0) {
            channel = -1;
            for (std::uint32_t i = 0; i < kAudioChannels; ++i) {
                if (!g_audio_channels[i].reserved) { channel = static_cast<std::int32_t>(i); break; }
            }
        }
        if (channel < 0 || static_cast<std::uint32_t>(channel) >= kAudioChannels ||
            (requested >= 0 && g_audio_channels[channel].reserved)) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        AudioChannel &slot = g_audio_channels[static_cast<std::size_t>(channel)];
        slot = AudioChannel{};
        slot.reserved = true;
        slot.sample_count = ctx.gpr[5];
        slot.format = ctx.gpr[6];
        slot.busy_until_us = g_virtual_time_us;
        runtime_log_line("sceAudioChReserve channel=" + std::to_string(channel) +
                         " samples=" + std::to_string(slot.sample_count) +
                         " format=" + std::to_string(slot.format));
        set_return(ctx, static_cast<std::uint32_t>(channel));
    });
    runtime.register_hle("sceAudio", 0x6FC46853u, [](Runtime &, AllegrexContext &ctx) {
        const std::uint32_t channel = ctx.gpr[4];
        if (channel >= kAudioChannels) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        g_audio_channels[channel] = AudioChannel{};
        set_success(ctx);
    });
    runtime.register_hle("sceAudio", 0xCB2E439Eu, [](Runtime &, AllegrexContext &ctx) {
        const std::uint32_t channel = ctx.gpr[4];
        if (channel >= kAudioChannels) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        g_audio_channels[channel].sample_count = ctx.gpr[5];
        set_success(ctx);
    });
    runtime.register_hle("sceAudio", 0x95FD0C2Du, [](Runtime &, AllegrexContext &ctx) {
        const std::uint32_t channel = ctx.gpr[4];
        if (channel >= kAudioChannels) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        g_audio_channels[channel].format = ctx.gpr[5];
        set_success(ctx);
    });
    runtime.register_hle("sceAudio", 0xB7E1D8E7u, [](Runtime &, AllegrexContext &ctx) {
        const std::uint32_t channel = ctx.gpr[4];
        if (channel >= kAudioChannels) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        g_audio_channels[channel].left_volume = ctx.gpr[5];
        g_audio_channels[channel].right_volume = ctx.gpr[6];
        set_success(ctx);
    });
    runtime.register_hle("sceAudio", 0xB011922Fu, [](Runtime &, AllegrexContext &ctx) {
        // Samples still queued ahead of the hardware.
        const std::uint32_t channel = ctx.gpr[4];
        if (channel >= kAudioChannels) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        const AudioChannel &slot = g_audio_channels[channel];
        if (slot.busy_until_us <= g_virtual_time_us) { set_return(ctx, 0u); return; }
        const std::uint64_t remaining_us = slot.busy_until_us - g_virtual_time_us;
        set_return(ctx, static_cast<std::uint32_t>((remaining_us * kAudioSampleRate) / 1000000ull));
    });

    // Queues one buffer. `blocking` waits for room, which is what paces the
    // guest's audio thread; the non-blocking form reports "would block" instead.
    const auto audio_output = [](Runtime &rt, AllegrexContext &ctx, std::uint32_t channel,
                                 bool blocking) {
        if (channel >= kAudioChannels || !g_audio_channels[channel].reserved) {
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        AudioChannel &slot = g_audio_channels[channel];
        const std::uint32_t samples = slot.sample_count;
        const std::uint64_t duration = audio_buffer_duration_us(samples);
        ++g_audio_buffers;
        g_audio_samples += samples;

        // One buffer may be in flight; a second has to wait for the first.
        if (slot.busy_until_us > g_virtual_time_us) {
            const std::uint64_t wait = slot.busy_until_us - g_virtual_time_us;
            if (!blocking) { set_return(ctx, 0u); return; }
            slot.busy_until_us += duration;
            delay_current_thread(rt, ctx, static_cast<std::uint32_t>(wait), samples);
            return;
        }
        slot.busy_until_us = g_virtual_time_us + duration;
        set_return(ctx, samples);
    };

    runtime.register_hle("sceAudio", 0x136CAF51u,
        [audio_output](Runtime &rt, AllegrexContext &ctx) {
            audio_output(rt, ctx, ctx.gpr[4], true);   // sceAudioOutputBlocking
        });
    runtime.register_hle("sceAudio", 0xE2D56B2Du,
        [audio_output](Runtime &rt, AllegrexContext &ctx) {
            audio_output(rt, ctx, ctx.gpr[4], false);  // sceAudioOutputPanned
        });
    runtime.register_hle("sceAudio", 0x13F592BCu,
        [audio_output](Runtime &rt, AllegrexContext &ctx) {
            audio_output(rt, ctx, ctx.gpr[4], true);   // sceAudioOutputPannedBlocking
        });

    // -----------------------------------------------------------------------
    // UtilsForUser - caches are coherent here; time helpers are real
    // -----------------------------------------------------------------------
    const auto cache_noop = [](Runtime &, AllegrexContext &ctx) { set_success(ctx); };
    runtime.register_hle("UtilsForUser", 0x79D1C3FAu, cache_noop);
    runtime.register_hle("UtilsForUser", 0xB435DEC5u, cache_noop);
    runtime.register_hle("UtilsForUser", 0x3EE30821u, cache_noop);
    runtime.register_hle("UtilsForUser", 0xBFA98062u, cache_noop);
    runtime.register_hle("UtilsForUser", 0x920F104Au, cache_noop);
    runtime.register_hle("UtilsForUser", 0x91E4F6A7u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(g_virtual_time_us));
    });
    runtime.register_hle("UtilsForUser", 0x27CC57F0u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(g_virtual_time_us / 1000000u));
    });
    runtime.register_hle("UtilsForUser", 0x71EC4271u, [](Runtime &rt, AllegrexContext &ctx) {
        if (ctx.gpr[4] != 0u) {
            rt.memory().store32(ctx.gpr[4], static_cast<std::uint32_t>(g_virtual_time_us / 1000000u));
            rt.memory().store32(ctx.gpr[4] + 4u, static_cast<std::uint32_t>(g_virtual_time_us % 1000000u));
        }
        set_success(ctx);
    });

    // -----------------------------------------------------------------------
    // Power / suspend / misc
    // -----------------------------------------------------------------------
    const auto ok = [](Runtime &, AllegrexContext &ctx) { set_success(ctx); };
    runtime.register_hle("sceSuspendForUser", 0xEADB1BD7u, ok);
    runtime.register_hle("sceSuspendForUser", 0x3AEE7261u, ok);
    runtime.register_hle("sceSuspendForUser", 0x090CCB3Fu, ok);
    runtime.register_hle("sceSuspendForUser", 0xA14F40B2u, [](Runtime &rt, AllegrexContext &ctx) {
        // The PSP volatile region.
        if (ctx.gpr[5] != 0u) rt.memory().store32(ctx.gpr[5], 0x08400000u);
        if (ctx.gpr[6] != 0u) rt.memory().store32(ctx.gpr[6], 0x00400000u);
        set_success(ctx);
    });
    runtime.register_hle("sceSuspendForUser", 0xA569E425u, ok);
    runtime.register_hle("scePower", 0x04B7766Eu, ok);
    runtime.register_hle("scePower", 0xDFA8BAF8u, ok);
    runtime.register_hle("Kernel_Library", 0x092968F4u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, 1u);  // previous interrupt state
    });
    runtime.register_hle("Kernel_Library", 0x5F10D406u, ok);
    runtime.register_hle("StdioForUser", 0x172D316Eu, [](Runtime &, AllegrexContext &ctx) { set_return(ctx, 0u); });
    runtime.register_hle("StdioForUser", 0xA6BAB2E9u, [](Runtime &, AllegrexContext &ctx) { set_return(ctx, 1u); });
    runtime.register_hle("StdioForUser", 0xF78BA90Au, [](Runtime &, AllegrexContext &ctx) { set_return(ctx, 2u); });
    runtime.register_hle("LoadExecForUser", 0x4AC57943u, ok);
    runtime.register_hle("LoadExecForUser", 0x05572A5Fu, [](Runtime &rt, AllegrexContext &ctx) {
        (void)ctx;
        rt.stop("guest called sceKernelExitGame");
    });
    runtime.register_hle("sceDmac", 0x617F3FE6u, [](Runtime &rt, AllegrexContext &ctx) {
        // Staged through a host buffer so overlapping ranges behave like
        // memmove rather than depending on copy direction.
        const std::uint32_t length = ctx.gpr[6];
        if (length != 0u) {
            std::vector<std::uint8_t> buffer(length);
            rt.memory().copy_out(ctx.gpr[5], buffer);
            rt.memory().copy_in(ctx.gpr[4], buffer);
        }
        set_success(ctx);
    });
    runtime.register_hle("InterruptManager", 0xCA04A2B9u, ok);
    runtime.register_hle("InterruptManager", 0xD61E6961u, ok);
    runtime.register_hle("InterruptManager", 0xFB8E22ECu, ok);

    // -----------------------------------------------------------------------
    // sceRtc
    // -----------------------------------------------------------------------
    runtime.register_hle("sceRtc", 0x3F7AD767u, [](Runtime &rt, AllegrexContext &ctx) {
        if (ctx.gpr[4] != 0u) {
            rt.memory().store32(ctx.gpr[4], static_cast<std::uint32_t>(g_virtual_time_us));
            rt.memory().store32(ctx.gpr[4] + 4u, static_cast<std::uint32_t>(g_virtual_time_us >> 32u));
        }
        set_success(ctx);
    });
    runtime.register_hle("sceRtc", 0x011F03C1u, [](Runtime &, AllegrexContext &ctx) {
        set_return64(ctx, g_virtual_time_us);
    });
    runtime.register_hle("sceRtc", 0xE7C27D1Bu, [](Runtime &rt, AllegrexContext &ctx) {
        // A zeroed pspTime is a valid, if uninteresting, wall clock.
        if (ctx.gpr[4] != 0u) rt.memory().zero(ctx.gpr[4], 16u);
        set_success(ctx);
    });

    // -----------------------------------------------------------------------
    // UMD - medium present, drive ready
    // -----------------------------------------------------------------------
    runtime.register_hle("sceUmdUser", 0x46EBB729u, [](Runtime &, AllegrexContext &ctx) { set_return(ctx, 1u); });
    runtime.register_hle("sceUmdUser", 0x6B4A146Cu, [](Runtime &, AllegrexContext &ctx) { set_return(ctx, 0x32u); });
    runtime.register_hle("sceUmdUser", 0x8EF08FCEu, ok);
    runtime.register_hle("sceUmdUser", 0x4A9E5E29u, ok);
    runtime.register_hle("sceUmdUser", 0xC6183D47u, ok);
    runtime.register_hle("sceUmdUser", 0xE83742BAu, ok);
    runtime.register_hle("sceUmdUser", 0xAEE7404Du, ok);
    runtime.register_hle("sceUmdUser", 0xBD2BDE07u, ok);
    runtime.register_hle("sceUmdUser", 0x20628E6Fu, [](Runtime &, AllegrexContext &ctx) { set_return(ctx, 0u); });

    // -----------------------------------------------------------------------
    // Wireless - no adapter. Ad-hoc multiplayer is out of scope for v1, and the
    // remaining 39 net NIDs stay unimplemented so an accidental call aborts
    // loudly with a named import rather than silently succeeding.
    // -----------------------------------------------------------------------
    runtime.register_hle("sceWlanDrv", 0xD7763699u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, 0u);  // switch off
    });
    runtime.register_hle("sceWlanDrv", 0x0C622081u, [](Runtime &rt, AllegrexContext &ctx) {
        if (ctx.gpr[4] != 0u) rt.memory().zero(ctx.gpr[4], 8u);
        set_success(ctx);
    });

    install_io_hle(runtime, resolve_umd_image(runtime.game_root().string()));

    runtime_log_line("install_profile: HLE registered");
}

void report_headless_stats() {
    const HeadlessStats stats = headless_stats();
    runtime_log_line("vblanks=" + std::to_string(stats.vblanks) +
                     " ge_submissions=" + std::to_string(stats.display_list_submissions) +
                     " framebuffer_sets=" + std::to_string(stats.frame_buffer_sets) +
                     " thread_switches=" + std::to_string(stats.thread_switches) +
                     " live_threads=" + std::to_string(stats.live_threads) +
                     " virtual_time_us=" + std::to_string(stats.virtual_time_us));
}

} // namespace defjam

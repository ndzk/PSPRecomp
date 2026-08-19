#include "defjam_profile.hpp"

#include "defjam_ge.hpp"
#include "defjam_io.hpp"
#include "defjam_atrac.hpp"
#include "defjam_mpeg.hpp"
#include "defjam_net.hpp"
#include "defjam_raster.hpp"
#include "defjam_utility.hpp"
#include "defjam_window.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <array>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
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
// Sleeping and Waiting are both "blocked", but only Sleeping is what
// sceKernelWakeupThread acts on. Collapsing them lets a wakeup aimed at a
// sleeper tear a thread off a semaphore, leaving its entry in that
// semaphore's queue for the next signal to pay out to a thread that is
// already running.
enum class ThreadState { Created, Ready, Running, Sleeping, Waiting, Delayed, Completed };

struct ThreadRecord {
    std::string name;
    // Set between sceKernelCpuSuspendIntr and sceKernelCpuResumeIntr. Nothing
    // used to depend on it, because nothing was ever delivered; now the vblank
    // is, and a handler must not land inside a critical section.
    bool interrupts_masked{};
    // Why this thread last stopped running. A stall is far easier to read as
    // "everyone is waiting on a semaphore" than as a set of program counters.
    std::string blocked_on;
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
    // A timed wait's deadline. The kernel calls these back with a timeout
    // error rather than leaving them blocked, which is the whole point of the
    // caller having passed one.
    std::uint64_t wait_until_us{};
    bool wait_has_deadline{};
    std::uint64_t ready_sequence{};
    bool waiting_thread_end{false};
    std::int32_t waiting_on_thread{-1};
    // The controller sample cycle this thread last read, so a second read
    // inside one cycle can be told apart from the first.
    std::uint64_t last_ctrl_cycle{};
    bool ctrl_sampled{};
};

struct ThreadTable {
    std::int32_t next_uid{1};
    std::int32_t current_uid{0};
    std::uint32_t next_stack_top{kUserMemoryEnd};
    std::uint64_t ready_sequence{0};
    std::uint64_t switches{0};
    std::map<std::int32_t, ThreadRecord> threads;
};

// Kernel error codes a blocked thread can come back with. A timed wait that
// expires and a wait whose object was deleted are both normal outcomes the
// caller is expected to handle; reporting neither is what turns them into a
// thread that never runs again.
// Values from pspsdk's pspkerror.h, which is BSD licensed and so compatible
// with this tree. Each of these sits next to a neighbour a step away that
// means something entirely different - 0x800201AF is EVF_COND but 0x800201B1
// is EVF_ILPAT, 0x800201B2 is MBOX_NOMSG but 0x800201B4 is MPP_EMPTY - so a
// value that is nearly right is a real code for another condition rather than
// an obviously wrong number.
constexpr std::uint32_t kErrorWaitTimeout = 0x800201A8u;
constexpr std::uint32_t kErrorSemaZero = 0x800201ADu;
constexpr std::uint32_t kErrorEvfCond = 0x800201AFu;
constexpr std::uint32_t kErrorMboxNoMsg = 0x800201B2u;
constexpr std::uint32_t kErrorWaitDelete = 0x800201B5u;

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
//
// `complete` exists for the case where the host called into the guest and needs
// the answer: it receives the guest function's return value and produces what
// the interrupted caller sees in v0. A plain callback has none.
struct AsyncReturnFrame {
    AllegrexContext resume;
    GuestCallCompletion complete;
};

// A guest function the host owes the current thread, delivered by redirecting
// execution rather than by the guest polling for it.
struct PendingGuestCall {
    std::uint32_t function{};
    std::uint32_t arg0{};
    std::uint32_t arg1{};
    std::uint32_t arg2{};
};

// A sub-interrupt handler the title registered. Hardware runs it on whichever
// thread it interrupted, on that thread's stack, which is exactly the shape
// enter_guest_call already models for GE callbacks.
struct SubInterruptHandler {
    std::uint32_t function{};
    std::uint32_t argument{};
    bool enabled{};
};

// Keyed by interrupt code and sub code together.
std::map<std::uint32_t, SubInterruptHandler> g_sub_interrupts;
constexpr std::uint32_t kVblankInterrupt = 30u;   // PSP_VBLANK_INT

std::uint32_t sub_interrupt_key(std::uint32_t interrupt, std::uint32_t sub) {
    return (interrupt << 8u) | (sub & 0xFFu);
}

// 59.94 Hz. The vblank is a clock, not a service the guest asks for: hardware
// raises it whether or not anybody is waiting. Deriving it from
// sceDisplayWaitVblankStart instead stops it dead for the whole length of a
// movie, because this title spends that time in sceKernelDelayThread and never
// asks - and its movie player waits on an event flag that only the vblank
// handler ever sets.
constexpr std::uint64_t kVblankPeriodUs = 16683u;
std::uint64_t g_vblank_next_us = kVblankPeriodUs;
bool g_vblank_pending = false;
bool g_vblank_in_flight = false;

PartitionTable g_partitions;
ThreadTable g_threads;
std::map<std::int32_t, SemaphoreRecord> g_semaphores;
std::map<std::int32_t, EventFlagRecord> g_event_flags;
std::map<std::int32_t, MbxRecord> g_mailboxes;
std::map<std::int32_t, CallbackRecord> g_callbacks;
std::map<std::int32_t, std::vector<AsyncReturnFrame>> g_async_frames;
std::map<std::int32_t, std::deque<PendingGuestCall>> g_pending_guest_calls;
std::int32_t g_next_kernel_uid = 0x1000;
std::uint64_t g_virtual_time_us = 0;
std::uint32_t g_compiled_sdk_version = 0;

// Display / GE
// The panel is 480x272 whatever the buffer stride is; the stride is the
// allocation width, which this title keeps at 512.
constexpr std::uint32_t kDisplayWidth = 480u;
constexpr std::uint32_t kDisplayHeight = 272u;
std::uint32_t g_display_framebuffer = 0;
std::uint32_t g_display_stride = 512;
std::uint32_t g_display_format = 3;
std::uint64_t g_vblanks = 0;
std::uint64_t g_display_list_submissions = 0;
std::uint64_t g_framebuffer_sets = 0;
std::int32_t g_next_ge_list_id = 0x10;

// sceGeSetCallback registers a PspGeCallbackData: signal handler, signal
// argument, finish handler, finish argument, in that order.
struct GeCallbackRecord {
    std::uint32_t signal_function{};
    std::uint32_t signal_argument{};
    std::uint32_t finish_function{};
    std::uint32_t finish_argument{};
};
std::map<std::int32_t, GeCallbackRecord> g_ge_callbacks;

// A queued list keeps the callback set it was enqueued with, because
// sceGeListUpdateStallAddr names only the list.
struct GeListRecord {
    GeListState state;
    std::int32_t callback_id{-1};
};

std::uint64_t g_ge_signal_callbacks = 0;
std::uint64_t g_ge_finish_callbacks = 0;
std::uint32_t g_ge_edram_translation = 0x400;
std::map<std::int32_t, GeListRecord> g_ge_lists;

std::uint64_t g_starvation_tick_us = 0;

// ---------------------------------------------------------------------------
// Module loading
// ---------------------------------------------------------------------------
// The title loads Sony system PRXs from USRDIR/assets/module -- audiocodec,
// mpeg, sc_sascore, libatrac3plus and friends. Their code is deliberately not
// recompiled or executed: what those modules provide is a set of library
// surfaces this profile implements itself, so loading one registers nothing
// and the guest's imports resolve to the HLE either way.
//
// That holds only for the surfaces actually implemented. sceMpeg, sceSasCore,
// sceAtrac3plus and sceAudio are; the networking libraries deliberately are
// not, so a title that reaches one stops under the missing_function policy
// rather than being told a wireless call succeeded.
//
// The load is still verified against the staged disc rather than blindly
// accepted, so a path the title expects and the user has not staged fails
// loudly instead of producing a module handle that refers to nothing.
constexpr std::int32_t kMainModuleId = 0x300;

struct LoadedModule {
    std::string path;
    bool started{};
};

std::map<std::int32_t, LoadedModule> g_modules;
std::int32_t g_next_module_uid = 0x400;

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
// sceSasCore - the PSP voice synthesiser
// ---------------------------------------------------------------------------
// Voice lifetimes are modelled properly; the waveform is not. __sceSasCore
// writes silence rather than decoding VAG/ADPCM, which is Phase 7 work. That is
// a visible limitation, not a pretend one: the guest gets real end flags and
// envelope progress so its mixer logic advances, and an obviously empty buffer
// rather than plausible-looking noise.
//
// A voice's length comes from the ADPCM block geometry it was handed: VAG packs
// 28 samples into every 16-byte block, so a keyed-on voice ends after its own
// data would have been consumed unless it loops.
constexpr std::uint32_t kSasVoices = 32u;
constexpr std::uint32_t kSasSamplesPerBlock = 28u;
constexpr std::uint32_t kSasBytesPerBlock = 16u;
constexpr std::uint32_t kSasPitchUnity = 0x1000u;

struct SasVoice {
    std::uint32_t vag_address{};
    std::uint32_t vag_size{};
    std::uint32_t loop_mode{};
    std::uint32_t pitch{kSasPitchUnity};
    std::uint32_t left_volume{};
    std::uint32_t right_volume{};
    std::uint32_t attack{}, decay{}, sustain{}, release{};
    std::uint32_t adsr_mode{};
    std::uint32_t sustain_level{};
    bool playing{};
    bool paused{};
    bool noise{};
    std::uint64_t samples_played{};
    std::uint64_t total_samples{};
};

struct SasCore {
    bool initialised{};
    std::uint32_t grain{256u};
    std::uint32_t max_voices{kSasVoices};
    std::uint32_t output_mode{};
    std::uint32_t sample_rate{kAudioSampleRate};
    std::uint32_t reverb_type{};
    std::uint32_t reverb_left{}, reverb_right{};
    std::uint32_t reverb_voices{};
    std::array<SasVoice, kSasVoices> voices{};
};

SasCore g_sas;
std::uint64_t g_sas_core_calls = 0;
std::uint64_t g_sas_key_ons = 0;

std::uint64_t sas_voice_length_samples(std::uint32_t size_bytes) {
    return (static_cast<std::uint64_t>(size_bytes) / kSasBytesPerBlock) * kSasSamplesPerBlock;
}

// Advances every playing voice by one grain and retires those that ran out.
void sas_advance(std::uint32_t grain) {
    for (SasVoice &voice : g_sas.voices) {
        if (!voice.playing || voice.paused) continue;
        const std::uint64_t step =
            (static_cast<std::uint64_t>(grain) * std::max(1u, voice.pitch)) / kSasPitchUnity;
        voice.samples_played += step;
        if (voice.total_samples == 0u) continue;   // length unknown: let it run
        if (voice.samples_played < voice.total_samples) continue;
        if (voice.loop_mode != 0u) {
            voice.samples_played %= voice.total_samples;
            continue;
        }
        voice.playing = false;
    }
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
// -1 records every thread. Narrowing to one keeps a busy thread from crowding
// the thread actually under investigation out of the ring.
std::int32_t g_trace_thread = -1;

// A word the guest writes that we want to see change, and what it last held.
struct MemoryWatch {
    std::uint32_t address{};
    std::uint32_t value{};
    bool primed{};
};
std::vector<MemoryWatch> g_watches;
std::uint64_t g_watch_hits = 0;

// Checks the watched words. This runs between dispatches rather than inside the
// store path, so it names the unit that changed a value rather than the exact
// instruction; with PSPRECOMP_NO_CHAIN=1 that is enough to point at a function,
// and it costs nothing when no watch is set.
void check_watches(Runtime &rt, std::uint32_t dispatch_pc, std::int32_t thread_uid) {
    for (MemoryWatch &watch : g_watches) {
        if (!rt.memory().contains(watch.address, 4u)) continue;
        const std::uint32_t now = rt.memory().load32(watch.address);
        if (watch.primed && now == watch.value) continue;
        if (watch.primed) {
            ++g_watch_hits;
            runtime_log_line("watch " + psprecomp::hex32(watch.address) + " " +
                             psprecomp::hex32(watch.value) + " -> " + psprecomp::hex32(now) +
                             " by thread " + std::to_string(thread_uid) + " at " +
                             psprecomp::hex32(dispatch_pc));
        }
        watch.value = now;
        watch.primed = true;
    }
}

// Watching for the guest to stop drawing.
//
// A title that hangs looks exactly like one that is working hard: the process
// saturates a core either way. The difference is that a working one keeps
// handing frames to the display, so the wall clock since the last flip is the
// thing worth measuring - and when it grows without bound the run can say what
// every thread was doing instead of leaving that to be guessed at later.
std::uint64_t g_stall_seconds = 0u;
// A dispatch count says nothing about where a run will get to: the same number
// covers eighteen seconds of a loading screen or twenty-seven minutes of a
// title spinning in a dialog. Guest time is the budget worth stating.
std::uint64_t g_stop_at_guest_us = 0u;
// Snapshots along the way, so a headless run can be looked at without waiting
// for it to end and without a window.
std::uint64_t g_frame_dump_interval_us = 0u;
std::uint64_t g_next_frame_dump_us = 0u;
std::uint64_t g_frame_dumps_written = 0u;
std::uint64_t g_heartbeat_seconds = 0u;
std::uint64_t g_hook_dispatches = 0u;
std::chrono::steady_clock::time_point g_last_flip{};
std::chrono::steady_clock::time_point g_last_heartbeat{};
bool g_stall_reported = false;

void note_frame_flip() { g_last_flip = std::chrono::steady_clock::now(); }

// Whether check_progress has anything to do.
//
// Both the setup that arms the watchdog and the dispatch hook that samples it
// have to agree on this, and asking it in one place is what keeps them
// agreeing. They did not: the hook tested only the stall and heartbeat
// intervals, so arming the watchdog with a guest time budget alone logged that
// it was armed and then never checked it, and the run sailed past its budget.
// A frame dump interval on its own was dropped the same way.
[[nodiscard]] bool watchdog_armed() {
    return g_stall_seconds != 0u || g_heartbeat_seconds != 0u ||
           g_stop_at_guest_us != 0u || g_frame_dump_interval_us != 0u;
}

// The two that measure wall time, and so have to be sampled: reading a clock on
// every dispatch would cost more than the thing it watches for. The two that
// measure guest time do not need sampling at all - see below.
[[nodiscard]] bool wall_clock_watchdog_armed() {
    return g_stall_seconds != 0u || g_heartbeat_seconds != 0u;
}

// Set when guest time has reached something that was waiting for it.
bool g_guest_deadline_due = false;

// Everything that moves guest time forward goes through the two helpers below.
//
// A budget stated in guest time should be noticed when guest time reaches it,
// not whenever the dispatch sampler next happens to run. Sampling every 0x100000
// dispatches works out at ninety to a hundred and twenty seconds of guest time
// in this title, so a five second budget stopped the run at ninety seconds and a
// frame every two seconds produced one every ninety. Testing the deadline where
// the clock actually moves costs two integer compares and no clock read, and the
// dispatch hook picks the flag up at the next instruction boundary.
//
// The work is deferred to that boundary rather than done here because these run
// inside the scheduler and inside HLE handlers; stopping the run or reading the
// framebuffer from there would reenter both.
void note_guest_time_deadlines() {
    if ((g_stop_at_guest_us != 0u && g_virtual_time_us >= g_stop_at_guest_us) ||
        (g_frame_dump_interval_us != 0u && g_virtual_time_us >= g_next_frame_dump_us)) {
        g_guest_deadline_due = true;
    }
}

void advance_virtual_time_to(std::uint64_t when) {
    g_virtual_time_us = std::max(g_virtual_time_us, when);
    note_guest_time_deadlines();
}

void advance_virtual_time_by(std::uint64_t delta) {
    g_virtual_time_us += delta;
    note_guest_time_deadlines();
}

// Acts on whatever guest time has reached. Called from the dispatch hook the
// moment note_guest_time_deadlines raised its flag, so a budget stops the run at
// the microsecond it was set for rather than at the next sample.
void service_guest_deadlines(Runtime &rt) {
    if (g_stop_at_guest_us != 0u && g_virtual_time_us >= g_stop_at_guest_us) {
        rt.stop("the guest time budget of " + std::to_string(g_stop_at_guest_us) + "us ran out");
        return;
    }

    if (g_frame_dump_interval_us != 0u && g_virtual_time_us >= g_next_frame_dump_us) {
        g_next_frame_dump_us = g_virtual_time_us + g_frame_dump_interval_us;
        const std::string path = "frame_" + std::to_string(g_virtual_time_us / 1000u) + "ms.bmp";
        std::string error;
        if (dump_display(rt, path, error)) {
            ++g_frame_dumps_written;
            runtime_log_line("frame written: " + path);
        } else {
            runtime_log_line("frame not written: " + error);
        }
    }
}

void check_progress(Runtime &rt, std::int32_t dispatch_thread_uid) {
    const auto now = std::chrono::steady_clock::now();
    const auto since = [&now](std::chrono::steady_clock::time_point point) {
        return static_cast<std::uint64_t>(
            std::chrono::duration_cast<std::chrono::seconds>(now - point).count());
    };

    if (g_heartbeat_seconds != 0u && since(g_last_heartbeat) >= g_heartbeat_seconds) {
        g_last_heartbeat = now;
        runtime_log_line("heartbeat: guest " + std::to_string(g_virtual_time_us) + "us, " +
                         std::to_string(g_hook_dispatches) + " dispatches, thread " +
                         std::to_string(dispatch_thread_uid) + ", " +
                         std::to_string(since(g_last_flip)) + "s since the last frame");
    }

    if (g_stall_seconds == 0u || g_stall_reported || since(g_last_flip) < g_stall_seconds) return;
    g_stall_reported = true;
    const std::string headline = "the guest stopped drawing for " +
                                 std::to_string(since(g_last_flip)) + " seconds";
    runtime_log_line("STALL: " + headline);
    std::cerr << "" << headline << " - dumping state" << "" << std::endl;
    std::cerr << thread_report();
    dump_dispatch_trace(120u);
    rt.stop(headline);
}

void pre_dispatch_hook(Runtime &rt, AllegrexContext &, std::uint32_t dispatch_pc,
                       std::int32_t dispatch_thread_uid) {
    // Reading a clock on every dispatch would cost more than the thing it is
    // watching for, so this samples.
    if (g_guest_deadline_due) {
        g_guest_deadline_due = false;
        service_guest_deadlines(rt);
    }
    if ((++g_hook_dispatches & 0xFFFFFu) == 0u && wall_clock_watchdog_armed()) {
        check_progress(rt, dispatch_thread_uid);
    }
    if (!g_watches.empty()) check_watches(rt, dispatch_pc, dispatch_thread_uid);
    if (g_trace.empty()) return;
    if (g_trace_thread >= 0 && dispatch_thread_uid != g_trace_thread) return;
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

// o32 passes the first four arguments in a0-a3 and spills the rest to the
// caller's frame, starting at sp+16 above the argument save area.
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
    // A thread that has exited stays exited. It is still in the table, and
    // still in whatever wait queues it was in when it died, so a later signal
    // will find it and try to run it again.
    if (thread.state == ThreadState::Completed) return;
    thread.state = ThreadState::Ready;
    thread.ready_sequence = ++g_threads.ready_sequence;
}

// Drops a thread from every queue it could be waiting in. A thread leaves a
// wait for reasons the object it waited on knows nothing about - a timeout, or
// the thread being terminated - and an entry left behind is later paid out to
// somebody who is no longer waiting for it.
void remove_from_wait_queues(std::int32_t uid) {
    for (auto &[id, semaphore] : g_semaphores) {
        (void)id;
        auto &waiters = semaphore.waiters;
        waiters.erase(std::remove_if(waiters.begin(), waiters.end(),
                                     [uid](const SemaphoreWaiter &w) { return w.thread_uid == uid; }),
                      waiters.end());
    }
    for (auto &[id, flag] : g_event_flags) {
        (void)id;
        auto &waiters = flag.waiters;
        waiters.erase(std::remove_if(waiters.begin(), waiters.end(),
                                     [uid](const EventFlagWaiter &w) { return w.thread_uid == uid; }),
                      waiters.end());
    }
    for (auto &[id, mailbox] : g_mailboxes) {
        (void)id;
        auto &waiters = mailbox.waiters;
        waiters.erase(std::remove_if(waiters.begin(), waiters.end(),
                                     [uid](const MbxWaiter &w) { return w.thread_uid == uid; }),
                      waiters.end());
    }
}

// Ends a blocked thread's wait early, reporting `error` where the call it is
// suspended in will return it.
void cancel_wait(std::int32_t uid, ThreadRecord &thread, std::uint32_t error) {
    remove_from_wait_queues(uid);
    thread.wait_has_deadline = false;
    thread.waiting_thread_end = false;
    thread.waiting_on_thread = -1;
    thread.suspended.set_gpr(2, error);
    make_ready(thread);
}

// Deleting a kernel object is no reason for the threads queued on it to stop
// existing. The kernel hands each of them the delete error and lets them run;
// erasing the record underneath them strands them on something that is gone.
void release_deleted_object_waiters(const std::vector<std::int32_t> &uids) {
    for (std::int32_t uid : uids)
        if (ThreadRecord *thread = thread_at(uid); thread != nullptr)
            cancel_wait(uid, *thread, kErrorWaitDelete);
}

// Frees anything blocked in sceKernelWaitThreadEnd on this thread. Every path
// that ends a thread owes this, and the one that did not was leaving its
// joiners blocked for good.
void wake_joiners(std::int32_t uid) {
    for (auto &[other_uid, other] : g_threads.threads) {
        (void)other_uid;
        if (!other.waiting_thread_end || other.waiting_on_thread != uid) continue;
        other.waiting_thread_end = false;
        other.waiting_on_thread = -1;
        other.wait_has_deadline = false;
        other.suspended.set_gpr(2, 0u);
        make_ready(other);
    }
}

// Hands a blocked thread its wait back as a success.
void complete_wait(ThreadRecord &thread) {
    thread.wait_has_deadline = false;
    thread.suspended.set_gpr(2, 0u);
    make_ready(thread);
}

void promote_expired_delays() {
    for (auto &[uid, thread] : g_threads.threads) {
        if (thread.state == ThreadState::Delayed && thread.delay_until_us <= g_virtual_time_us) {
            make_ready(thread);
            continue;
        }
        // A timed wait that has run out comes back with a timeout, exactly as
        // the caller asked for when it passed one.
        if (thread.state == ThreadState::Waiting && thread.wait_has_deadline &&
            thread.wait_until_us <= g_virtual_time_us) {
            cancel_wait(uid, thread, kErrorWaitTimeout);
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

// Advances the vblank clock to the current virtual time. A single scheduler
// jump can cross several periods when every thread is asleep; hardware would
// have raised each one, but a backlog of handler calls helps nobody, so they
// coalesce into one pending interrupt the way a masked one does.
void pump_vblank_clock() {
    while (g_virtual_time_us >= g_vblank_next_us) {
        ++g_vblanks;
        g_vblank_next_us += kVblankPeriodUs;
        g_vblank_pending = true;
    }
}

void deliver_vblank_interrupt(AllegrexContext &ctx);

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
            // Both a delay and a timed wait are deadlines somebody is due to
            // come back from. Looking only at delays reports a deadlock while
            // a timeout is still pending.
            if (thread.state == ThreadState::Delayed) {
                if (!earliest || thread.delay_until_us < *earliest) earliest = thread.delay_until_us;
            } else if (thread.state == ThreadState::Waiting && thread.wait_has_deadline) {
                if (!earliest || thread.wait_until_us < *earliest) earliest = thread.wait_until_us;
            }
        }
        if (!earliest) return false;
        advance_virtual_time_to(*earliest);
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
    // The interrupt lands on whoever was about to run, which is the thread
    // hardware would have interrupted.
    pump_vblank_clock();
    deliver_vblank_interrupt(ctx);
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
    thread->blocked_on = reason != nullptr ? reason : "";
    if (!activate_next_thread(rt, ctx, reason)) {
        rt.stop(std::string("deadlock: no runnable PSP thread (") + reason + ")");
        return false;
    }
    return true;
}

// Blocks on a kernel object rather than in sceKernelSleepThread. `timeout_ptr`
// is the guest pointer the caller passed: it holds a limit in microseconds,
// and a null pointer means "for as long as it takes". Every one of these used
// to discard the limit, which turned every timed wait in the title into an
// unbounded one.
bool block_on_object(Runtime &rt, AllegrexContext &ctx, std::uint32_t timeout_ptr,
                     const char *reason) {
    if (ThreadRecord *thread = current_thread(); thread != nullptr) {
        thread->wait_has_deadline = timeout_ptr != 0u && rt.memory().contains(timeout_ptr, 4u);
        if (thread->wait_has_deadline)
            thread->wait_until_us = g_virtual_time_us + rt.memory().load32(timeout_ptr);
    }
    return block_current_thread(rt, ctx, ThreadState::Waiting, make_wait_context(ctx), reason);
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
    // In 64 bits for the same reason as the heap side: rounding a near-4 GB
    // request up wraps to a tiny value, and a stack of no length puts the
    // thread control block below its own allocation.
    const std::uint64_t aligned = (static_cast<std::uint64_t>(size) + 0xFFull) & ~0xFFull;
    if (aligned == 0ull || aligned > g_threads.next_stack_top) return 0u;
    const std::uint32_t bottom = g_threads.next_stack_top - aligned;
    if (bottom < g_partitions.next_address) return 0u;  // heap and stacks met
    g_threads.next_stack_top = bottom;
    return bottom;
}

// ---------------------------------------------------------------------------
// Guest trampolines
// ---------------------------------------------------------------------------
void thread_return_trampoline(Runtime &rt, AllegrexContext &ctx) {
    // Address zero is where a thread body returns to, and it is also where a
    // call through a null or clobbered function pointer lands. The two are
    // told apart by $ra: a thread body arrives here by jr $ra with $ra still
    // holding this address, while jalr through a bad pointer leaves $ra
    // pointing at the caller. Without this the second reads as an ordinary
    // thread exit in the log, which is a poor way to learn about it.
    if (ctx.gpr[31] != kThreadReturnAddress) {
        rt.stop("guest called through a null or invalid function pointer; $ra=" +
                psprecomp::hex32(ctx.gpr[31]));
        return;
    }
    ThreadRecord *thread = current_thread();
    if (thread != nullptr) {
        thread->exit_status = ctx.gpr[2];
        thread->state = ThreadState::Completed;
        runtime_log_line("thread " + std::to_string(g_threads.current_uid) + " (" + thread->name +
                         ") returned, status=" + std::to_string(thread->exit_status));
        wake_joiners(g_threads.current_uid);
    }
    if (!activate_next_thread(rt, ctx, "thread-exit")) {
        rt.stop("all PSP threads have exited");
    }
}

// Redirects the running thread into a guest function and arranges for it to
// come back through the interrupt trampoline rather than through $ra. This is
// how hardware delivers a GE callback: it runs on the interrupted thread, on
// that thread's stack, and returns via the kernel.
void enter_guest_call(AllegrexContext &ctx, const PendingGuestCall &call,
                      const AllegrexContext &resume, GuestCallCompletion complete = nullptr) {
    g_async_frames[g_threads.current_uid].push_back(
        AsyncReturnFrame{resume, std::move(complete)});
    ctx.set_gpr(4, call.arg0);
    ctx.set_gpr(5, call.arg1);
    ctx.set_gpr(6, call.arg2);
    ctx.set_gpr(31, kInterruptReturnAddress);
    ctx.pc = call.function;
}

// Runs the registered vblank handler on the resuming thread and returns it to
// exactly where it was. v0 is carried across by hand: the trampoline hands the
// completion the handler's return value, and the interrupted thread must not
// see it.
void deliver_vblank_interrupt(AllegrexContext &ctx) {
    if (!g_vblank_pending || g_vblank_in_flight) return;
    // A thread that masked interrupts keeps them masked. The vblank stays
    // pending and lands on a later switch rather than being dropped.
    const ThreadRecord *resuming = current_thread();
    if (resuming != nullptr && resuming->interrupts_masked) return;
    const auto it = g_sub_interrupts.find(sub_interrupt_key(kVblankInterrupt, 0u));
    if (it == g_sub_interrupts.end() || !it->second.enabled || it->second.function == 0u) return;

    g_vblank_pending = false;
    g_vblank_in_flight = true;
    const std::uint32_t resume_v0 = ctx.gpr[2];
    // The sub code arrives in a0 and the registered argument in a1.
    enter_guest_call(ctx, PendingGuestCall{it->second.function, 0u, it->second.argument, 0u}, ctx,
                     [resume_v0](Runtime &, std::uint32_t) {
                         g_vblank_in_flight = false;
                         return resume_v0;
                     });
}

// Ends an HLE call that queued guest work. `result` is what the caller sees in
// v0, once every queued callback has run. Returns true if execution was
// redirected, in which case the caller must not touch ctx afterwards.
bool deliver_pending_guest_calls(AllegrexContext &ctx, std::uint32_t result) {
    auto &queue = g_pending_guest_calls[g_threads.current_uid];
    if (queue.empty()) {
        ctx.set_gpr(2, result);
        return false;
    }
    const PendingGuestCall call = queue.front();
    queue.pop_front();
    enter_guest_call(ctx, call, make_wait_context(ctx, result));
    return true;
}

void interrupt_return_trampoline(Runtime &rt, AllegrexContext &ctx) {
    auto &frames = g_async_frames[g_threads.current_uid];
    if (frames.empty()) {
        rt.stop("returned to the interrupt trampoline with no pending frame");
        return;
    }
    const AllegrexContext resume = frames.back().resume;
    GuestCallCompletion complete = std::move(frames.back().complete);
    frames.pop_back();

    // The guest's return value is only meaningful to a host caller that asked
    // for it; read it before the context is overwritten.
    const std::uint32_t returned = ctx.gpr[2];
    ctx = resume;
    if (complete) ctx.set_gpr(2, complete(rt, returned));

    // One list can raise several callbacks, so chain them onto the same resume
    // point instead of delivering the first and dropping the rest.
    auto &queue = g_pending_guest_calls[g_threads.current_uid];
    if (queue.empty()) return;
    const PendingGuestCall call = queue.front();
    queue.pop_front();
    enter_guest_call(ctx, call, resume);
}

// Turns what the list interpreter saw into guest work. A list with no callback
// set, or a set whose handler is null, raises nothing, which is the ordinary
// case for a title that only wants one of the two.
void queue_ge_callbacks(const GeExecution &execution, std::int32_t callback_id) {
    if (!execution.signalled && !execution.finished) return;
    const auto it = g_ge_callbacks.find(callback_id);
    if (it == g_ge_callbacks.end()) return;

    auto &queue = g_pending_guest_calls[g_threads.current_uid];
    // Signal precedes finish: the GE raises it earlier in the stream.
    if (execution.signalled && it->second.signal_function != 0u) {
        ++g_ge_signal_callbacks;
        queue.push_back(PendingGuestCall{it->second.signal_function, execution.signal_argument,
                                         it->second.signal_argument});
    }
    if (execution.finished && it->second.finish_function != 0u) {
        ++g_ge_finish_callbacks;
        queue.push_back(PendingGuestCall{it->second.finish_function, execution.finish_argument,
                                         it->second.finish_argument});
    }
}

// ---------------------------------------------------------------------------
// Runtime hooks
// ---------------------------------------------------------------------------
void starvation_tick(Runtime &rt, AllegrexContext &ctx) {
    advance_virtual_time_by(g_starvation_tick_us);
    pump_vblank_clock();
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

// Writes a slice of guest memory to a host file at the end of a run.
// PSPRECOMP_DEFJAM_DUMP_RANGE=0xADDRESS:0xLENGTH:path. Exists because the
// interesting question about runtime-loaded code is what it looks like after
// the guest has finished relocating it, and that is a diff against the file it
// came from rather than anything a log line can carry.
bool dump_guest_range(psprecomp::Runtime &rt, std::string &description) {
    const char *text = std::getenv("PSPRECOMP_DEFJAM_DUMP_RANGE");
    if (text == nullptr || *text == 0) return false;
    const std::string spec(text);
    const std::size_t first = spec.find(58);
    const std::size_t second = spec.find(58, first == std::string::npos ? 0 : first + 1);
    if (first == std::string::npos || second == std::string::npos) {
        description = "PSPRECOMP_DEFJAM_DUMP_RANGE wants address:length:path";
        return false;
    }
    const auto address =
        static_cast<std::uint32_t>(std::strtoul(spec.substr(0, first).c_str(), nullptr, 0));
    const auto length = static_cast<std::uint32_t>(
        std::strtoul(spec.substr(first + 1, second - first - 1).c_str(), nullptr, 0));
    const std::string path = spec.substr(second + 1);
    if (length == 0u || !rt.memory().contains(address, length)) {
        description = "the requested range is not inside guest memory";
        return false;
    }
    std::vector<std::uint8_t> bytes(length);
    rt.memory().copy_out(address, bytes);
    std::ofstream file(path, std::ios::binary);
    if (!file) {
        description = "could not open " + path;
        return false;
    }
    file.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(length));
    description = std::to_string(length) + " bytes from " + psprecomp::hex32(address) + " to " + path;
    return true;
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

void install_memory_watch() {
    const char *text = std::getenv("PSPRECOMP_DEFJAM_WATCH");
    if (text == nullptr || text[0] == 0) return;

    // A comma-separated list of guest addresses, each watched as a 32-bit word.
    const std::string list(text);
    std::size_t cursor = 0u;
    while (cursor <= list.size()) {
        const std::size_t comma = list.find(',', cursor);
        const std::string item =
            list.substr(cursor, comma == std::string::npos ? std::string::npos : comma - cursor);
        if (!item.empty()) {
            const auto address = static_cast<std::uint32_t>(std::strtoul(item.c_str(), nullptr, 0));
            if (address != 0u) g_watches.push_back(MemoryWatch{address, 0u, false});
        }
        if (comma == std::string::npos) break;
        cursor = comma + 1u;
    }
    if (g_watches.empty()) return;

    std::string summary;
    for (const MemoryWatch &watch : g_watches) summary += " " + psprecomp::hex32(watch.address);
    runtime_log_line("watching" + summary);
    psprecomp::set_runtime_pre_dispatch_hook(&pre_dispatch_hook);
}

void install_progress_watchdog() {
    const auto number = [](const char *name) -> std::uint64_t {
        const char *text = std::getenv(name);
        if (text == nullptr || *text == 0) return 0u;
        return std::strtoull(text, nullptr, 0);
    };
    g_stall_seconds = number("PSPRECOMP_DEFJAM_STALL_SECONDS");
    g_heartbeat_seconds = number("PSPRECOMP_DEFJAM_HEARTBEAT_SECONDS");
    g_stop_at_guest_us = number("PSPRECOMP_DEFJAM_STOP_AT_GUEST_US");
    g_frame_dump_interval_us = number("PSPRECOMP_DEFJAM_FRAME_EVERY_US");
    g_next_frame_dump_us = g_frame_dump_interval_us;
    if (!watchdog_armed()) return;

    const auto now = std::chrono::steady_clock::now();
    g_last_flip = now;
    g_last_heartbeat = now;
    if (g_stall_seconds != 0u) {
        runtime_log_line("watchdog: stop after " + std::to_string(g_stall_seconds) +
                         "s without a frame");
    }
    if (g_heartbeat_seconds != 0u) {
        runtime_log_line("watchdog: heartbeat every " + std::to_string(g_heartbeat_seconds) + "s");
    }
    if (g_stop_at_guest_us != 0u) {
        runtime_log_line("watchdog: stop at guest " + std::to_string(g_stop_at_guest_us) + "us");
    }
    if (g_frame_dump_interval_us != 0u) {
        runtime_log_line("watchdog: a frame every " + std::to_string(g_frame_dump_interval_us) +
                         "us of guest time");
    }
    psprecomp::set_runtime_pre_dispatch_hook(&pre_dispatch_hook);
}

void install_dispatch_trace() {
    const char *text = std::getenv("PSPRECOMP_DEFJAM_TRACE");
    if (text == nullptr || *text == '\0' || std::strcmp(text, "0") == 0) return;

    std::size_t entries = 256u;
    const unsigned long long parsed = std::strtoull(text, nullptr, 0);
    if (parsed > 1ull) entries = static_cast<std::size_t>(std::min<unsigned long long>(parsed, 1u << 20u));

    g_trace.assign(entries, DispatchTraceEntry{});
    g_trace_head = 0;
    g_trace_total = 0;
    if (const char *only = std::getenv("PSPRECOMP_DEFJAM_TRACE_THREAD");
        only != nullptr && only[0] != 0) {
        g_trace_thread = static_cast<std::int32_t>(std::strtol(only, nullptr, 0));
    }
    psprecomp::set_runtime_pre_dispatch_hook(&pre_dispatch_hook);
    runtime_log_line("dispatch trace enabled, " + std::to_string(entries) + " entries" +
                     (g_trace_thread >= 0 ? ", thread " + std::to_string(g_trace_thread) + " only"
                                          : ""));
}

void dump_dispatch_trace(std::size_t limit) {
    if (g_trace.empty()) {
        std::cerr << "[trace] not enabled; set PSPRECOMP_DEFJAM_TRACE=1 (or a ring size)\n";
        return;
    }
    const std::size_t recorded = static_cast<std::size_t>(
        std::min<std::uint64_t>(g_trace_total, g_trace.size()));
    // PSPRECOMP_DEFJAM_TRACE_DUMP overrides how much of the ring is printed,
    // which is what you want when the interesting thread ran early.
    if (const char *text = std::getenv("PSPRECOMP_DEFJAM_TRACE_DUMP");
        text != nullptr && *text != '\0') {
        const unsigned long long parsed = std::strtoull(text, nullptr, 0);
        if (parsed != 0ull) limit = static_cast<std::size_t>(parsed);
    }
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

bool call_guest_function(Runtime &runtime, AllegrexContext &ctx, std::uint32_t function,
                         std::uint32_t arg0, std::uint32_t arg1, std::uint32_t arg2,
                         GuestCallCompletion complete) {
    (void)runtime;
    if (current_thread() == nullptr) return false;
    // The caller resumes at its own $ra; v0 is replaced by `complete`, so the
    // placeholder stored here never reaches the guest.
    enter_guest_call(ctx, PendingGuestCall{function, arg0, arg1, arg2},
                     make_wait_context(ctx, 0u), std::move(complete));
    return true;
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
    g_guest_deadline_due = false;
    g_vblanks = 0;
    g_sub_interrupts.clear();
    g_vblank_next_us = kVblankPeriodUs;
    g_vblank_pending = false;
    g_vblank_in_flight = false;
    g_display_list_submissions = 0;
    g_framebuffer_sets = 0;
    g_ge_lists.clear();
    g_ge_callbacks.clear();
    g_pending_guest_calls.clear();
    g_ge_signal_callbacks = 0;
    g_ge_finish_callbacks = 0;
    g_next_ge_list_id = 0x10;
    ge_reset();
    g_modules.clear();
    g_next_module_uid = 0x400;
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
        // The fifth argument arrives in $t0. These imports are kernel
        // syscalls, whose arguments five through eight are read out of the
        // caller's registers $t0-$t3 rather than the o32 stack save area;
        // measured at this call site and two others in this title.
        const std::uint32_t partition = ctx.gpr[4];
        const std::string name = read_guest_string(rt, ctx.gpr[5]);
        const std::uint32_t type = ctx.gpr[6];
        const std::uint32_t size = ctx.gpr[7];
        const std::uint32_t requested_addr = ctx.gpr[8];

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
        if (type == 3u && requested_addr != 0u) {
            // The mask below only works for a power of two, so an alignment
            // that is not one is refused instead of quietly mis-rounded.
            if ((requested_addr & (requested_addr - 1u)) != 0u) {
                rt.stop("sceKernelAllocPartitionMemory alignment " +
                        psprecomp::hex32(requested_addr) + " is not a power of two (name=" + name +
                        ")");
                return;
            }
            alignment = std::max(0x100u, requested_addr);
        }
        // Rounded in 64 bits: `size` is the guest's, and near 4 GB the round
        // up wraps, which then makes address + size wrap back under the stack
        // top and pass a check it should fail.
        const std::uint64_t aligned_size = (static_cast<std::uint64_t>(size) + 0xFFull) & ~0xFFull;
        const std::uint32_t address =
            (g_partitions.next_address + alignment - 1u) & ~(alignment - 1u);
        if (aligned_size == 0u ||
            static_cast<std::uint64_t>(address) + aligned_size > g_threads.next_stack_top) {
            runtime_log_line("AllocPartitionMemory FAILED name=" + name +
                             " size=" + std::to_string(size) + " free=" +
                             std::to_string(g_threads.next_stack_top - g_partitions.next_address));
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        const auto block_size = static_cast<std::uint32_t>(aligned_size);
        g_partitions.next_address = address + block_size;
        rt.memory().zero(address, block_size);
        const std::int32_t uid = g_partitions.next_uid++;
        g_partitions.blocks.emplace(uid, PartitionBlock{name, address, block_size});
        runtime_log_line("AllocPartitionMemory partition=" + std::to_string(partition) +
                         " name=" + name + " type=" + std::to_string(type) +
                         " size=" + std::to_string(size) + " -> uid=" + std::to_string(uid) +
                         " addr=" + psprecomp::hex32(address) + " end=" +
                         psprecomp::hex32(address + block_size) + " free_after=" +
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
            wake_joiners(g_threads.current_uid);
        }
        if (!activate_next_thread(rt, ctx, "exit-thread")) rt.stop("all PSP threads have exited");
    };
    runtime.register_hle("ThreadManForUser", 0xAA73C935u, exit_thread);  // ExitThread
    runtime.register_hle("ThreadManForUser", 0x809CE29Bu, exit_thread);  // ExitDeleteThread
    const auto terminate_thread = [](Runtime &rt, AllegrexContext &ctx) {
        const auto uid = static_cast<std::int32_t>(ctx.gpr[4]);
        ThreadRecord *thread = thread_at(uid);
        if (thread == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        thread->state = ThreadState::Completed;
        thread->wait_has_deadline = false;
        // It is no longer waiting for anything, and anything waiting for it is
        // now free. Leaving its entries behind has a later signal pay out to a
        // thread that is never going to collect.
        remove_from_wait_queues(uid);
        wake_joiners(uid);
        if (uid == g_threads.current_uid) {
            // A thread that terminates itself has nowhere to return to;
            // carrying on would keep executing inside one marked Completed.
            if (!activate_next_thread(rt, ctx, "terminate-self"))
                rt.stop("all PSP threads have exited");
            return;
        }
        set_success(ctx);
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
        (void)block_on_object(rt, ctx, ctx.gpr[5], "wait-thread-end");   // $a1 is the timeout
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
        const auto it = g_semaphores.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it != g_semaphores.end()) {
            std::vector<std::int32_t> waiting;
            for (const SemaphoreWaiter &waiter : it->second.waiters)
                waiting.push_back(waiter.thread_uid);
            g_semaphores.erase(it);
            release_deleted_object_waiters(waiting);
        }
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x3F53E640u, [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_semaphores.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_semaphores.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        it->second.count += static_cast<std::int32_t>(ctx.gpr[5]);
        // Release waiters in FIFO order while the count covers them.
        auto &waiters = it->second.waiters;
        while (!waiters.empty()) {
            ThreadRecord *thread = thread_at(waiters.front().thread_uid);
            // A waiter that has since exited is dropped rather than paid.
            // Taking the count for a thread that will never wake spends those
            // units permanently, and the semaphore never recovers them.
            if (thread == nullptr || thread->state == ThreadState::Completed) {
                waiters.erase(waiters.begin());
                continue;
            }
            if (it->second.count < waiters.front().requested) break;
            it->second.count -= waiters.front().requested;
            complete_wait(*thread);
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
        (void)block_on_object(rt, ctx, ctx.gpr[6], "sema");   // $a2 is the timeout
    };
    runtime.register_hle("ThreadManForUser", 0x4E3A1105u, wait_sema);
    runtime.register_hle("ThreadManForUser", 0x6D212BACu, wait_sema);
    runtime.register_hle("ThreadManForUser", 0x58B1F937u, [](Runtime &, AllegrexContext &ctx) {
        const auto it = g_semaphores.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_semaphores.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        const std::int32_t requested = static_cast<std::int32_t>(ctx.gpr[5]);
        if (it->second.count < requested) {
            set_return(ctx, kErrorSemaZero);
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
        const auto it = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it != g_event_flags.end()) {
            std::vector<std::int32_t> waiting;
            for (const EventFlagWaiter &waiter : it->second.waiters)
                waiting.push_back(waiter.thread_uid);
            g_event_flags.erase(it);
            release_deleted_object_waiters(waiting);
        }
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0x1FB15A32u,
        [event_flag_matches, consume_event_flag](Runtime &rt, AllegrexContext &ctx) {
            const auto it = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == g_event_flags.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            it->second.pattern |= ctx.gpr[5];
            auto &waiters = it->second.waiters;
            for (auto waiter = waiters.begin(); waiter != waiters.end();) {
                ThreadRecord *thread = thread_at(waiter->thread_uid);
                // Drop a waiter that has exited without letting it consume the
                // pattern, which would clear bits nobody is there to receive.
                if (thread == nullptr || thread->state == ThreadState::Completed) {
                    waiter = waiters.erase(waiter);
                    continue;
                }
                if (!event_flag_matches(it->second, waiter->pattern, waiter->mode)) {
                    ++waiter;
                    continue;
                }
                if (waiter->result_ptr != 0u)
                    rt.memory().store32(waiter->result_ptr, it->second.pattern);
                consume_event_flag(it->second, waiter->pattern, waiter->mode);
                complete_wait(*thread);
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
            (void)block_on_object(rt, ctx, ctx.gpr[8], "event-flag");   // $t0 is the timeout
        };
    runtime.register_hle("ThreadManForUser", 0x402FCF22u, wait_event_flag);
    runtime.register_hle("ThreadManForUser", 0x30FD48F0u,
        [event_flag_matches, consume_event_flag](Runtime &rt, AllegrexContext &ctx) {
            const auto it = g_event_flags.find(static_cast<std::int32_t>(ctx.gpr[4]));
            if (it == g_event_flags.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            const std::uint32_t pattern = ctx.gpr[5];
            const std::uint32_t mode = ctx.gpr[6];
            if (!event_flag_matches(it->second, pattern, mode)) {
                set_return(ctx, kErrorEvfCond);
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
        const auto it = g_mailboxes.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it != g_mailboxes.end()) {
            std::vector<std::int32_t> waiting;
            for (const MbxWaiter &waiter : it->second.waiters) waiting.push_back(waiter.thread_uid);
            g_mailboxes.erase(it);
            release_deleted_object_waiters(waiting);
        }
        set_success(ctx);
    });
    runtime.register_hle("ThreadManForUser", 0xE9B3061Eu, [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_mailboxes.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_mailboxes.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        const std::uint32_t message = ctx.gpr[5];
        // Skip past any waiter that has exited. Delivering into a dead thread's
        // buffer and calling it sent loses the message outright, where queuing
        // it leaves it for whoever receives next.
        bool delivered = false;
        while (!it->second.waiters.empty()) {
            const MbxWaiter waiter = it->second.waiters.front();
            it->second.waiters.erase(it->second.waiters.begin());
            ThreadRecord *thread = thread_at(waiter.thread_uid);
            if (thread == nullptr || thread->state == ThreadState::Completed) continue;
            if (waiter.message_out != 0u) rt.memory().store32(waiter.message_out, message);
            complete_wait(*thread);
            delivered = true;
            break;
        }
        if (!delivered) it->second.messages.push_back(MbxMessage{message});
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
        (void)block_on_object(rt, ctx, ctx.gpr[6], "mbx");   // $a2 is the timeout
    };
    runtime.register_hle("ThreadManForUser", 0x18260574u, receive_mbx);
    runtime.register_hle("ThreadManForUser", 0xF3986382u, receive_mbx);
    runtime.register_hle("ThreadManForUser", 0x0D81716Au, [](Runtime &rt, AllegrexContext &ctx) {
        const auto it = g_mailboxes.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_mailboxes.end() || it->second.messages.empty()) {
            set_return(ctx, kErrorMboxNoMsg);
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
        advance_virtual_time_by(25u);
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
    runtime.register_hle("sceDisplay", 0x289D82FEu, [](Runtime &rt, AllegrexContext &ctx) {
        g_display_framebuffer = ctx.gpr[4];
        g_display_stride = ctx.gpr[5];
        g_display_format = ctx.gpr[6];
        ++g_framebuffer_sets;
        note_frame_flip();
        // The flip is the moment a buffer becomes the one being shown, so it is
        // where the window takes it. The rasteriser works on a host copy, so
        // that has to be pushed back into guest memory first - otherwise the
        // window presents whatever was in the buffer before this frame.
        if (window_enabled()) {
            flush_surface(rt);
            window_present(rt.memory(), g_display_framebuffer, g_display_stride, g_display_format,
                           kDisplayWidth, kDisplayHeight);
        }
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
        // Closing the window ends the run. This is the per-frame heartbeat,
        // so it notices even when the title has stopped flipping buffers.
        if (window_close_requested()) rt.stop("the window was closed");
        // Delaying to the next boundary is the whole frame pacing model until a
        // real presenter exists. The count itself belongs to the clock, which
        // runs whether or not anybody waits here.
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
    runtime.register_hle("sceGe_user", 0xA4FC06A4u, [](Runtime &rt, AllegrexContext &ctx) {
        // sceGeSetCallback(PspGeCallbackData *). Record the handlers now; the
        // list interpreter says when they are due.
        const std::int32_t id = allocate_kernel_uid();
        GeCallbackRecord record;
        const std::uint32_t data = ctx.gpr[4];
        if (data != 0u && rt.memory().contains(data, 16u)) {
            record.signal_function = rt.memory().load32(data);
            record.signal_argument = rt.memory().load32(data + 4u);
            record.finish_function = rt.memory().load32(data + 8u);
            record.finish_argument = rt.memory().load32(data + 12u);
        }
        g_ge_callbacks[id] = record;
        runtime_log_line("ge: callback " + std::to_string(id) + " signal=" +
                         psprecomp::hex32(record.signal_function) + " finish=" +
                         psprecomp::hex32(record.finish_function));
        set_return(ctx, static_cast<std::uint32_t>(id));
    });
    runtime.register_hle("sceGe_user", 0x05DB22CEu, [](Runtime &, AllegrexContext &ctx) {
        g_ge_callbacks.erase(static_cast<std::int32_t>(ctx.gpr[4]));
        set_success(ctx);
    });
    runtime.register_hle("sceGe_user", 0xAB49E76Au, [](Runtime &rt, AllegrexContext &ctx) {
        // (list, stall, callbackId, argument). Interpret up to the stall point;
        // ge_execute_list returns where it stopped so a stall update resumes.
        const std::int32_t id = g_next_ge_list_id++;
        const auto callback_id = static_cast<std::int32_t>(ctx.gpr[6]);
        GeListState state;
        state.resume = ctx.gpr[4];
        const GeExecution execution = ge_execute_list(rt, state, ctx.gpr[5]);
        g_ge_lists[id] = GeListRecord{state, callback_id};
        ++g_display_list_submissions;
        queue_ge_callbacks(execution, callback_id);
        (void)deliver_pending_guest_calls(ctx, static_cast<std::uint32_t>(id));
    });
    runtime.register_hle("sceGe_user", 0xE0D68148u, [](Runtime &rt, AllegrexContext &ctx) {
        // The guest moved the stall forward, so more of the list is now ours.
        const auto it = g_ge_lists.find(static_cast<std::int32_t>(ctx.gpr[4]));
        if (it == g_ge_lists.end()) {
            set_success(ctx);
            return;
        }
        // The state carries the call stack, so a list stalled inside a
        // subroutine resumes inside it.
        const GeExecution execution = ge_execute_list(rt, it->second.state, ctx.gpr[5]);
        queue_ge_callbacks(execution, it->second.callback_id);
        (void)deliver_pending_guest_calls(ctx, 0u);
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
        // Headless has no input device. PSPRECOMP_DEFJAM_HOLD_BUTTONS reports a
        // fixed button mask instead of nothing, which is how you tell a title
        // that is genuinely stuck apart from one simply waiting to be pressed.
        static const std::uint32_t held = [] {
            const char *text = std::getenv("PSPRECOMP_DEFJAM_HOLD_BUTTONS");
            if (text == nullptr || *text == '\0') return 0u;
            return static_cast<std::uint32_t>(std::strtoul(text, nullptr, 0));
        }();

        // A title that edge-detects its input never sees a button that was
        // already down when it booted. PSPRECOMP_DEFJAM_PULSE_BUTTONS presses
        // and releases the mask on a half-second cycle instead, which is what
        // a person does, and starts released so the boot sees nothing held.
        static const std::uint32_t pulsed = [] {
            const char *text = std::getenv("PSPRECOMP_DEFJAM_PULSE_BUTTONS");
            if (text == nullptr || *text == '\0') return 0u;
            return static_cast<std::uint32_t>(std::strtoul(text, nullptr, 0));
        }();
        // A timeline says what is pressed and when, which a mask held forever
        // cannot: pulsing Cross gets past a confirmation and then keeps
        // pressing it through whatever menu comes next.
        // PSPRECOMP_DEFJAM_INPUT="2000:0x4000,2100:0,9000:0x8,9100:0" reads as
        // guest milliseconds and the mask to hold from then on.
        static const std::vector<std::pair<std::uint64_t, std::uint32_t>> timeline = [] {
            std::vector<std::pair<std::uint64_t, std::uint32_t>> entries;
            const char *text = std::getenv("PSPRECOMP_DEFJAM_INPUT");
            if (text == nullptr || *text == 0) return entries;
            const std::string script(text);
            std::size_t cursor = 0u;
            while (cursor < script.size()) {
                const std::size_t comma = script.find(',', cursor);
                const std::string item = script.substr(
                    cursor, comma == std::string::npos ? std::string::npos : comma - cursor);
                const std::size_t colon = item.find(':');
                if (colon != std::string::npos) {
                    entries.emplace_back(
                        std::strtoull(item.substr(0, colon).c_str(), nullptr, 0) * 1000u,
                        static_cast<std::uint32_t>(
                            std::strtoul(item.substr(colon + 1).c_str(), nullptr, 0)));
                }
                if (comma == std::string::npos) break;
                cursor = comma + 1u;
            }
            std::sort(entries.begin(), entries.end());
            return entries;
        }();
        std::uint32_t scripted = 0u;
        for (const auto &entry : timeline) {
            if (g_virtual_time_us < entry.first) break;
            scripted = entry.second;
        }

        constexpr std::uint64_t kPulseHalfUs = 250000u;
        const bool pulse_down = (g_virtual_time_us / kPulseHalfUs) % 2u == 1u;
        // A real key press is ORed onto the scripted masks rather than
        // replacing them, so the measurement runs this profile was built with
        // keep behaving identically with a window open.
        std::uint8_t analog_x = 128u;
        std::uint8_t analog_y = 128u;
        window_analog(analog_x, analog_y);
        const std::uint32_t buttons =
            held | scripted | (pulse_down ? pulsed : 0u) | window_buttons();

        // This is the blocking read. Controller data is sampled once per
        // cycle: the first read in a cycle takes the sample already waiting and
        // returns, and only a second read inside the same cycle waits for the
        // next one. The non-blocking form is sceCtrlPeekBufferPositive.
        //
        // Never blocking turns a loop that should be paced at the sample rate
        // into one that spins as fast as the host allows, starving every
        // lower-priority thread - a title whose movie player runs below the
        // main loop then never advances. But always blocking is wrong in the
        // other direction: it charges a caller that has just spent most of a
        // frame rendering for a sample it has not yet taken, so a loop doing a
        // frame of work per iteration runs at half the rate it should.
        constexpr std::uint64_t kSamplePeriodUs = 16683u;
        const std::uint64_t cycle = g_virtual_time_us / kSamplePeriodUs;
        ThreadRecord *reader = current_thread();
        const bool already_read =
            reader != nullptr && reader->ctrl_sampled && reader->last_ctrl_cycle == cycle;
        const std::uint32_t wait =
            already_read
                ? static_cast<std::uint32_t>(kSamplePeriodUs - (g_virtual_time_us % kSamplePeriodUs))
                : 0u;

        // Whichever sample the caller ends up with is the one it is stamped
        // with: the current one when returning now, the next one when waiting.
        // Stamping a waited-for reading with the time of the call dates it a
        // cycle into the past, and a title deriving its frame interval from
        // consecutive readings measures the wrong one.
        const auto sample_time = static_cast<std::uint32_t>(g_virtual_time_us + wait);
        if (reader != nullptr) {
            reader->ctrl_sampled = true;
            reader->last_ctrl_cycle = already_read ? cycle + 1u : cycle;
        }

        const std::uint32_t buffer = ctx.gpr[4];
        const std::uint32_t count = std::max(1u, ctx.gpr[5]);
        for (std::uint32_t i = 0; i < count; ++i) {
            const std::uint32_t entry = buffer + i * 16u;
            rt.memory().store32(entry, sample_time);
            rt.memory().store32(entry + 4u, buttons);
            rt.memory().store8(entry + 8u, analog_x);
            rt.memory().store8(entry + 9u, analog_y);
        }

        if (!already_read) {
            set_return(ctx, count);
            return;
        }
        delay_current_thread(rt, ctx, wait, count);
    });

    // -----------------------------------------------------------------------
    // ModuleMgrForUser
    // -----------------------------------------------------------------------
    runtime.register_hle("ModuleMgrForUser", 0x977DE386u, [](Runtime &rt, AllegrexContext &ctx) {
        // (path, flags, option)
        const std::string path = read_guest_string(rt, ctx.gpr[4], 256u);
        std::error_code ec;
        bool present = false;
        try {
            present = std::filesystem::is_regular_file(rt.translate_path(path), ec);
        } catch (const std::exception &) {
            present = false;
        }
        if (!present) {
            runtime_log_line("sceKernelLoadModule MISSING " + path);
            set_return(ctx, static_cast<std::uint32_t>(-1));
            return;
        }
        const std::int32_t uid = g_next_module_uid++;
        g_modules[uid] = LoadedModule{path, false};
        runtime_log_line("sceKernelLoadModule " + path + " -> uid " + std::to_string(uid) +
                         " (satisfied by HLE, no code loaded)");
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ModuleMgrForUser", 0xB7F46618u, [](Runtime &, AllegrexContext &ctx) {
        // (fileid, flags, option) - the title opens the PRX first, so name the
        // module from the descriptor rather than reporting an anonymous load.
        const std::string path = io_path_for_fd(static_cast<std::int32_t>(ctx.gpr[4]));
        const std::int32_t uid = g_next_module_uid++;
        g_modules[uid] = LoadedModule{path.empty() ? "<by file id>" : path, false};
        runtime_log_line("sceKernelLoadModuleByID fd=" + std::to_string(ctx.gpr[4]) + " " +
                         g_modules[uid].path + " -> uid " + std::to_string(uid) +
                         " (satisfied by HLE, no code loaded)");
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ModuleMgrForUser", 0x50F0C1ECu, [](Runtime &rt, AllegrexContext &ctx) {
        // (modid, argsize, argp, status, option). Nothing runs, so the module's
        // start routine "returned" success; the guest reads that through status.
        const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
        const auto it = g_modules.find(uid);
        if (it == g_modules.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        it->second.started = true;
        if (ctx.gpr[7] != 0u) rt.memory().store32(ctx.gpr[7], 0u);
        runtime_log_line("sceKernelStartModule uid=" + std::to_string(uid) + " " + it->second.path);
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ModuleMgrForUser", 0xD1FF982Au, [](Runtime &rt, AllegrexContext &ctx) {
        const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
        const auto it = g_modules.find(uid);
        if (it == g_modules.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        it->second.started = false;
        if (ctx.gpr[7] != 0u) rt.memory().store32(ctx.gpr[7], 0u);
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ModuleMgrForUser", 0x2E0911AAu, [](Runtime &, AllegrexContext &ctx) {
        const std::int32_t uid = static_cast<std::int32_t>(ctx.gpr[4]);
        if (g_modules.erase(uid) == 0u) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        set_return(ctx, static_cast<std::uint32_t>(uid));
    });
    runtime.register_hle("ModuleMgrForUser", 0xD675EBB8u, [](Runtime &rt, AllegrexContext &ctx) {
        // A module stopping and unloading itself; only the main module can do
        // that here, and that means the title is shutting down.
        (void)ctx;
        rt.stop("guest called sceKernelSelfStopUnloadModule");
    });
    runtime.register_hle("ModuleMgrForUser", 0xF0A26395u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, static_cast<std::uint32_t>(kMainModuleId));
    });
    runtime.register_hle("ModuleMgrForUser", 0xD8B73127u, [](Runtime &, AllegrexContext &ctx) {
        // Only the main image is backed by real code here; a loaded system PRX
        // has no address range to own.
        const std::uint32_t address = ctx.gpr[4];
        if (address >= 0x08800000u && address < kUserMemoryEnd) {
            set_return(ctx, static_cast<std::uint32_t>(kMainModuleId));
            return;
        }
        set_return(ctx, static_cast<std::uint32_t>(-1));
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

        // One buffer may be in flight; a second has to wait for the first.
        if (slot.busy_until_us > g_virtual_time_us) {
            const std::uint64_t wait = slot.busy_until_us - g_virtual_time_us;
            // The non-blocking form refused this buffer, so nothing was queued
            // and nothing should be counted: a refusal that still bumps the
            // totals reads afterwards as audio that played.
            if (!blocking) { set_return(ctx, 0u); return; }
            slot.busy_until_us += duration;
            ++g_audio_buffers;
            g_audio_samples += samples;
            delay_current_thread(rt, ctx, static_cast<std::uint32_t>(wait), samples);
            return;
        }
        slot.busy_until_us = g_virtual_time_us + duration;
        ++g_audio_buffers;
        g_audio_samples += samples;
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
    // sceSasCore
    // -----------------------------------------------------------------------
    // Every entry takes the SAS core handle in a0; this profile models a single
    // core, so the handle is validated for shape but not used as a key.
    const auto sas_voice = [](AllegrexContext &ctx) -> SasVoice * {
        const std::uint32_t index = ctx.gpr[5];
        if (index >= kSasVoices) return nullptr;
        return &g_sas.voices[index];
    };

    runtime.register_hle("sceSasCore", 0x42778A9Fu, [](Runtime &rt, AllegrexContext &ctx) {
        // (core, grain, maxVoices, outputMode, sampleRate)
        g_sas = SasCore{};
        g_sas.initialised = true;
        g_sas.grain = std::max(1u, ctx.gpr[5]);
        g_sas.max_voices = std::min(kSasVoices, std::max(1u, ctx.gpr[6]));
        g_sas.output_mode = ctx.gpr[7];
        // The sample-rate argument is deliberately not read. Reading sp+16
        // returned an implausible value on this title, so the slot is not
        // confirmed, and nothing here depends on the rate. Recording a
        // fabricated one would only make the log look authoritative.
        (void)rt;
        runtime_log_line("__sceSasInit grain=" + std::to_string(g_sas.grain) +
                         " voices=" + std::to_string(g_sas.max_voices) +
                         " outputMode=" + std::to_string(g_sas.output_mode));
        set_success(ctx);
    });

    runtime.register_hle("sceSasCore", 0x99944089u,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            // (core, voice, vagAddr, size, loopMode)
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->vag_address = ctx.gpr[6];
            voice->vag_size = ctx.gpr[7];
            voice->loop_mode = ctx.gpr[8];   // $t0
            voice->total_samples = sas_voice_length_samples(voice->vag_size);
            voice->samples_played = 0u;
            voice->noise = false;
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0xB7660A23u,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->noise = true;
            voice->total_samples = 0u;   // noise runs until keyed off
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0xAD84D37Fu,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->pitch = ctx.gpr[6];
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0x440CA7D8u,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->left_volume = ctx.gpr[6];
            voice->right_volume = ctx.gpr[7];
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0x019B25EBu,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            // (core, voice, flags, attack, decay, sustain, release)
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            // Arguments five and up arrive in $t0-$t3, as they do everywhere
            // else this title calls a five-argument import: at both call sites
            // the caller loads those registers and writes nothing to the o32
            // save area, so reading sp+16 gave back whatever was there.
            voice->attack = ctx.gpr[7];
            voice->decay = ctx.gpr[8];
            voice->sustain = ctx.gpr[9];
            voice->release = ctx.gpr[10];
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0x9EC3676Au,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->adsr_mode = ctx.gpr[6];
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0xCBCD4F79u,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->adsr_mode = ctx.gpr[6];
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0x5F9529F6u,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->sustain_level = ctx.gpr[6];
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0x76F01ACAu,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            voice->playing = true;
            voice->paused = false;
            voice->samples_played = 0u;
            ++g_sas_key_ons;
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0xA0CF2FA4u,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            // Release is not modelled, so the voice retires at key-off.
            voice->playing = false;
            set_success(ctx);
        });
    runtime.register_hle("sceSasCore", 0x787D04D5u, [](Runtime &, AllegrexContext &ctx) {
        // (core, voiceBitmask, pause)
        const std::uint32_t mask = ctx.gpr[5];
        const bool pause = ctx.gpr[6] != 0u;
        for (std::uint32_t i = 0; i < kSasVoices; ++i)
            if ((mask >> i) & 1u) g_sas.voices[i].paused = pause;
        set_success(ctx);
    });
    runtime.register_hle("sceSasCore", 0x2C8E6AB3u, [](Runtime &, AllegrexContext &ctx) {
        std::uint32_t mask = 0u;
        for (std::uint32_t i = 0; i < kSasVoices; ++i)
            if (g_sas.voices[i].paused) mask |= 1u << i;
        set_return(ctx, mask);
    });
    runtime.register_hle("sceSasCore", 0x68A46B95u, [](Runtime &, AllegrexContext &ctx) {
        // A set bit means the voice has ended, so an idle core reports all ones.
        std::uint32_t mask = 0u;
        for (std::uint32_t i = 0; i < kSasVoices; ++i)
            if (!g_sas.voices[i].playing) mask |= 1u << i;
        set_return(ctx, mask);
    });
    runtime.register_hle("sceSasCore", 0x74AE582Au,
        [sas_voice](Runtime &, AllegrexContext &ctx) {
            const SasVoice *voice = sas_voice(ctx);
            if (voice == nullptr) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
            // Full scale while sounding; the envelope shape itself is not
            // modelled, so a playing voice reports maximum rather than a curve
            // that would look authoritative and be wrong.
            set_return(ctx, voice->playing ? 0x40000000u : 0u);
        });

    runtime.register_hle("sceSasCore", 0xA3589D81u, [](Runtime &rt, AllegrexContext &ctx) {
        // (core, out) - SAS writes the mix, so the buffer is cleared.
        const std::uint32_t out = ctx.gpr[5];
        if (out != 0u) rt.memory().zero(out, static_cast<std::size_t>(g_sas.grain) * 4u);
        sas_advance(g_sas.grain);
        ++g_sas_core_calls;
        set_success(ctx);
    });
    runtime.register_hle("sceSasCore", 0x50A14DFCu, [](Runtime &, AllegrexContext &ctx) {
        // (core, out, leftVol, rightVol) - mixes into an existing buffer, so
        // silence means leaving the caller's contents untouched.
        sas_advance(g_sas.grain);
        ++g_sas_core_calls;
        set_success(ctx);
    });

    runtime.register_hle("sceSasCore", 0x33D4AB37u, [](Runtime &, AllegrexContext &ctx) {
        g_sas.reverb_type = ctx.gpr[5];
        set_success(ctx);
    });
    runtime.register_hle("sceSasCore", 0xD5A229C9u, [](Runtime &, AllegrexContext &ctx) {
        g_sas.reverb_left = ctx.gpr[5];
        g_sas.reverb_right = ctx.gpr[6];
        set_success(ctx);
    });
    runtime.register_hle("sceSasCore", 0xF983B186u, [](Runtime &, AllegrexContext &ctx) {
        g_sas.reverb_voices = ctx.gpr[5];
        set_success(ctx);
    });
    runtime.register_hle("sceSasCore", 0x267A6DD2u, [](Runtime &, AllegrexContext &ctx) {
        set_success(ctx);
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
        // Returns the state the caller is expected to hand back to
        // sceKernelCpuResumeIntr, so nesting restores rather than unmasks.
        ThreadRecord *thread = current_thread();
        const std::uint32_t previous = (thread == nullptr || !thread->interrupts_masked) ? 1u : 0u;
        if (thread != nullptr) thread->interrupts_masked = true;
        set_return(ctx, previous);
    });
    runtime.register_hle("Kernel_Library", 0x5F10D406u, [](Runtime &, AllegrexContext &ctx) {
        ThreadRecord *thread = current_thread();
        if (thread != nullptr) thread->interrupts_masked = ctx.gpr[4] == 0u;
        set_success(ctx);
    });
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
            // Both ends are checked before the staging buffer is sized: the
            // length is the guest's, and copy_out would only discover a bad
            // range after an allocation that large had already been asked for.
            if (!rt.memory().contains(ctx.gpr[5], length) ||
                !rt.memory().contains(ctx.gpr[4], length)) {
                runtime_log_line("sceDmacMemcpy: " + std::to_string(length) + " bytes from " +
                                 psprecomp::hex32(ctx.gpr[5]) + " to " +
                                 psprecomp::hex32(ctx.gpr[4]) + " is not guest memory");
                set_return(ctx, static_cast<std::uint32_t>(-1));
                return;
            }
            std::vector<std::uint8_t> buffer(length);
            rt.memory().copy_out(ctx.gpr[5], buffer);
            rt.memory().copy_in(ctx.gpr[4], buffer);
        }
        set_success(ctx);
    });
    // (interrupt, sub interrupt, handler, argument). Recording these is what
    // lets the vblank reach the guest; answering a bare success leaves the
    // title's movie player waiting on an event flag nobody ever sets.
    runtime.register_hle("InterruptManager", 0xCA04A2B9u, [](Runtime &, AllegrexContext &ctx) {
        SubInterruptHandler &handler = g_sub_interrupts[sub_interrupt_key(ctx.gpr[4], ctx.gpr[5])];
        handler.function = ctx.gpr[6];
        handler.argument = ctx.gpr[7];
        set_success(ctx);
    });
    runtime.register_hle("InterruptManager", 0xD61E6961u, [](Runtime &, AllegrexContext &ctx) {
        g_sub_interrupts.erase(sub_interrupt_key(ctx.gpr[4], ctx.gpr[5]));
        set_success(ctx);
    });
    runtime.register_hle("InterruptManager", 0xFB8E22ECu, [](Runtime &, AllegrexContext &ctx) {
        const auto it = g_sub_interrupts.find(sub_interrupt_key(ctx.gpr[4], ctx.gpr[5]));
        if (it == g_sub_interrupts.end()) { set_return(ctx, static_cast<std::uint32_t>(-1)); return; }
        it->second.enabled = true;
        set_success(ctx);
    });

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
    // sceUmdWaitDriveStat(stat) blocks until the drive reaches `stat`. Report
    // the request the first few times so the state the title actually wants is
    // measured rather than inferred from the value we happen to hand back.
    const auto umd_wait_drive_stat = [](Runtime &, AllegrexContext &ctx) {
        static std::uint32_t reported = 0u;
        if (reported < 4u) {
            ++reported;
            runtime_log_line("sceUmdWaitDriveStat wants=" + psprecomp::hex32(ctx.gpr[4]) +
                             " reporting=" + psprecomp::hex32(0x32u));
        }
        set_success(ctx);
    };
    runtime.register_hle("sceUmdUser", 0x8EF08FCEu, umd_wait_drive_stat);
    runtime.register_hle("sceUmdUser", 0x4A9E5E29u, umd_wait_drive_stat);
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

    install_io_hle(runtime);
    install_utility_hle(runtime, resolve_savedata_root(runtime.game_root().string()));
    install_mpeg_hle(runtime);
    install_atrac_hle(runtime);
    install_net_hle(runtime);

    runtime_log_line("install_profile: HLE registered");
}

void report_headless_stats() {
    const HeadlessStats stats = headless_stats();
    runtime_log_line("vblanks=" + std::to_string(stats.vblanks) +
                     " ge_submissions=" + std::to_string(stats.display_list_submissions) +
                     " framebuffer_sets=" + std::to_string(stats.frame_buffer_sets) +
                     " thread_switches=" + std::to_string(stats.thread_switches) +
                     " live_threads=" + std::to_string(stats.live_threads) +
                     " ge_signal_callbacks=" + std::to_string(g_ge_signal_callbacks) +
                     " ge_finish_callbacks=" + std::to_string(g_ge_finish_callbacks) +
                     " virtual_time_us=" + std::to_string(stats.virtual_time_us));
}

std::string thread_report() {
    static const char *names[] = {"created", "ready",   "running",
                                  "sleeping", "waiting", "delayed", "done"};
    std::ostringstream out;
    for (const auto &[uid, thread] : g_threads.threads) {
        if (thread.state == ThreadState::Completed) continue;
        out << "  thread " << uid << " " << thread.name << " prio " << thread.priority << " "
            << names[static_cast<int>(thread.state)];
        if (!thread.blocked_on.empty()) out << " on " << thread.blocked_on;
        if (thread.state == ThreadState::Delayed)
            out << " until " << thread.delay_until_us << "us";
        out << " pc=" << psprecomp::hex32(thread.suspended.pc) << "\n";
    }
    return out.str();
}

} // namespace defjam

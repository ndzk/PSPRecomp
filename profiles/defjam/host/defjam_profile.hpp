#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <functional>
#include <string>

namespace defjam {

// Installs the title's HLE surface, guest trampolines and initial thread.
//
// Must be called AFTER psprecomp::register_generated_functions(). Runtime's
// register_function poisons the containing generated unit so cross-unit
// chaining can never inline over a host override; installing first would be
// silently undone by the corpus registration that follows.
//
// `user_arena_start` is the 256-byte-aligned end of the relocated image; the
// guest heap grows up from there while thread stacks grow down from the top of
// user memory.
void install_profile(psprecomp::Runtime &runtime, std::uint32_t user_arena_start);

// Turns a guest function's return value into what the interrupted host caller
// reports in v0.
using GuestCallCompletion =
    std::function<std::uint32_t(psprecomp::Runtime &, std::uint32_t returned)>;

// Runs a guest function on the running thread and comes back here afterwards.
//
// The thread is redirected into `function` with $ra pointing at the interrupt
// trampoline, exactly as hardware delivers a callback, and the caller's context
// is stacked so the trampoline can restore it. `complete` receives what the
// guest returned and produces the value the interrupted caller sees; pass
// nullptr when nothing is expected back.
//
// Returns false if there is no running thread. On success the HLE that called
// this must return immediately without touching ctx: execution now belongs to
// the guest function.
bool call_guest_function(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx,
                         std::uint32_t function, std::uint32_t arg0, std::uint32_t arg1,
                         std::uint32_t arg2, GuestCallCompletion complete);

// Execution-driven virtual time and preemption. On hardware the clock advances
// with executed cycles and the kernel preempts from a timer interrupt; a purely
// cooperative runtime deadlocks against a guest busy-wait that never enters the
// kernel. Call after install_profile, before Runtime::run.
void install_starvation_preemption();

// Headless frame accounting, so a run can be judged without a renderer.
struct HeadlessStats {
    std::uint64_t vblanks{};
    std::uint64_t display_list_submissions{};
    std::uint64_t frame_buffer_sets{};
    std::uint64_t thread_switches{};
    std::uint64_t audio_buffers{};
    std::uint64_t audio_samples{};
    std::uint64_t virtual_time_us{};
    std::uint32_t live_threads{};
};
[[nodiscard]] HeadlessStats headless_stats();
void report_headless_stats();

// Every thread that has not exited, with what it is waiting on. A stall reads
// as a set of waits, not as a set of program counters.
[[nodiscard]] std::string thread_report();

// How often PSPRECOMP_DEFJAM_WATCH_WINDOW's function was entered. Sampled log
// lines only show every Nth entry, and a count is the whole point when the
// question is whether something runs at all.
[[nodiscard]] std::string watch_window_report();

// Records the last N outer-dispatch guest PCs in a ring buffer so a fault can
// be read as a control-flow trail instead of inferred from a register snapshot.
//
// The hook fires only on outer dispatches, never inside a chained call, so with
// PSPRECOMP_NO_CHAIN=1 (every transfer through the dispatcher) this is close to
// instruction granularity; without it, it is unit-entry granularity.
//
// Off unless PSPRECOMP_DEFJAM_TRACE is set, since it costs a call per dispatch.
// The value, if numeric and non-zero, sets the ring size (default 256).
void install_dispatch_trace();

// Reports when a watched guest word changes, naming the unit and thread that
// changed it. Set PSPRECOMP_DEFJAM_WATCH to a comma-separated list of
// addresses. Answers "who writes this?" without disassembling every writer.
// Stops the run when the guest goes quiet, and optionally reports progress
// while it has not. PSPRECOMP_DEFJAM_STALL_SECONDS and
// PSPRECOMP_DEFJAM_HEARTBEAT_SECONDS; both off by default.
void install_progress_watchdog();

// What the watchdog was asked for, and the three questions the implementation
// asks about it.
//
// These are free functions over an explicit settings value rather than reads of
// the running configuration, so the answers can be held against each other
// without a guest. That is the point: the watchdog is serviced by two separate
// paths, one sampled against the wall clock and one checked where guest time
// moves, and every setting that arms it has to be picked up by one of them.
// When the arming condition and the sampled condition were written out
// separately they drifted apart, and a run asked for a guest time budget alone
// logged that the watchdog was armed and then never checked it.
struct WatchdogSettings {
    std::uint64_t stall_seconds{};
    std::uint64_t heartbeat_seconds{};
    std::uint64_t stop_at_guest_us{};
    std::uint64_t frame_dump_interval_us{};
};

// Whether anything was asked for at all, and so whether the dispatch hook is
// installed.
[[nodiscard]] bool watchdog_armed(const WatchdogSettings &settings);

// Whether the sampled path has work: the two intervals measured in wall time.
[[nodiscard]] bool watchdog_needs_wall_clock_sampling(const WatchdogSettings &settings);

// Whether guest time has reached something waiting for it. Checked wherever the
// virtual clock moves, which costs two integer compares and no clock read.
[[nodiscard]] bool watchdog_guest_deadline_due(const WatchdogSettings &settings,
                                               std::uint64_t guest_time_us,
                                               std::uint64_t next_frame_dump_us);

void install_memory_watch();

// Reports the argument registers each time one of the named guest addresses is
// dispatched. PSPRECOMP_DEFJAM_TRAP=0xADDR[,0xADDR...]
//
// Pair it with PSPRECOMP_NO_CHAIN=1 unless the target is known to be reached by
// an ordinary dispatch: a chained call never reaches the hook.
void install_dispatch_traps();
void dump_dispatch_trace(std::size_t limit = 64u);
[[nodiscard]] bool dispatch_trace_enabled();

void runtime_log_initialize(const std::string &path);
// The guest clock, for diagnostics that only want a later part of a run.
[[nodiscard]] std::uint64_t guest_time_us();

// The buffer the title last handed to the display.
[[nodiscard]] std::uint32_t displayed_framebuffer();

void runtime_log_line(const std::string &line);
bool dump_guest_range(psprecomp::Runtime &rt, std::string &description);
void runtime_log_shutdown();

} // namespace defjam

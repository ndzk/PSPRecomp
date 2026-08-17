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
void dump_dispatch_trace(std::size_t limit = 64u);
[[nodiscard]] bool dispatch_trace_enabled();

void runtime_log_initialize(const std::string &path);
void runtime_log_line(const std::string &line);
void runtime_log_shutdown();

} // namespace defjam

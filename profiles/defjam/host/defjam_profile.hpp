#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
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
    std::uint64_t virtual_time_us{};
    std::uint32_t live_threads{};
};
[[nodiscard]] HeadlessStats headless_stats();
void report_headless_stats();

void runtime_log_initialize(const std::string &path);
void runtime_log_line(const std::string &line);
void runtime_log_shutdown();

} // namespace defjam

#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>

namespace vcs {

// Address-specific dispatch diagnostics for this title.
//
// These used to live inside Runtime::run, which put around forty guest
// addresses belonging to one game into the reusable core - the thing
// docs/SOURCE_PROVENANCE.md says the core does not accept. They observe the
// same dispatch boundaries through the hooks the framework already offers, so
// nothing about what they see changed; only where they live did.
//
// Every one is off unless its environment variable is set:
//   PSPRECOMP_HEAP_DIAG                       heap manager state at a callback
//   PSPRECOMP_REQUEST_ALLOC_DIAG              streaming request allocation
//   PSPRECOMP_WORLD_STREAM_DIAG               world streaming manager
//   PSPRECOMP_WORLD_STREAM_MANAGER            its address, when not the default
//   PSPRECOMP_WORLD_STREAM_STOP_AT_CALLBACK   stop once the callback is reached
//   PSPRECOMP_FILE_OBJECT_DIAG                file object handling
//   PSPRECOMP_FILE_OBJECT_STOP_ON_NULL        stop before a null seek

// Reads the environment. Returns true when any of them asked to be on, which
// is what decides whether the hooks are worth installing at all.
bool install_vcs_diagnostics();

// True once install_vcs_diagnostics() found something enabled.
[[nodiscard]] bool vcs_diagnostics_enabled();

// Both run at an outer dispatch boundary, before and after the unit runs.
void vcs_diagnostics_pre_dispatch(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                                  std::uint32_t dispatch_pc, std::int32_t dispatch_thread_uid);
void vcs_diagnostics_post_dispatch(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx,
                                   std::uint32_t dispatch_pc, std::int32_t dispatch_thread_uid);

} // namespace vcs

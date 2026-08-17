#pragma once

#include "psprecomp/runtime.hpp"

#include <array>
#include <cstdint>
#include <string>

namespace defjam {

// PSP GE display-list interpretation.
//
// This is the front half of the renderer: it walks the guest's command stream,
// maintains the 256-entry GE register file and resolves control flow, so a
// backend has something concrete to draw. Nothing is rasterised here yet.
//
// A GE command word is (command << 24) | 24 bits of data.

struct GeStats {
    std::uint64_t lists_executed{};
    std::uint64_t commands{};
    std::uint64_t draws{};             // PRIM commands
    std::uint64_t vertices{};          // vertices those PRIMs asked for
    std::uint64_t jumps{}, calls{}, returns{}, signals{}, finishes{};
    std::uint64_t unknown_commands{};
    std::uint64_t truncated_lists{};   // hit the walk limit
    // Per-primitive-type counts, indexed by the PSP primitive code.
    std::array<std::uint64_t, 8> primitives{};
    // Distinct render targets the guest pointed the GE at.
    std::uint64_t framebuffer_changes{};
    std::uint32_t last_framebuffer{};
    std::uint32_t last_vertex_type{};
};

// Runs a list from `start` up to `stall` (0 meaning "to the end"). Returns the
// address execution stopped at, so a later stall update can resume.
std::uint32_t ge_execute_list(psprecomp::Runtime &runtime, std::uint32_t start,
                              std::uint32_t stall);

void ge_reset();
[[nodiscard]] GeStats ge_stats();
[[nodiscard]] std::string ge_report();

// The latched GE register file, for a backend to read draw state from.
[[nodiscard]] const std::array<std::uint32_t, 256> &ge_registers();

} // namespace defjam

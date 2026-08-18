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

// The GE's own call stack depth.
constexpr std::uint32_t kGeCallStackDepth = 32u;

// A list's execution state, which outlives any one call into the interpreter.
//
// The guest stalls a list part-way through and moves the stall address on as
// it produces more work, so interpretation resumes mid-list - and it may be
// mid-subroutine. Rebuilding the call stack empty on each resume leaves the
// matching RET with nowhere to return to, and execution falls through it into
// whatever follows the subroutine.
struct GeListState {
    std::uint32_t resume{};
    std::array<std::uint32_t, kGeCallStackDepth> call_stack{};
    std::uint32_t call_depth{};
};

struct GeExecution {
    // Where execution stopped, so a later stall update resumes from here.
    std::uint32_t resume_address{};
    // The list reached FINISH, which on hardware raises the finish callback.
    bool finished{};
    std::uint32_t finish_argument{};
    // The list raised SIGNAL, carrying the command's 24-bit payload.
    bool signalled{};
    std::uint32_t signal_argument{};
};

// Runs a list from `state.resume` up to `stall` (0 meaning "to the end"),
// leaving `state` where interpretation stopped so a stall update continues
// from exactly there, subroutines included.
GeExecution ge_execute_list(psprecomp::Runtime &runtime, GeListState &state, std::uint32_t stall);

void ge_reset();
[[nodiscard]] GeStats ge_stats();
[[nodiscard]] std::string ge_report();

// The transform matrices, as the guest streamed them in.
//
// Which command carries which matrix was settled by measurement rather than by
// trusting a constant list: over one run the three busiest commands are 0x3F
// with 6,126,561 operands and 0x3D and 0x3B with 4,594,921 each. The ratio is
// exactly 16 to 12, and the two 12-element streams are equal, which is a 4x4
// projection matrix alongside a 4x3 world and a 4x3 view.
//
// Each operand carries the top 24 bits of a float, so an element is the operand
// shifted up by eight.
struct GeMatrices {
    float world[12]{};        // four columns of three
    float view[12]{};
    float projection[16]{};   // four columns of four
    // Eight bone matrices, each shaped like the world matrix. A skinned vertex
    // carries weights that blend them in place of the world transform.
    float bone[8][12]{};
    bool world_seen{}, view_seen{}, projection_seen{};
    std::uint8_t bones_seen{};   // highest bone index written, plus one
};
[[nodiscard]] const GeMatrices &ge_matrices();

// Where the clip cube lands on the frame buffer.
//
// Scales and centres are floats carried in the top 24 bits of their operands,
// the same encoding the matrices use. The offsets are in sixteenths of a pixel,
// which is what makes this title's values come out round: centre 2048 less an
// offset of 1808 is exactly 240, half of the 480-pixel display.
struct Viewport {
    float x_scale{240.0f}, y_scale{-136.0f}, z_scale{-32768.0f};
    float x_center{2048.0f}, y_center{2048.0f}, z_center{32767.0f};
    float x_offset{1808.0f}, y_offset{1912.0f};
};

[[nodiscard]] Viewport current_viewport();

// The latched GE register file, for a backend to read draw state from.
[[nodiscard]] const std::array<std::uint32_t, 256> &ge_registers();

} // namespace defjam

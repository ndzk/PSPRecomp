#pragma once

#include "defjam_texture.hpp"
#include "defjam_vertex.hpp"
#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>
#include <vector>

namespace defjam {

// Rasterising on the graphics card instead of the CPU.
//
// Everything ahead of this is unchanged and stays on the CPU: the display list
// is interpreted, vertices are decoded, and the transform runs exactly as it
// did - matrices, viewport, perspective divide, the depth value. That pipeline
// was checked against measured matrices by hand and there is nothing to gain
// from rewriting it as a shader; the cost is in the pixels, not the vertices.
// One run wrote 3.6 billion pixels against 15.8 million vertices.
//
// So this takes primitives whose positions are already in screen space and
// fills them, which is the part a card is for. The software rasteriser stays as
// the reference: a frame produced here that differs from the one it produces is
// a defect, and PSPRECOMP_DEFJAM_GPU exists so both can be run over the same
// scene and compared.
//
// Off unless PSPRECOMP_DEFJAM_GPU is set. Non-Windows builds compile to stubs.
[[nodiscard]] bool gpu_enabled();

// Brings the device up on first use. Reports why it could not rather than
// falling back quietly - a run that silently used the CPU path would make the
// comparison this exists for meaningless.
[[nodiscard]] bool gpu_initialize(std::string &error);

// Points drawing at the frame buffer the GE currently names. Anything already
// batched for a previous target is submitted first.
void gpu_set_target(std::uint32_t address, std::uint32_t stride, std::uint32_t width,
                    std::uint32_t height);

// One primitive, positions already in screen space, matching the software
// rasteriser's argument list so the two can be driven from the same call site.
// Returns false when the primitive is not one this draws, which is counted
// rather than reported.
bool gpu_draw(psprecomp::Runtime &runtime, std::uint32_t primitive,
              const std::vector<Vertex> &vertices, const VertexFormat &format,
              const TextureState &texture, bool clearing);

// Submits whatever is batched and copies the result back into guest memory, so
// the frame lands where the hardware would have left it and everything
// downstream - the display, the window, the frame dumps - is unchanged.
void gpu_resolve(psprecomp::Runtime &runtime);

struct GpuStats {
    std::uint64_t primitives_drawn{};
    std::uint64_t primitives_skipped{};
    std::uint64_t vertices_submitted{};
    std::uint64_t batches_flushed{};
    std::uint64_t textures_uploaded{};
    std::uint64_t texture_cache_hits{};
    std::uint64_t resolves{};
    // Colour, depth and readback buffers are kept per guest frame buffer.
    // This title flips between two, so without keeping them it built three
    // resources and destroyed three more every single frame.
    std::uint64_t targets_created{};
    std::uint64_t targets_reused{};
    std::string adapter;
};
[[nodiscard]] GpuStats gpu_stats();
[[nodiscard]] std::string gpu_report();
void gpu_shutdown();

} // namespace defjam

#pragma once

#include "defjam_texture.hpp"
#include "defjam_vertex.hpp"
#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>
#include <vector>

namespace defjam {

// A software rasteriser for the draws that are already in screen space.
//
// This is deliberately the small half of a renderer. Through-mode vertices skip
// the transform pipeline entirely - their coordinates are pixels - so they can
// be drawn without matrices, clipping planes or a depth buffer, and that is
// enough to put the title's 2D output on a surface and see it.
//
// Transformed draws are counted and left alone. Doing them properly needs the
// matrix state and a transform pipeline, which is a separate piece of work; a
// half-transformed triangle would be worse than an absent one, because it would
// look like a rendering bug rather than a missing feature.
//
// It draws into the frame buffer the GE is pointed at, in guest memory, so the
// result is observable exactly where the hardware would have put it.

// Where the GE is currently drawing, taken from its register file.
struct RenderTarget {
    std::uint32_t address{};
    std::uint32_t stride{};   // in pixels
    std::uint32_t width{};
    std::uint32_t height{};
    [[nodiscard]] bool valid() const { return address != 0u && stride != 0u && height != 0u; }
};
[[nodiscard]] RenderTarget current_render_target();

// Pushes the frame being drawn back into guest memory. Drawing works on a host
// copy, so nothing is visible to the guest until this runs.
void flush_surface(psprecomp::Runtime &runtime);

// Draws one primitive. `primitive` is the PSP code: 0 points, 1 lines,
// 2 line strip, 3 triangles, 4 triangle strip, 5 triangle fan, 6 sprites.
// Returns false when the primitive is not one this draws, which is not an
// error and is counted rather than reported.
//  says the coordinates are already pixels, either
// because the draw was through-mode or because the transform pipeline has
// already run. The format keeps its own through flag, which is what decides
// whether texture coordinates are texels or normalised - the two conventions
// are independent and conflating them samples texel zero for every pixel.
bool rasterise(psprecomp::Runtime &runtime, std::uint32_t primitive,
               const std::vector<Vertex> &vertices, const VertexFormat &format,
               const TextureState &texture, bool positions_are_screen);

struct RasterStats {
    std::uint64_t primitives_drawn{};
    std::uint64_t primitives_skipped{};   // transformed, or a shape not handled
    std::uint64_t pixels_written{};
    std::uint64_t textured_primitives{};
    std::uint64_t no_target{};
    std::uint64_t depth_rejected{};       // pixels the depth test discarded
    std::uint64_t transparent_writes{};
    std::uint64_t coloured_writes{};            // nothing to draw into
};
[[nodiscard]] RasterStats raster_stats();
void raster_reset();
[[nodiscard]] std::string raster_report();

// Writes the frame buffer the display is pointed at to a BMP file. Returns
// false with `error` set when there is nothing to write or the file will not
// open. Exists so a headless run can be looked at.
[[nodiscard]] bool dump_display(psprecomp::Runtime &runtime, const std::string &path,
                                std::string &error);

// Set PSPRECOMP_DEFJAM_FRAME_DUMP to a path to have the display written there
// when the run ends.
[[nodiscard]] std::string frame_dump_path();

} // namespace defjam

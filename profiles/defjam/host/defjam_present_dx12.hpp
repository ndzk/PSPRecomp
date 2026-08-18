#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace defjam {

// Direct3D 12 presentation.
//
// This is the first half of moving the renderer onto the GPU: it owns the
// device, the queue and a flip-model swapchain, and draws one texture over the
// window with a fullscreen triangle. The pixels still arrive from the software
// rasteriser. When the GE backend follows it will render into a texture this
// already knows how to display, rather than needing a second device.
//
// Everything here is called from the UI thread that owns the window.
// Non-Windows builds get stubs so the profile keeps building elsewhere.

[[nodiscard]] bool dx12_initialize(void *native_window, std::uint32_t width,
                                   std::uint32_t height, std::string &error) noexcept;

// Uploads a tightly packed RGBA8 image and presents it scaled to the window,
// letterboxed to preserve the source aspect.
[[nodiscard]] bool dx12_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                                     std::uint32_t height, std::string &error) noexcept;

// Resizes the swapchain after the window changed size.
[[nodiscard]] bool dx12_resize(std::uint32_t width, std::uint32_t height,
                               std::string &error) noexcept;

void dx12_shutdown() noexcept;
[[nodiscard]] bool dx12_active() noexcept;
[[nodiscard]] std::string dx12_adapter_name();

} // namespace defjam

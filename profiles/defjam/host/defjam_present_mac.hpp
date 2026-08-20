#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

// The macOS half of the optional window: everything that has to speak AppKit.
//
// AppKit owns the main thread. It is not merely conventional there - a window
// created or pumped anywhere else is unsupported and deadlocks in practice - so
// unlike the Windows path, which runs its own UI thread, every function here
// must be called from the thread that entered main(). The guest runs on a
// worker instead; see the __APPLE__ branch in main.cpp.
namespace defjam {

[[nodiscard]] bool mac_open_window(std::uint32_t width, std::uint32_t height,
                                   std::string &error) noexcept;

// Drains the event queue. Called often enough that the window stays responsive
// while the guest is busy, which this title is for seconds at a time.
void mac_pump_events() noexcept;

// Hands one finished frame to the window. RGBA, eight bits a channel.
bool mac_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                      std::uint32_t height) noexcept;

void mac_set_title(const std::string &text) noexcept;

// The keys the window watches. Naming them rather than passing native codes
// keeps the mapping from key to pad button in one place, beside the Windows
// one, so the two platforms cannot drift into different controls.
enum class MacKey : std::uint8_t {
    Up, Down, Left, Right, Return, Back,
    A, D, E, I, J, K, L, Q, S, W,
    Count
};

[[nodiscard]] bool mac_key_down(MacKey key) noexcept;

// False while another application is in front, so a run does not read the keys
// somebody is typing somewhere else.
[[nodiscard]] bool mac_window_focused() noexcept;

[[nodiscard]] bool mac_close_requested() noexcept;
[[nodiscard]] bool mac_window_open() noexcept;
void mac_close_window() noexcept;

}   // namespace defjam

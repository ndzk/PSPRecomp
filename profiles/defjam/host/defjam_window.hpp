#pragma once

#include "psprecomp/guest_memory.hpp"

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace defjam {

// An optional native window, and the input that comes with it.
//
// The guest never owns the window. A dedicated UI thread creates it, pumps its
// messages and presents into it, so the window keeps repainting and stays
// draggable while the guest sits inside a long synchronous load - which this
// title does for several seconds at a time. The guest side only converts a
// frame buffer into host pixels and hands them over.
//
// Enabled with PSPRECOMP_DEFJAM_WINDOW=1. PSPRECOMP_DEFJAM_WINDOW_SCALE picks
// the integer scale (default 2, so 960x544). Without the variable the host is
// headless exactly as it was, which keeps the scripted measurement runs that
// this profile was built with behaving identically.
[[nodiscard]] bool window_enabled();

// Opens the window before the guest has produced anything, so a boot that
// fails early is still visible rather than being a process that exits.
void window_start();

// Title bar text, for saying what the guest is doing while it is not drawing.
void window_set_status(const std::string &status);

// Publishes one PSP frame buffer. Converts out of the guest's pixel format and
// hands the result to the UI thread; does not block on presentation. Safe to
// call when the window is disabled.
void window_present(const psprecomp::GuestMemory &memory, std::uint32_t address,
                    std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                    std::uint32_t height);

// The live PSP button mask, or zero when the window is disabled or unfocused.
// This is ORed with the scripted button variables so the deterministic runs
// keep working with a window open.
[[nodiscard]] std::uint32_t window_buttons();

// Analog stick, 128/128 at rest.
void window_analog(std::uint8_t &x, std::uint8_t &y);

// True once the window was closed or Escape was pressed.
[[nodiscard]] bool window_close_requested();

// Blocks until the window is closed. The run stops on its own at the
// dispatch cap, and a window that vanished with it would take the last
// frame with it, so the caller waits here instead.
void window_wait_for_close();

void window_shutdown();

// What the window ended up doing, for the run's report. Presentation is the one
// part of this profile allowed to degrade rather than stop: a machine without a
// usable Direct3D 12 device should still show the picture, so the fallback is
// recorded here and printed rather than hidden.
struct WindowStatus {
    bool open{};
    bool direct3d{};
    std::string adapter;
    std::string fallback_reason;   // empty unless presentation fell back to GDI
    std::uint64_t frames_presented{};
    std::uint64_t frames_dropped{};   // produced while the previous one was still queued
};
[[nodiscard]] WindowStatus window_status();
[[nodiscard]] std::string window_report();

} // namespace defjam

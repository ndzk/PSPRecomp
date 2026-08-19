#include "defjam_window.hpp"

#include "defjam_present_dx12.hpp"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstring>
#include <cstdlib>
#include <mutex>
#include <sstream>
#include <thread>
#include <vector>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
// mingw-w64 predefines NOMINMAX, MSVC does not, so define it only if absent.
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace defjam {
namespace {

// PSP pad bits, as the title reads them out of sceCtrlData.
constexpr std::uint32_t kSelect = 0x000001u;
constexpr std::uint32_t kStart = 0x000008u;
constexpr std::uint32_t kUp = 0x000010u;
constexpr std::uint32_t kRight = 0x000020u;
constexpr std::uint32_t kDown = 0x000040u;
constexpr std::uint32_t kLeft = 0x000080u;
constexpr std::uint32_t kLTrigger = 0x000100u;
constexpr std::uint32_t kRTrigger = 0x000200u;
constexpr std::uint32_t kTriangle = 0x001000u;
constexpr std::uint32_t kCircle = 0x002000u;
constexpr std::uint32_t kCross = 0x004000u;
constexpr std::uint32_t kSquare = 0x008000u;

struct SharedState {
    std::mutex frame_lock;
    std::vector<std::byte> frame;      // tightly packed RGBA8
    std::uint32_t frame_width{};
    std::uint32_t frame_height{};
    bool frame_pending{};

    std::atomic<std::uint32_t> buttons{0u};
    std::atomic<std::uint8_t> analog_x{128u};
    std::atomic<std::uint8_t> analog_y{128u};
    std::atomic<bool> close_requested{false};
    std::atomic<bool> running{false};
    std::atomic<std::uint64_t> presented{0u};
    std::atomic<std::uint64_t> dropped{0u};
    std::atomic<bool> direct3d{false};

    std::mutex text_lock;
    std::string status{"starting"};
    std::string adapter;
    std::string fallback_reason;

    std::thread thread;
};

SharedState g_state;

bool environment_flag(const char *name) {
    const char *text = std::getenv(name);
    return text != nullptr && *text != '\0' && *text != '0';
}

std::uint32_t environment_number(const char *name, std::uint32_t fallback) {
    const char *text = std::getenv(name);
    if (text == nullptr || *text == '\0') return fallback;
    const unsigned long value = std::strtoul(text, nullptr, 0);
    return value == 0u ? fallback : static_cast<std::uint32_t>(value);
}

// Guest pixel formats, expanded to the RGBA8 the presenter takes. Format 3 is
// already byte-for-byte what the shader wants - the PSP stores 8888 as
// A<<24|B<<16|G<<8|R, so its bytes run R, G, B, A - which is why that case is a
// row copy and the packed ones are not.
void convert_row(const std::uint8_t *source, std::byte *destination, std::uint32_t width,
                 std::uint32_t format) {
    if (format == 3u) {
        std::memcpy(destination, source, static_cast<std::size_t>(width) * 4u);
        return;
    }
    const auto expand = [](std::uint32_t value, std::uint32_t bits) -> std::uint8_t {
        if (bits == 0u) return 255u;
        // Replicate the high bits into the low ones so full scale stays full.
        const std::uint32_t shifted = value << (8u - bits);
        return static_cast<std::uint8_t>(shifted | (shifted >> bits));
    };
    for (std::uint32_t x = 0; x < width; ++x) {
        std::uint16_t packed{};
        std::memcpy(&packed, source + static_cast<std::size_t>(x) * 2u, sizeof(packed));
        std::uint8_t r{}, g{}, b{}, a{255u};
        switch (format) {
            case 0u:   // 5650
                r = expand(packed & 0x1Fu, 5u);
                g = expand((packed >> 5u) & 0x3Fu, 6u);
                b = expand((packed >> 11u) & 0x1Fu, 5u);
                break;
            case 1u:   // 5551
                r = expand(packed & 0x1Fu, 5u);
                g = expand((packed >> 5u) & 0x1Fu, 5u);
                b = expand((packed >> 10u) & 0x1Fu, 5u);
                a = (packed & 0x8000u) != 0u ? 255u : 0u;
                break;
            default:   // 4444
                r = expand(packed & 0x0Fu, 4u);
                g = expand((packed >> 4u) & 0x0Fu, 4u);
                b = expand((packed >> 8u) & 0x0Fu, 4u);
                a = expand((packed >> 12u) & 0x0Fu, 4u);
                break;
        }
        auto *out = reinterpret_cast<std::uint8_t *>(destination) + static_cast<std::size_t>(x) * 4u;
        out[0] = r;
        out[1] = g;
        out[2] = b;
        out[3] = a;
    }
}

#ifdef _WIN32

constexpr wchar_t kClassName[] = L"PSPRecompDefJamWindow";
HWND g_window = nullptr;
std::atomic<std::uint32_t> g_client_width{0u};
std::atomic<std::uint32_t> g_client_height{0u};
bool g_keys[256] = {};

std::uint32_t buttons_from_keys() {
    if (GetForegroundWindow() != g_window) return 0u;
    std::uint32_t mask = 0u;
    const auto down = [](int key) { return g_keys[key & 0xFF]; };
    if (down(VK_UP)) mask |= kUp;
    if (down(VK_DOWN)) mask |= kDown;
    if (down(VK_LEFT)) mask |= kLeft;
    if (down(VK_RIGHT)) mask |= kRight;
    // The face buttons sit as a diamond on the keyboard in the same
    // arrangement they have on the console, so the mapping can be read off the
    // pad rather than memorised.
    if (down('I')) mask |= kTriangle;
    if (down('L')) mask |= kCircle;
    if (down('K')) mask |= kCross;
    if (down('J')) mask |= kSquare;
    if (down('Q')) mask |= kLTrigger;
    if (down('E')) mask |= kRTrigger;
    if (down(VK_RETURN)) mask |= kStart;
    if (down(VK_BACK)) mask |= kSelect;
    return mask;
}

void analog_from_keys(std::uint8_t &x, std::uint8_t &y) {
    x = 128u;
    y = 128u;
    if (GetForegroundWindow() != g_window) return;
    const auto down = [](int key) { return g_keys[key & 0xFF]; };
    if (down('A')) x = 0u;
    if (down('D')) x = 255u;
    if (down('W')) y = 0u;
    if (down('S')) y = 255u;
}

LRESULT CALLBACK window_procedure(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    switch (message) {
        case WM_CLOSE:
            g_state.close_requested.store(true, std::memory_order_relaxed);
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        case WM_SIZE: {
            const auto width = static_cast<std::uint32_t>(LOWORD(lparam));
            const auto height = static_cast<std::uint32_t>(HIWORD(lparam));
            g_client_width.store(width, std::memory_order_relaxed);
            g_client_height.store(height, std::memory_order_relaxed);
            if (dx12_active() && width != 0u && height != 0u) {
                std::string error;
                (void)dx12_resize(width, height, error);
            }
            return 0;
        }
        case WM_KEYDOWN:
        case WM_SYSKEYDOWN:
            if (wparam == VK_ESCAPE) g_state.close_requested.store(true, std::memory_order_relaxed);
            g_keys[wparam & 0xFF] = true;
            return 0;
        case WM_KEYUP:
        case WM_SYSKEYUP:
            g_keys[wparam & 0xFF] = false;
            return 0;
        case WM_KILLFOCUS:
            // Without this a key held when the window loses focus stays held
            // forever, and the title reads a button nobody is pressing.
            std::fill(std::begin(g_keys), std::end(g_keys), false);
            return 0;
        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

// Presentation is the one part of this profile that degrades instead of
// stopping. A run whose Direct3D device could not be created should still show
// the picture, so this exists - but the reason is recorded and printed rather
// than swallowed, which is the difference between a fallback and a silent one.
void present_with_gdi(const std::vector<std::byte> &rgba, std::uint32_t width,
                      std::uint32_t height) {
    static std::vector<std::uint8_t> bgra;
    bgra.resize(static_cast<std::size_t>(width) * height * 4u);
    for (std::size_t i = 0; i + 3 < bgra.size(); i += 4) {
        const auto *in = reinterpret_cast<const std::uint8_t *>(rgba.data()) + i;
        bgra[i + 0] = in[2];
        bgra[i + 1] = in[1];
        bgra[i + 2] = in[0];
        bgra[i + 3] = 255u;
    }

    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof(info.bmiHeader);
    info.bmiHeader.biWidth = static_cast<LONG>(width);
    info.bmiHeader.biHeight = -static_cast<LONG>(height);   // top-down
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;

    const HDC context = GetDC(g_window);
    if (context == nullptr) return;
    RECT client{};
    GetClientRect(g_window, &client);
    const int target_width = client.right - client.left;
    const int target_height = client.bottom - client.top;
    SetStretchBltMode(context, COLORONCOLOR);
    StretchDIBits(context, 0, 0, target_width, target_height, 0, 0, static_cast<int>(width),
                  static_cast<int>(height), bgra.data(), &info, DIB_RGB_COLORS, SRCCOPY);
    ReleaseDC(g_window, context);
}

void ui_thread(std::uint32_t width, std::uint32_t height) {
    WNDCLASSEXW window_class{};
    window_class.cbSize = sizeof(window_class);
    window_class.lpfnWndProc = window_procedure;
    window_class.hInstance = GetModuleHandleW(nullptr);
    window_class.hCursor = LoadCursorA(nullptr, IDC_ARROW);
    window_class.lpszClassName = kClassName;
    RegisterClassExW(&window_class);

    RECT desired{0, 0, static_cast<LONG>(width), static_cast<LONG>(height)};
    AdjustWindowRect(&desired, WS_OVERLAPPEDWINDOW, FALSE);
    g_window = CreateWindowExW(0, kClassName, L"Def Jam: Fight for NY - The Takeover",
                               WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
                               desired.right - desired.left, desired.bottom - desired.top, nullptr,
                               nullptr, window_class.hInstance, nullptr);
    if (g_window == nullptr) {
        g_state.running.store(false, std::memory_order_release);
        return;
    }
    ShowWindow(g_window, SW_SHOW);
    g_client_width.store(width, std::memory_order_relaxed);
    g_client_height.store(height, std::memory_order_relaxed);

    std::string error;
    if (dx12_initialize(g_window, width, height, error)) {
        g_state.direct3d.store(true, std::memory_order_relaxed);
        std::lock_guard<std::mutex> guard(g_state.text_lock);
        g_state.adapter = dx12_adapter_name();
    } else {
        std::lock_guard<std::mutex> guard(g_state.text_lock);
        g_state.fallback_reason = error;
    }
    g_state.running.store(true, std::memory_order_release);

    std::vector<std::byte> pixels;
    std::uint32_t pixel_width = 0u;
    std::uint32_t pixel_height = 0u;
    std::string last_title;

    while (!g_state.close_requested.load(std::memory_order_relaxed)) {
        MSG message;
        while (PeekMessageW(&message, nullptr, 0, 0, PM_REMOVE)) {
            if (message.message == WM_QUIT) {
                g_state.close_requested.store(true, std::memory_order_relaxed);
                break;
            }
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }

        g_state.buttons.store(buttons_from_keys(), std::memory_order_relaxed);
        std::uint8_t analog_x = 128u;
        std::uint8_t analog_y = 128u;
        analog_from_keys(analog_x, analog_y);
        g_state.analog_x.store(analog_x, std::memory_order_relaxed);
        g_state.analog_y.store(analog_y, std::memory_order_relaxed);

        bool have_frame = false;
        {
            std::lock_guard<std::mutex> guard(g_state.frame_lock);
            if (g_state.frame_pending) {
                pixels = g_state.frame;
                pixel_width = g_state.frame_width;
                pixel_height = g_state.frame_height;
                g_state.frame_pending = false;
                have_frame = true;
            }
        }

        if (have_frame && pixel_width != 0u && pixel_height != 0u) {
            bool presented = false;
            if (dx12_active()) {
                std::string present_error;
                presented = dx12_present_rgba(pixels, pixel_width, pixel_height, present_error);
                if (!presented) {
                    std::lock_guard<std::mutex> guard(g_state.text_lock);
                    if (g_state.fallback_reason.empty()) g_state.fallback_reason = present_error;
                    g_state.direct3d.store(false, std::memory_order_relaxed);
                    dx12_shutdown();
                }
            }
            if (!presented) present_with_gdi(pixels, pixel_width, pixel_height);
            g_state.presented.fetch_add(1u, std::memory_order_relaxed);
        }

        std::string title;
        {
            std::lock_guard<std::mutex> guard(g_state.text_lock);
            title = "Def Jam: Fight for NY - The Takeover - " + g_state.status;
        }
        if (title != last_title) {
            const int length =
                MultiByteToWideChar(CP_UTF8, 0, title.c_str(), -1, nullptr, 0);
            if (length > 0) {
                std::wstring wide(static_cast<std::size_t>(length - 1), L'\0');
                MultiByteToWideChar(CP_UTF8, 0, title.c_str(), -1, wide.data(), length);
                SetWindowTextW(g_window, wide.c_str());
            }
            last_title = title;
        }

        if (!have_frame) Sleep(1);
    }

    dx12_shutdown();
    if (g_window != nullptr) {
        DestroyWindow(g_window);
        g_window = nullptr;
    }
    UnregisterClassW(kClassName, GetModuleHandleW(nullptr));
    g_state.running.store(false, std::memory_order_release);
}

#endif   // _WIN32

}   // namespace

bool window_enabled() {
#ifdef _WIN32
    static const bool enabled = environment_flag("PSPRECOMP_DEFJAM_WINDOW");
    return enabled;
#else
    return false;
#endif
}

void window_start() {
#ifdef _WIN32
    if (!window_enabled() || g_state.thread.joinable()) return;
    const std::uint32_t scale = std::clamp(environment_number("PSPRECOMP_DEFJAM_WINDOW_SCALE", 2u), 1u, 8u);
    g_state.thread = std::thread(ui_thread, 480u * scale, 272u * scale);
    // The window has to exist before the guest starts handing frames over,
    // otherwise the first ones are dropped against a window that is not there.
    while (!g_state.running.load(std::memory_order_acquire) && g_state.thread.joinable()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        if (g_state.close_requested.load(std::memory_order_relaxed)) break;
    }
#endif
}

void window_set_status(const std::string &status) {
    if (!window_enabled()) return;
    std::lock_guard<std::mutex> guard(g_state.text_lock);
    g_state.status = status;
}

void window_present(const psprecomp::GuestMemory &memory, std::uint32_t address,
                    std::uint32_t stride, std::uint32_t format, std::uint32_t width,
                    std::uint32_t height) {
    if (!window_enabled() || address == 0u || stride == 0u || width == 0u || height == 0u) return;

    const std::uint32_t bytes_per_pixel = format == 3u ? 4u : 2u;
    const std::uint32_t source_bytes = stride * height * bytes_per_pixel;
    if (!memory.contains(address, source_bytes)) return;

    static std::vector<std::uint8_t> source;
    source.resize(source_bytes);
    memory.copy_out(address, source);

    std::vector<std::byte> converted(static_cast<std::size_t>(width) * height * 4u);
    for (std::uint32_t y = 0; y < height; ++y) {
        convert_row(source.data() + static_cast<std::size_t>(y) * stride * bytes_per_pixel,
                    converted.data() + static_cast<std::size_t>(y) * width * 4u, width, format);
    }

    std::lock_guard<std::mutex> guard(g_state.frame_lock);
    // A frame that arrives while the previous one is still queued replaces it.
    // The guest is not paced by the window, so the alternative is a growing
    // backlog that makes the picture lag further behind the game the longer it
    // runs.
    if (g_state.frame_pending) g_state.dropped.fetch_add(1u, std::memory_order_relaxed);
    g_state.frame = std::move(converted);
    g_state.frame_width = width;
    g_state.frame_height = height;
    g_state.frame_pending = true;
}

std::uint32_t window_buttons() {
    if (!window_enabled()) return 0u;
    return g_state.buttons.load(std::memory_order_relaxed);
}

void window_analog(std::uint8_t &x, std::uint8_t &y) {
    if (!window_enabled()) {
        x = 128u;
        y = 128u;
        return;
    }
    x = g_state.analog_x.load(std::memory_order_relaxed);
    y = g_state.analog_y.load(std::memory_order_relaxed);
}

bool window_close_requested() {
    if (!window_enabled()) return false;
    return g_state.close_requested.load(std::memory_order_relaxed);
}

void window_wait_for_close() {
    if (!window_enabled()) return;
    while (g_state.running.load(std::memory_order_acquire) &&
           !g_state.close_requested.load(std::memory_order_relaxed)) {
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }
}

void window_shutdown() {
    if (!g_state.thread.joinable()) return;
    g_state.close_requested.store(true, std::memory_order_relaxed);
    g_state.thread.join();
}

WindowStatus window_status() {
    WindowStatus status;
    status.open = g_state.running.load(std::memory_order_acquire);
    status.direct3d = g_state.direct3d.load(std::memory_order_relaxed);
    status.frames_presented = g_state.presented.load(std::memory_order_relaxed);
    status.frames_dropped = g_state.dropped.load(std::memory_order_relaxed);
    std::lock_guard<std::mutex> guard(g_state.text_lock);
    status.adapter = g_state.adapter;
    status.fallback_reason = g_state.fallback_reason;
    return status;
}

std::string window_report() {
    if (!window_enabled()) return {};
    const WindowStatus status = window_status();
    std::ostringstream out;
    out << "  window:             " << status.frames_presented << " frames presented, "
        << status.frames_dropped << " replaced before they were shown\n";
    if (status.direct3d) {
        out << "  presentation:       Direct3D 12 on " << status.adapter << "\n";
    } else {
        out << "  presentation:       GDI, because Direct3D 12 was unavailable: "
            << (status.fallback_reason.empty() ? "no reason recorded" : status.fallback_reason)
            << "\n";
    }
    return out.str();
}

}   // namespace defjam

#include "defjam_atrac.hpp"
#include "defjam_config.hpp"
#include "defjam_ge.hpp"
#include "defjam_gpu.hpp"
#include "defjam_io.hpp"
#include "defjam_mpeg.hpp"
#include "defjam_utility.hpp"
#include "defjam_raster.hpp"
#include "defjam_texture.hpp"
#include "defjam_vertex.hpp"
#include "defjam_banks.hpp"
#include "defjam_window.hpp"
#include "defjam_profile.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/sha256.hpp"

#include <atomic>
#include <thread>
#include <algorithm>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
// mingw-w64 predefines NOMINMAX, MSVC does not, so define it only if absent.
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace {

std::filesystem::path native_executable_directory(const char *argv0) {
#ifdef _WIN32
    // argv[0] is not trustworthy on Windows; the module path is.
    (void)argv0;
    std::wstring buffer(512u, L'\0');
    for (;;) {
        const DWORD length = GetModuleFileNameW(nullptr, buffer.data(),
                                                static_cast<DWORD>(buffer.size()));
        if (length == 0u) throw psprecomp::Error("GetModuleFileNameW failed");
        if (length < buffer.size() - 1u) {
            buffer.resize(length);
            return std::filesystem::path(buffer).parent_path();
        }
        buffer.resize(buffer.size() * 2u);
    }
#else
    return std::filesystem::absolute(argv0 != nullptr ? argv0 : "DefJamNative").parent_path();
#endif
}

// Exit codes are stable so scripts can distinguish "you have not staged the
// game" from "you staged the wrong build".
constexpr int kExitOk = 0;
constexpr int kExitError = 1;
constexpr int kExitUsage = 2;
constexpr int kExitMissingExecutable = 3;
constexpr int kExitIdentityMismatch = 4;
constexpr int kExitGuestStopped = 5;

// Explains an address the run stopped at, when it can.
//
// The policy stops on a function the corpus does not cover, and names the
// address. That address is the whole question when a title loads code while it
// runs: it is worth knowing which file delivered it and whether what is there
// even looks like code, and worth knowing from the run that hit it rather than
// from a repeat with more logging turned on - reaching these points takes
// playing the game.
std::string explain_stop_address(psprecomp::Runtime &runtime, const std::string &reason) {
    // Only for a stop that is about where execution landed. A run that reaches
    // its dispatch budget, or the end of a profile window, stops wherever it
    // happened to be - in the middle of a routine, where "not a prologue" is
    // the expected answer and reads as a fault that is not one. It would also
    // keep 64KB of memory answering a question nobody asked.
    if (reason.find("No recompiled function registered") == std::string::npos &&
        reason.find("returned without changing PC") == std::string::npos) {
        return {};
    }
    const std::size_t at = reason.find("0x");
    if (at == std::string::npos) return {};
    const std::uint32_t address =
        static_cast<std::uint32_t>(std::strtoul(reason.c_str() + at, nullptr, 16));
    if (address == 0u || !runtime.memory().contains(address, 16u)) return {};

    std::string text = "  address origin:    ";
    const std::string source = defjam::read_covering(address);
    text += source.empty() ? "no recent read covers it" : source;
    text += "\n  memory there:       ";
    for (std::uint32_t offset = 0u; offset < 16u; offset += 4u) {
        text += psprecomp::hex32(runtime.memory().load32(address + offset)) + " ";
    }
    // A routine begins by making itself a stack frame. Saying so distinguishes
    // code the corpus missed from a jump through a pointer that holds rubbish.
    const std::uint32_t first = runtime.memory().load32(address);
    text += (first >> 16u) == 0x27BDu && (first & 0x8000u) != 0u
                ? "\n  looks like:         a function prologue"
                : "\n  looks like:         not a prologue, so this may be a bad jump";

    // Naming the read that covers an address is a guess when the guest
    // decompresses what it loaded: the bytes that arrived are not the bytes
    // that ran, and a buffer holding one file's output can sit inside the range
    // an earlier read of another file filled. Keeping the memory itself settles
    // what the code is without having to be right about where it came from.
    constexpr std::uint32_t kWindow = 64u * 1024u;
    const std::uint32_t start = address >= kWindow / 2u ? address - kWindow / 2u : 0u;
    if (runtime.memory().contains(start, kWindow)) {
        std::vector<std::uint8_t> bytes(kWindow);
        runtime.memory().copy_out(start, bytes);
        const std::string path = "stop_" + psprecomp::hex32(address) + ".bin";
        std::ofstream file(path, std::ios::binary);
        if (file) {
            file.write(reinterpret_cast<const char *>(bytes.data()),
                       static_cast<std::streamsize>(bytes.size()));
            text += "\n  memory kept:        " + std::to_string(kWindow) + " bytes from " +
                    psprecomp::hex32(start) + " in " + path;
        }
    }
    return text + "\n";
}

// A long run needs a bound so a hang cannot wedge the session.
std::uint64_t configured_max_dispatches() {
    constexpr std::uint64_t kDefault = 200'000'000ull;
    const char *text = std::getenv("PSPRECOMP_MAX_DISPATCHES");
    if (text == nullptr || *text == '\0') return kDefault;
    const unsigned long long parsed = std::strtoull(text, nullptr, 0);
    return parsed == 0ull ? kDefault : static_cast<std::uint64_t>(parsed);
}

} // namespace

int main(int argc, char **argv) {
    try {
        if (argc > 2) {
            std::cerr << "Usage: DefJamNative [path to BOOT.BIN]\n";
            return kExitUsage;
        }

        const std::filesystem::path executable_directory =
            native_executable_directory(argc > 0 ? argv[0] : nullptr);
        const std::filesystem::path manifest_path = defjam::find_profile_manifest(executable_directory);
        const defjam::ProfileManifest manifest = defjam::load_profile_manifest(manifest_path);

        std::cout << "DefJamNative (PSPRecomp defjam profile)\n"
                  << "  manifest:       " << manifest.source_path.string() << "\n"
                  << "  title:          " << manifest.game.name << "\n"
                  << "  disc id:        " << manifest.game.disc_id
                  << "  region " << manifest.game.region;
        if (!manifest.game.disc_version.empty())
            std::cout << "  version " << manifest.game.disc_version;
        std::cout << "\n"
                  << "  module:         " << manifest.game.module << "\n"
                  << "  guest ram:      " << manifest.game.ram_mb << " MiB\n"
                  << "  load base:      " << psprecomp::hex32(manifest.game.load_base) << "\n"
                  << "  expected sha256:" << manifest.game.expected_sha256 << "\n"
                  << "  policy:         missing_function=" << manifest.policy.missing_function
                  << " unsupported_instruction=" << manifest.policy.unsupported_instruction
                  << " interpreter_fallback="
                  << (manifest.policy.allow_interpreter_fallback ? "true" : "false")
                  << " jit_fallback="
                  << (manifest.policy.allow_jit_fallback ? "true" : "false") << "\n";

        for (const std::string &warning : manifest.warnings)
            std::cerr << "manifest warning: " << warning << "\n";

        std::filesystem::path executable;
        if (argc == 2) {
            executable = argv[1];
            std::error_code ec;
            if (!std::filesystem::is_regular_file(executable, ec)) {
                std::cerr << "\nGame executable not found:\n  " << executable.string() << "\n";
                return kExitMissingExecutable;
            }
        } else {
            const defjam::ExecutableLookup lookup =
                defjam::locate_game_executable(manifest, executable_directory);
            if (!lookup.found()) {
                std::cerr << "\nGame executable not found. Looked for \""
                          << manifest.input.executable << "\" at:\n";
                for (const auto &candidate : lookup.probed)
                    std::cerr << "  " << candidate.string() << "\n";
                std::cerr << "\nPSPRecomp ships no game content. Stage your own disc with:\n"
                          << "  profiles/defjam/tools/prepare_game.ps1 -IsoPath <your.iso>\n"
                          << "or pass the executable path directly:\n"
                          << "  DefJamNative <path to BOOT.BIN>\n";
                return kExitMissingExecutable;
            }
            executable = lookup.path;
        }

        const std::string actual = psprecomp::sha256_file(executable);
        const defjam::ExecutableCheck check = defjam::check_executable_hash(manifest, actual);
        std::cout << "  executable:     " << executable.string() << "\n"
                  << "  actual sha256:  " << check.actual << "\n";

        if (!check.ok()) {
            if (defjam::unverified_executable_allowed()) {
                std::cerr << "\nWARNING: executable identity check bypassed via "
                             "PSPRECOMP_DEFJAM_ALLOW_UNVERIFIED.\n"
                          << check.message << "\n";
            } else {
                std::cerr << "\n" << check.message << "\n";
                return kExitIdentityMismatch;
            }
        } else {
            std::cout << "  identity:       OK\n";
        }

#if defined(DEFJAM_HAS_GENERATED_CORPUS)
        // Load and relocate the guest image, then register the AOT corpus. This
        // stops short of executing anything: it proves the corpus links and
        // registers at the addresses the analyzer reported.
        psprecomp::Elf32Image elf = psprecomp::Elf32Image::from_file(executable);
        psprecomp::Runtime runtime(manifest.game.ram_mb * 1024u * 1024u);

        // Guest paths resolve against the directory holding PSP_GAME, which is
        // three levels above <root>/PSP_GAME/SYSDIR/BOOT.BIN. Runtime strips the
        // device prefix and rejects ".." so everything stays inside it.
        const std::filesystem::path game_root =
            executable.parent_path().parent_path().parent_path();
        runtime.set_game_root(game_root);

        const auto relocations = elf.load_and_relocate(runtime.memory(), manifest.game.load_base);
        psprecomp::register_generated_functions(runtime);

        std::uint64_t image_end = 0u;
        for (std::size_t index = 0; index < elf.segments().size(); ++index) {
            const auto &segment = elf.segments()[index];
            if (segment.type != 1u) continue;  // PT_LOAD
            const std::uint64_t start = elf.segment_runtime_address(index, manifest.game.load_base);
            image_end = std::max(image_end, start + segment.memory_size);
        }
        if (image_end == 0u || image_end > 0x0A000000ull)
            throw psprecomp::Error("Invalid PSP ELF load image extent");
        const std::uint32_t user_arena_start = static_cast<std::uint32_t>((image_end + 0xFFu) & ~0xFFull);

        std::cout << "  entry:          " << psprecomp::hex32(elf.runtime_entry(manifest.game.load_base)) << "\n"
                  << "  relocations:    " << relocations.total << " (invalid " << relocations.invalid
                  << ", unsupported " << relocations.unsupported << ")\n"
                  << "  registered fns: " << runtime.function_count() << "\n"
                  << "  user arena:     " << psprecomp::hex32(user_arena_start) << "\n"
                  << "  game root:      " << game_root.string() << "\n";
        if (runtime.function_count() == 0u)
            throw psprecomp::Error("The generated corpus registered no functions");

        // install_profile must follow register_generated_functions: registering
        // a host override poisons the containing generated unit, and the
        // reverse order would let corpus registration undo the overrides.
        // Every run truncates this on open, so two running at once erase each
        // other's evidence - which is exactly how one investigation here ended
        // up reading an empty log and concluding nothing was happening.
        // PSPRECOMP_DEFJAM_LOG gives a run its own.
        const char *log_override = std::getenv("PSPRECOMP_DEFJAM_LOG");
        defjam::runtime_log_initialize(
            log_override != nullptr && *log_override != '\0'
                ? std::string(log_override)
                : (executable_directory / "DefJamNative.log").string());

        // Load the NID name table so an unimplemented import names the function
        // rather than a bare hex NID. Purely diagnostic, so a missing table is
        // reported and not fatal.
        if (!manifest.input.nids_csv.empty()) {
            const std::filesystem::path manifest_dir = manifest.source_path.parent_path();
            std::vector<std::filesystem::path> candidates;
            if (manifest_dir.filename() == "config")
                candidates.push_back(manifest_dir.parent_path() / manifest.input.nids_csv);
#ifdef DEFJAM_MANIFEST_PATH
            const std::filesystem::path in_tree =
                std::filesystem::path(DEFJAM_MANIFEST_PATH).parent_path().parent_path();
            candidates.push_back(in_tree / manifest.input.nids_csv);
#endif
            candidates.push_back(executable_directory / manifest.input.nids_csv);
            bool loaded = false;
            for (const auto &candidate : candidates) {
                std::error_code ec;
                if (!std::filesystem::is_regular_file(candidate, ec)) continue;
                runtime.nids().load_csv(candidate);
                std::cout << "  nid table:      " << std::filesystem::weakly_canonical(candidate, ec).string()
                          << "\n";
                loaded = true;
                break;
            }
            if (!loaded)
                std::cerr << "warning: NID table not found; missing imports will show raw NIDs\n";
        }

        defjam::install_profile(runtime, user_arena_start);
        defjam::install_starvation_preemption();
        defjam::raster_set_scan_runtime(runtime);
        defjam::raster_configure_side_split();
        defjam::install_progress_watchdog();
        defjam::install_memory_watch();
        defjam::install_dispatch_traps();
        defjam::install_dispatch_trace();

        // $gp is genuinely zero for this module: it was built without
        // small-data addressing, and .text contains no $gp-relative access.
        if (const auto module = elf.find_module_info(runtime.memory(), manifest.game.load_base)) {
            runtime.cpu().set_gpr(28, module->gp);
        } else {
            throw psprecomp::Error("PSP module info not found after relocation");
        }
        runtime.cpu().set_gpr(4, 0u);
        runtime.cpu().set_gpr(5, 0u);

        const std::uint64_t max_dispatches = configured_max_dispatches();
        // Opened before the guest runs, so a boot that fails early is something
        // to look at rather than a process that has already exited.
        defjam::window_start();
        std::cout << "  dispatch cap:   " << max_dispatches << "\n"
                  << (defjam::window_enabled() ? "\nRunning with a window...\n"
                                               : "\nRunning headless...\n") << std::flush;

        // A guest fault throws out of run(). The call history is the most
        // useful thing to have at that moment, so report it either way.
        std::string guest_fault;
#ifdef __APPLE__
        if (defjam::window_enabled()) {
            // AppKit owns the main thread, so on macOS the roles are the other
            // way round from Windows: the guest goes to a worker and this
            // thread stays here pumping the window. Without a window nothing
            // moves, so the headless path below is left exactly as it was.
            std::atomic<bool> finished{false};
            std::thread guest([&] {
                try {
                    runtime.run(elf.runtime_entry(manifest.game.load_base), max_dispatches);
                } catch (const std::exception &fault) {
                    guest_fault = fault.what();
                }
                finished.store(true, std::memory_order_release);
            });
            while (!finished.load(std::memory_order_acquire)) {
                defjam::window_pump();
                if (defjam::window_close_requested()) runtime.stop("the window was closed");
                std::this_thread::sleep_for(std::chrono::milliseconds(4));
            }
            guest.join();
            defjam::window_pump();
        } else
#endif
        try {
            runtime.run(elf.runtime_entry(manifest.game.load_base), max_dispatches);
        } catch (const std::exception &fault) {
            guest_fault = fault.what();
        }

        const defjam::HeadlessStats stats = defjam::headless_stats();
        defjam::report_headless_stats();
        std::cout << "\nStopped: " << (runtime.stop_reason().empty() ? "dispatch cap reached"
                                                                    : runtime.stop_reason()) << "\n"
                  << explain_stop_address(runtime, runtime.stop_reason())
                  << "  vblanks:            " << stats.vblanks << "\n"
                  << "  GE submissions:     " << stats.display_list_submissions << "\n"
                  << "  framebuffer sets:   " << stats.frame_buffer_sets << "\n"
                  << "  thread switches:    " << stats.thread_switches << "\n"
                  << "  live threads:       " << stats.live_threads << "\n"
                  << "  audio buffers:      " << stats.audio_buffers << ", "
                  << stats.audio_samples << " samples\n"
                  << "  guest time:         " << stats.virtual_time_us << " us\n";
        std::cout << defjam::ge_report();
        std::cout << defjam::vertex_report();
        std::cout << defjam::texture_report();
        // These two went missing when the branches were merged: the functions
        // stayed and the calls did not, so the GE audit quietly stopped being
        // printed.
        std::cout << defjam::flat_texture_report();
        std::cout << defjam::texture_function_split_report();
        std::cout << defjam::register_audit_report();
        std::cout << defjam::raster_report();
        std::cout << defjam::blend_report();
        std::cout << defjam::blend_correlation_report();
        std::cout << defjam::texture_function_report();
        std::cout << defjam::side_difference_report();
        std::cout << defjam::half_census_report();
        std::cout << defjam::missing_texture_report();
        std::cout << defjam::blend_state_report();
        std::cout << defjam::discard_state_report();
        std::cout << defjam::register_audit_report();
        std::cout << defjam::command_value_report();
        std::cout << defjam::window_report();
        std::cout << defjam::bank_report();
        if (const std::string dump = defjam::frame_dump_path(); !dump.empty()) {
            std::string dump_error;
            if (defjam::dump_display(runtime, dump, dump_error)) {
                std::cout << "  frame written:      " << dump << "\n";
            } else {
                std::cerr << "  frame not written:  " << dump_error << "\n";
            }
        }
        // After the frame dump, not before it: the dump is what triggers the
        // last resolve, and reporting first showed zero of them.
        std::cout << defjam::gpu_report();
        const defjam::IoStats io = defjam::io_stats();
        std::cout << "  file opens:         " << io.opens << " (" << io.failed_opens << " failed)\n"
                  << "  reads:              " << io.reads << ", " << io.bytes_read << " bytes\n"
                  << "  seeks / diropens:   " << io.seeks << " / " << io.dir_opens << "\n"
                  << "  device opens:       " << io.device_opens << ", " << io.device_reads
                  << " reads, " << io.device_bytes_read << " bytes\n"
                  << "  umd ioctls:         " << io.umd_ioctls << ", " << io.lbn_opens
                  << " raw-sector opens\n"
                  << "  medium queries:     " << io.medium_queries << "\n"
                  << "  open handles:       " << io.open_handles << "\n";
        if (io.disc_unreadable != 0u || io.disc_short_reads != 0u)
            std::cout << "  DISC SERVED ZEROES:  " << io.disc_unreadable
                      << " unreadable, " << io.disc_short_reads << " short reads\n";
        if (!defjam::last_failed_open().empty())
            std::cout << "  last failed open:   " << defjam::last_failed_open() << "\n";
        const defjam::UtilityStats utility = defjam::utility_stats();
        std::cout << "  savedata dialogs:   " << utility.savedata_dialogs << " ("
                  << utility.saves_loaded << " loaded, " << utility.loads_with_no_data
                  << " with no data, " << utility.saves_written << " written)\n"
                  << "  message dialogs:    " << utility.message_dialogs << "\n";
        const defjam::MpegStats mpeg = defjam::mpeg_stats();
        if (mpeg.streams_opened != 0u) {
            std::cout << "  mpeg streams:       " << mpeg.streams_opened << ", "
                      << mpeg.ringbuffer_callbacks << " ringbuffer fills, "
                      << mpeg.packets_put << " packets\n"
                      << "  mpeg access units:  " << mpeg.video_units << " video, "
                      << mpeg.audio_units << " audio\n"
                      << "  mpeg refused:       " << mpeg.video_units_refused << " video, "
                      << mpeg.audio_units_refused << " audio; still queued "
                      << mpeg.video_units_queued << " video, " << mpeg.audio_units_queued
                      << " audio\n"
                      << "  mpeg decoded:       " << mpeg.frames_decoded << " frames, "
                      << mpeg.audio_blocks_decoded << " audio blocks\n";
        }
        const defjam::AtracStats atrac = defjam::atrac_stats();
        if (atrac.streams_opened != 0u || atrac.containers_rejected != 0u) {
            std::cout << "  atrac streams:      " << atrac.streams_opened << " opened, "
                      << atrac.streams_released << " released, " << atrac.open_streams
                      << " still open\n"
                      << "  atrac frames:       " << atrac.frames_decoded << " delivered, "
                      << atrac.frames_past_end << " asked for past the end\n";
            if (atrac.containers_rejected != 0u)
                std::cout << "  atrac rejected:     " << atrac.containers_rejected
                          << " containers this profile could not read\n";
            if (atrac.decoder_missing)
                std::cout << "  atrac decoder:      none in this build, so the stream is silent\n";
        }
        std::cout << "  live thread states:\n" << defjam::thread_report();
        runtime.report_hle_histogram();
        if (!guest_fault.empty()) {
            std::cerr << "\nGuest fault: " << guest_fault << "\n";
            defjam::runtime_log_line("guest fault: " + guest_fault);
            defjam::dump_dispatch_trace(80u);
        } else if (defjam::dispatch_trace_enabled()) {
            // A run that ends without faulting is still worth tracing: the
            // interesting question is often what the guest settled into.
            defjam::dump_dispatch_trace(200u);
        }
        if (std::string range; defjam::dump_guest_range(runtime, range)) {
            std::cout << "  range written:      " << range << "\n";
        } else if (!range.empty()) {
            std::cerr << "  range not written:  " << range << "\n";
        }
        defjam::runtime_log_shutdown();
        // The window outlives the guest by design: a run that stopped on its
        // own leaves the last frame up until it is closed, so there is
        // something to look at rather than a window that vanishes with the
        // report. Closing it, or Escape, returns here.
        if (defjam::window_enabled() && !defjam::window_close_requested()) {
            defjam::window_set_status("stopped - press Escape to close");
            std::cout << "\nThe window is still open. Close it or press Escape to exit.\n"
                      << std::flush;
            defjam::window_wait_for_close();
        }
        defjam::window_shutdown();
        if (!guest_fault.empty() || !runtime.stop_reason().empty()) return kExitGuestStopped;
#else
        std::cout << "\nProfile skeleton only: no generated corpus is linked yet, so there is "
                     "nothing to run.\n";
#endif
        return kExitOk;
    } catch (const std::exception &e) {
        std::cerr << "DefJamNative error: " << e.what() << "\n";
        return kExitError;
    }
}

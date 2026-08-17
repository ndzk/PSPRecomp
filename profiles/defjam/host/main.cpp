#include "defjam_config.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/elf32.hpp"
#include "psprecomp/runtime.hpp"
#include "psprecomp/sha256.hpp"

#include <algorithm>
#include <filesystem>
#include <iostream>
#include <string>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
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
                  << "  user arena:     " << psprecomp::hex32(user_arena_start) << "\n";
        if (runtime.function_count() == 0u)
            throw psprecomp::Error("The generated corpus registered no functions");
        std::cout << "\nCorpus linked and registered. No HLE or renderer yet, so nothing is executed.\n";
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

#pragma once

#include <cstdint>
#include <filesystem>
#include <string>
#include <string_view>
#include <vector>

namespace defjam {

// Identity of the single executable this profile supports.
struct GameIdentity {
    std::string name;
    std::string disc_id;
    std::string region;
    std::string disc_version;
    std::string psp_system_ver;
    std::string module;
    std::uint32_t ram_mb{32u};
    std::uint32_t load_base{0x08804000u};
    std::string expected_sha256;
};

struct InputPaths {
    std::string executable;
    std::string game_root;
    std::string nids_csv;
};

struct OutputPaths {
    std::string report_json;
    std::string generated_dir;
};

// The framework does not enforce these; this profile does, so a manifest that
// silently relaxes them cannot ship.
struct CodegenPolicy {
    std::string missing_function{"stop"};
    std::string unsupported_instruction{"stop"};
    bool allow_interpreter_fallback{false};
    bool allow_jit_fallback{false};
};

struct ProfileManifest {
    GameIdentity game;
    InputPaths input;
    OutputPaths output;
    CodegenPolicy policy;
    std::filesystem::path source_path;
    bool loaded_from_file{false};
    // Non-fatal complaints (unknown key, unknown section, malformed value).
    // Structural problems throw instead.
    std::vector<std::string> warnings;
};

// Parses the small TOML subset the manifest uses: [section] headers,
// key = "string" | integer | true | false, '#' comments. Throws
// psprecomp::Error on a structurally invalid document or a policy value this
// profile refuses to run under.
[[nodiscard]] ProfileManifest parse_profile_manifest(std::string_view text,
                                                     std::filesystem::path source_path = {});

// Reads and parses the manifest. Throws if the file cannot be opened.
[[nodiscard]] ProfileManifest load_profile_manifest(const std::filesystem::path &path);

// Locates the manifest: PSPRECOMP_DEFJAM_CONFIG if set, else
// <executable_directory>/defjam_ulus10100.toml, else the in-tree
// config/defjam_ulus10100.toml relative to the executable directory.
[[nodiscard]] std::filesystem::path find_profile_manifest(
    const std::filesystem::path &executable_directory);

struct ExecutableLookup {
    // Empty when nothing was found; `probed` then lists every path tried so the
    // failure can say where it looked rather than just that it failed.
    std::filesystem::path path;
    std::vector<std::filesystem::path> probed;
    [[nodiscard]] bool found() const noexcept { return !path.empty(); }
};

// Resolves [input] executable. The manifest may be the in-tree copy under
// config/ or the copy staged beside the executable, and those imply different
// bases, so candidates are probed rather than derived from one assumption.
[[nodiscard]] ExecutableLookup locate_game_executable(
    const ProfileManifest &manifest, const std::filesystem::path &executable_directory);

enum class ExecutableVerdict {
    Match,
    Mismatch,
    NoExpectedHash,
};

struct ExecutableCheck {
    ExecutableVerdict verdict{ExecutableVerdict::NoExpectedHash};
    std::string expected;
    std::string actual;
    std::string message;
    [[nodiscard]] bool ok() const noexcept { return verdict == ExecutableVerdict::Match; }
};

// Pure comparison so it is testable without touching the filesystem.
// Comparison is case-insensitive on the hex digits.
[[nodiscard]] ExecutableCheck check_executable_hash(const ProfileManifest &manifest,
                                                    std::string_view actual_sha256);

// True when the operator has explicitly opted out of the identity check.
// Default is to refuse to run against an unverified executable.
[[nodiscard]] bool unverified_executable_allowed();

} // namespace defjam

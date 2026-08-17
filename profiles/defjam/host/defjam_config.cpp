#include "defjam_config.hpp"

#include "psprecomp/common.hpp"

#include <algorithm>
#include <cctype>
#include <charconv>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <sstream>

namespace defjam {
namespace {

std::string trim(std::string_view text) {
    const auto is_space = [](unsigned char c) { return std::isspace(c) != 0; };
    std::size_t begin = 0;
    while (begin < text.size() && is_space(static_cast<unsigned char>(text[begin]))) ++begin;
    std::size_t end = text.size();
    while (end > begin && is_space(static_cast<unsigned char>(text[end - 1]))) --end;
    return std::string(text.substr(begin, end - begin));
}

std::string to_lower(std::string_view text) {
    std::string out(text);
    std::transform(out.begin(), out.end(), out.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return out;
}

// Removes a trailing '#' comment while respecting a double-quoted value, so a
// '#' inside a string stays part of the string.
std::string_view strip_inline_comment(std::string_view line) {
    bool in_quotes = false;
    for (std::size_t i = 0; i < line.size(); ++i) {
        const char c = line[i];
        if (c == '"' && (i == 0 || line[i - 1] != '\\')) in_quotes = !in_quotes;
        else if (c == '#' && !in_quotes) return line.substr(0, i);
    }
    return line;
}

bool parse_bool(const std::string &text, bool &out) {
    const std::string lowered = to_lower(text);
    if (lowered == "true") { out = true; return true; }
    if (lowered == "false") { out = false; return true; }
    return false;
}

bool parse_u32(const std::string &text, std::uint32_t &out) {
    std::string body = text;
    int base = 10;
    if (body.starts_with("0x") || body.starts_with("0X")) {
        body.erase(0, 2);
        base = 16;
    }
    if (body.empty()) return false;
    std::uint32_t value{};
    const char *begin = body.data();
    const char *end = begin + body.size();
    const auto result = std::from_chars(begin, end, value, base);
    if (result.ec != std::errc{} || result.ptr != end) return false;
    out = value;
    return true;
}

// A TOML value is either a quoted string or a bare literal. Returns the text
// with quotes removed and reports which form it was.
struct RawValue {
    std::string text;
    bool quoted{false};
};

RawValue split_value(const std::string &text) {
    if (text.size() >= 2u && text.front() == '"' && text.back() == '"') {
        return RawValue{text.substr(1, text.size() - 2u), true};
    }
    return RawValue{text, false};
}

bool is_hex_digits(std::string_view text) {
    return !text.empty() && std::all_of(text.begin(), text.end(), [](unsigned char c) {
        return std::isxdigit(c) != 0;
    });
}

} // namespace

ProfileManifest parse_profile_manifest(std::string_view text, std::filesystem::path source_path) {
    ProfileManifest manifest;
    manifest.source_path = std::move(source_path);

    // Strip a UTF-8 BOM if present.
    if (text.size() >= 3u && static_cast<unsigned char>(text[0]) == 0xEFu &&
        static_cast<unsigned char>(text[1]) == 0xBBu &&
        static_cast<unsigned char>(text[2]) == 0xBFu) {
        text.remove_prefix(3);
    }

    std::string section;
    std::size_t line_number = 0;
    std::istringstream stream{std::string(text)};
    std::string raw_line;
    bool saw_policy_missing_function = false;
    bool saw_policy_unsupported_instruction = false;

    while (std::getline(stream, raw_line)) {
        ++line_number;
        if (!raw_line.empty() && raw_line.back() == '\r') raw_line.pop_back();
        const std::string line = trim(strip_inline_comment(raw_line));
        if (line.empty()) continue;

        if (line.front() == '[') {
            if (line.back() != ']') {
                throw psprecomp::Error("defjam manifest line " + std::to_string(line_number) +
                                       ": malformed section header");
            }
            section = to_lower(trim(line.substr(1, line.size() - 2u)));
            if (section != "game" && section != "input" && section != "output" &&
                section != "policy") {
                manifest.warnings.push_back("line " + std::to_string(line_number) +
                                            ": unknown section [" + section + "]");
            }
            continue;
        }

        const auto equals = line.find('=');
        if (equals == std::string::npos) {
            throw psprecomp::Error("defjam manifest line " + std::to_string(line_number) +
                                   ": expected key = value");
        }
        const std::string key = to_lower(trim(line.substr(0, equals)));
        const RawValue value = split_value(trim(line.substr(equals + 1u)));
        const auto warn = [&](const std::string &why) {
            manifest.warnings.push_back("line " + std::to_string(line_number) + ": " + why);
        };

        if (section == "game") {
            if (key == "name") manifest.game.name = value.text;
            else if (key == "disc_id") manifest.game.disc_id = value.text;
            else if (key == "region") manifest.game.region = value.text;
            else if (key == "disc_version") manifest.game.disc_version = value.text;
            else if (key == "psp_system_ver") manifest.game.psp_system_ver = value.text;
            else if (key == "module") manifest.game.module = value.text;
            else if (key == "ram_mb") {
                if (!parse_u32(value.text, manifest.game.ram_mb) || manifest.game.ram_mb == 0u ||
                    manifest.game.ram_mb > 64u) {
                    warn("ram_mb must be 1..64, keeping " + std::to_string(manifest.game.ram_mb));
                }
            } else if (key == "load_base") {
                if (!parse_u32(value.text, manifest.game.load_base)) {
                    warn("load_base is not a number, keeping the default");
                }
            } else if (key == "expected_sha256") {
                const std::string lowered = to_lower(value.text);
                if (lowered.size() != 64u || !is_hex_digits(lowered)) {
                    throw psprecomp::Error("defjam manifest line " + std::to_string(line_number) +
                                           ": expected_sha256 must be 64 hex digits");
                }
                manifest.game.expected_sha256 = lowered;
            } else {
                warn("unknown key [game] " + key);
            }
        } else if (section == "input") {
            if (key == "executable") manifest.input.executable = value.text;
            else if (key == "game_root") manifest.input.game_root = value.text;
            else if (key == "nids_csv") manifest.input.nids_csv = value.text;
            else warn("unknown key [input] " + key);
        } else if (section == "output") {
            if (key == "report_json") manifest.output.report_json = value.text;
            else if (key == "generated_dir") manifest.output.generated_dir = value.text;
            else warn("unknown key [output] " + key);
        } else if (section == "policy") {
            // This profile refuses to run under a relaxed policy. The framework
            // does not enforce these values, so if the manifest is the only
            // place they appear they have to be checked here or they are
            // decoration.
            if (key == "missing_function" || key == "unsupported_instruction") {
                const std::string lowered = to_lower(value.text);
                if (lowered != "stop") {
                    throw psprecomp::Error("defjam manifest line " + std::to_string(line_number) +
                                           ": policy " + key + " must be \"stop\", got \"" +
                                           value.text + "\"");
                }
                if (key == "missing_function") {
                    manifest.policy.missing_function = lowered;
                    saw_policy_missing_function = true;
                } else {
                    manifest.policy.unsupported_instruction = lowered;
                    saw_policy_unsupported_instruction = true;
                }
            } else if (key == "allow_interpreter_fallback" || key == "allow_jit_fallback") {
                bool parsed = false;
                if (!parse_bool(to_lower(value.text), parsed)) {
                    throw psprecomp::Error("defjam manifest line " + std::to_string(line_number) +
                                           ": policy " + key + " must be true or false");
                }
                if (parsed) {
                    throw psprecomp::Error("defjam manifest line " + std::to_string(line_number) +
                                           ": policy " + key +
                                           " must be false; this profile has no fallback path");
                }
                if (key == "allow_interpreter_fallback") manifest.policy.allow_interpreter_fallback = false;
                else manifest.policy.allow_jit_fallback = false;
            } else {
                warn("unknown key [policy] " + key);
            }
        } else if (section.empty()) {
            throw psprecomp::Error("defjam manifest line " + std::to_string(line_number) +
                                   ": key outside any section");
        } else {
            warn("ignored key in unknown section: " + key);
        }
    }

    if (manifest.game.expected_sha256.empty()) {
        throw psprecomp::Error("defjam manifest is missing [game] expected_sha256; the profile "
                               "supports exactly one executable identity");
    }
    if (!saw_policy_missing_function || !saw_policy_unsupported_instruction) {
        throw psprecomp::Error("defjam manifest must state [policy] missing_function and "
                               "unsupported_instruction explicitly");
    }
    return manifest;
}

ProfileManifest load_profile_manifest(const std::filesystem::path &path) {
    std::ifstream in(path, std::ios::binary);
    if (!in) throw psprecomp::Error("Cannot open defjam manifest: " + path.string());
    std::ostringstream buffer;
    buffer << in.rdbuf();
    ProfileManifest manifest = parse_profile_manifest(buffer.str(), path);
    manifest.loaded_from_file = true;
    return manifest;
}

std::filesystem::path find_profile_manifest(const std::filesystem::path &executable_directory) {
    if (const char *override_path = std::getenv("PSPRECOMP_DEFJAM_CONFIG");
        override_path != nullptr && *override_path != '\0') {
        return std::filesystem::path(override_path);
    }
    const std::filesystem::path beside = executable_directory / "defjam_ulus10100.toml";
    std::error_code ec;
    if (std::filesystem::is_regular_file(beside, ec)) return beside;

    // Development layout: run straight out of the build tree against the
    // in-tree manifest.
    for (const char *relative : {"../../../profiles/defjam/config/defjam_ulus10100.toml",
                                 "../../profiles/defjam/config/defjam_ulus10100.toml",
                                 "../profiles/defjam/config/defjam_ulus10100.toml"}) {
        const std::filesystem::path candidate = executable_directory / relative;
        if (std::filesystem::is_regular_file(candidate, ec)) {
            return std::filesystem::weakly_canonical(candidate, ec);
        }
    }
    return beside;
}

ExecutableLookup locate_game_executable(const ProfileManifest &manifest,
                                        const std::filesystem::path &executable_directory) {
    ExecutableLookup lookup;
    if (manifest.input.executable.empty()) return lookup;

    const std::filesystem::path relative = manifest.input.executable;
    if (relative.is_absolute()) {
        lookup.probed.push_back(relative);
        std::error_code ec;
        if (std::filesystem::is_regular_file(relative, ec)) lookup.path = relative;
        return lookup;
    }

    std::vector<std::filesystem::path> bases;
    // In-tree manifest lives at <profile>/config/<name>.toml, so the profile
    // directory is two levels up. The copy staged beside the executable has no
    // such structure, hence the other candidates.
    const std::filesystem::path manifest_dir = manifest.source_path.parent_path();
    if (manifest_dir.filename() == "config") bases.push_back(manifest_dir.parent_path());
    bases.push_back(executable_directory);
    bases.push_back(executable_directory.parent_path());
    std::error_code cwd_ec;
    const std::filesystem::path cwd = std::filesystem::current_path(cwd_ec);
    if (!cwd_ec) bases.push_back(cwd);
#ifdef DEFJAM_MANIFEST_PATH
    // Development convenience: running straight out of the build tree, the
    // manifest that gets found is the copy staged beside the executable, which
    // carries no profile-directory context. The build-time path to the in-tree
    // manifest does. In a packaged build this path does not exist and the
    // candidate simply fails to match.
    {
        const std::filesystem::path in_tree_manifest{DEFJAM_MANIFEST_PATH};
        const std::filesystem::path in_tree_config = in_tree_manifest.parent_path();
        if (in_tree_config.filename() == "config") bases.push_back(in_tree_config.parent_path());
    }
#endif

    for (const std::filesystem::path &base : bases) {
        if (base.empty()) continue;
        std::filesystem::path candidate = base / relative;
        std::error_code ec;
        candidate = std::filesystem::weakly_canonical(candidate, ec);
        if (ec) candidate = base / relative;
        if (std::find(lookup.probed.begin(), lookup.probed.end(), candidate) != lookup.probed.end())
            continue;
        lookup.probed.push_back(candidate);
        std::error_code exists_ec;
        if (lookup.path.empty() && std::filesystem::is_regular_file(candidate, exists_ec)) {
            lookup.path = candidate;
        }
    }
    return lookup;
}

ExecutableCheck check_executable_hash(const ProfileManifest &manifest,
                                      std::string_view actual_sha256) {
    ExecutableCheck check;
    check.expected = manifest.game.expected_sha256;
    check.actual = to_lower(actual_sha256);

    if (check.expected.empty()) {
        check.verdict = ExecutableVerdict::NoExpectedHash;
        check.message = "The manifest states no expected SHA-256, so the executable cannot be identified.";
        return check;
    }
    if (check.expected == check.actual) {
        check.verdict = ExecutableVerdict::Match;
        check.message = "Executable matches the supported " + manifest.game.disc_id + " release.";
        return check;
    }

    check.verdict = ExecutableVerdict::Mismatch;
    std::ostringstream message;
    message << "This executable is not the release the defjam profile supports.\n"
            << "  expected sha256 " << check.expected << '\n'
            << "  actual   sha256 " << check.actual << '\n'
            << "The profile supports exactly one executable identity: "
            << (manifest.game.name.empty() ? std::string("<unnamed>") : manifest.game.name)
            << ", " << manifest.game.disc_id;
    if (!manifest.game.disc_version.empty()) message << ", version " << manifest.game.disc_version;
    message << ".\nThe generated AOT corpus is produced from that exact image and will not be "
               "correct for another build.\nSet PSPRECOMP_DEFJAM_ALLOW_UNVERIFIED=1 only for "
               "development.";
    check.message = message.str();
    return check;
}

bool unverified_executable_allowed() {
    const char *text = std::getenv("PSPRECOMP_DEFJAM_ALLOW_UNVERIFIED");
    return text != nullptr && *text != '\0' && std::strcmp(text, "0") != 0;
}

} // namespace defjam

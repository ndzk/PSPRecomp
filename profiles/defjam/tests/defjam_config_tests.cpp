#include "defjam_config.hpp"
#include "defjam_io.hpp"

#include "psprecomp/common.hpp"

#include <filesystem>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {

void require(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}

// Returns true when parsing the document threw, which is how the profile
// rejects a manifest it refuses to run under.
bool rejects(std::string_view text) {
    try {
        (void)defjam::parse_profile_manifest(text);
        return false;
    } catch (const std::exception &) {
        return true;
    }
}

constexpr const char *kMinimal = R"([game]
expected_sha256 = "27C28EFCC59327C1CD9CCC84A0D7D8E2356002B7026CFA130A43D944EFB4B27A"

[policy]
missing_function = "stop"
unsupported_instruction = "stop"
)";

void test_parses_the_shipped_manifest() {
    const std::filesystem::path path = DEFJAM_MANIFEST_PATH;
    require(std::filesystem::is_regular_file(path), "shipped manifest is missing");
    const auto manifest = defjam::load_profile_manifest(path);

    require(manifest.loaded_from_file, "manifest did not report loading from a file");
    require(manifest.warnings.empty(), "the shipped manifest produced warnings");

    require(manifest.game.disc_id == "ULUS-10100", "disc_id did not parse");
    require(manifest.game.region == "NTSC-U", "region did not parse");
    require(manifest.game.disc_version == "1.01", "disc_version did not parse");
    require(manifest.game.module == "Rw37Skel", "module name did not parse");
    require(manifest.game.ram_mb == 32u, "ram_mb did not parse");
    require(manifest.game.load_base == 0x08804000u, "load_base did not parse as hex");
    require(manifest.game.expected_sha256 ==
                "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a",
            "expected_sha256 did not parse or was not lowercased");
    require(manifest.game.name.find("Def Jam") != std::string::npos, "title did not parse");

    require(!manifest.input.executable.empty(), "input executable path is empty");
    require(!manifest.input.game_root.empty(), "input game_root is empty");
    require(!manifest.output.generated_dir.empty(), "output generated_dir is empty");

    require(manifest.policy.missing_function == "stop", "policy missing_function is not stop");
    require(manifest.policy.unsupported_instruction == "stop",
            "policy unsupported_instruction is not stop");
    require(!manifest.policy.allow_interpreter_fallback, "interpreter fallback is not disabled");
    require(!manifest.policy.allow_jit_fallback, "jit fallback is not disabled");
}

void test_expected_hash_checking() {
    const auto manifest = defjam::parse_profile_manifest(kMinimal);
    const std::string expected =
        "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a";

    const auto match = defjam::check_executable_hash(manifest, expected);
    require(match.ok(), "matching hash was rejected");
    require(match.verdict == defjam::ExecutableVerdict::Match, "matching hash verdict is wrong");

    // The manifest may be written in either case; comparison must not care.
    const auto upper = defjam::check_executable_hash(
        manifest, "27C28EFCC59327C1CD9CCC84A0D7D8E2356002B7026CFA130A43D944EFB4B27A");
    require(upper.ok(), "hash comparison was case sensitive");

    const auto wrong = defjam::check_executable_hash(
        manifest, "0000000000000000000000000000000000000000000000000000000000000000");
    require(!wrong.ok(), "a mismatching hash was accepted");
    require(wrong.verdict == defjam::ExecutableVerdict::Mismatch, "mismatch verdict is wrong");
    require(wrong.message.find(expected) != std::string::npos,
            "mismatch message does not name the expected hash");
    require(wrong.message.find("ULUS") != std::string::npos ||
                wrong.message.find("supports exactly one") != std::string::npos,
            "mismatch message does not explain what is supported");

    // A single flipped digit must not pass.
    std::string near_miss = expected;
    near_miss.back() = near_miss.back() == 'a' ? 'b' : 'a';
    require(!defjam::check_executable_hash(manifest, near_miss).ok(),
            "a hash differing by one digit was accepted");
}

void test_policy_is_enforced_not_decorative() {
    require(rejects(R"([game]
expected_sha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"
[policy]
missing_function = "continue"
unsupported_instruction = "stop"
)"),
            "a relaxed missing_function policy was accepted");

    require(rejects(R"([game]
expected_sha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"
[policy]
missing_function = "stop"
unsupported_instruction = "warn"
)"),
            "a relaxed unsupported_instruction policy was accepted");

    require(rejects(R"([game]
expected_sha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"
[policy]
missing_function = "stop"
unsupported_instruction = "stop"
allow_jit_fallback = true
)"),
            "an enabled jit fallback was accepted");

    require(rejects(R"([game]
expected_sha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"
[policy]
missing_function = "stop"
unsupported_instruction = "stop"
allow_interpreter_fallback = true
)"),
            "an enabled interpreter fallback was accepted");
}

void test_identity_is_mandatory() {
    require(rejects(R"([game]
name = "no hash here"
[policy]
missing_function = "stop"
unsupported_instruction = "stop"
)"),
            "a manifest without expected_sha256 was accepted");

    require(rejects(R"([game]
expected_sha256 = "not a hash"
[policy]
missing_function = "stop"
unsupported_instruction = "stop"
)"),
            "a malformed expected_sha256 was accepted");

    require(rejects(R"([game]
expected_sha256 = "27c28efc"
[policy]
missing_function = "stop"
unsupported_instruction = "stop"
)"),
            "a truncated expected_sha256 was accepted");

    // Stating the policy is mandatory; silence must not be read as agreement.
    require(rejects(R"([game]
expected_sha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"
)"),
            "a manifest with no [policy] block was accepted");
}

void test_syntax_handling() {
    // Unknown keys and sections warn rather than abort, so a newer manifest
    // stays loadable by an older build.
    const auto manifest = defjam::parse_profile_manifest(R"([game]
expected_sha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"  # trailing comment
unknown_key = "value"

[unknown_section]
whatever = 1

[policy]
missing_function = "stop"
unsupported_instruction = "stop"
)");
    require(manifest.warnings.size() >= 2u, "unknown key and section did not warn");
    require(manifest.game.expected_sha256 ==
                "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a",
            "an inline comment corrupted the value");

    // A '#' inside a quoted string is data, not a comment.
    const auto hashed = defjam::parse_profile_manifest(R"([game]
name = "a # b"
expected_sha256 = "27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a"
[policy]
missing_function = "stop"
unsupported_instruction = "stop"
)");
    require(hashed.game.name == "a # b", "a quoted '#' was treated as a comment");

    // CRLF documents must parse identically.
    const auto crlf = defjam::parse_profile_manifest(
        "[game]\r\nexpected_sha256 = "
        "\"27c28efcc59327c1cd9ccc84a0d7d8e2356002b7026cfa130a43d944efb4b27a\"\r\n\r\n"
        "[policy]\r\nmissing_function = \"stop\"\r\nunsupported_instruction = \"stop\"\r\n");
    require(crlf.game.expected_sha256.size() == 64u, "CRLF manifest did not parse");
    require(crlf.warnings.empty(), "CRLF manifest produced warnings");

    require(rejects("key_without_section = 1\n"), "a key outside any section was accepted");
    require(rejects("[game\nexpected_sha256 = \"x\"\n"), "a malformed section header was accepted");
}

// The raw-sector path form is how the title asks for content by disc position.
// Misparsing it sends every such read to the wrong place, and a title that gets
// sector zero looks exactly like one that is simply not loading.
void test_disc_sector_paths() {
    std::uint32_t sector = 0xFFFFFFFFu;
    std::uint32_t size = 0xFFFFFFFFu;

    require(defjam::parse_disc_sector_path("disc0:/sce_lbn0x0000_size0x1f78", sector, size),
            "the observed sce_lbn form was rejected");
    require(sector == 0u && size == 0x1f78u, "the observed sce_lbn form parsed to wrong values");

    // The real request this title makes once directory entries carry sectors.
    require(defjam::parse_disc_sector_path("disc0:/sce_lbn0xA89A0_size0x1F78", sector, size),
            "an upper-case hex sce_lbn form was rejected");
    require(sector == 0xA89A0u && size == 0x1F78u, "upper-case hex parsed to wrong values");

    // The prefix is optional on both fields.
    require(defjam::parse_disc_sector_path("sce_lbn10_size100", sector, size),
            "an unprefixed sce_lbn form was rejected");
    require(sector == 0x10u && size == 0x100u, "unprefixed fields are not hexadecimal");

    require(!defjam::parse_disc_sector_path("disc0:/PSP_GAME/USRDIR/main_all.dat", sector, size),
            "an ordinary path was treated as a sector request");
    require(!defjam::parse_disc_sector_path("disc0:/sce_lbn0x10", sector, size),
            "a path with no size field was accepted");
}

} // namespace

int main() {
    try {
        test_parses_the_shipped_manifest();
        test_expected_hash_checking();
        test_policy_is_enforced_not_decorative();
        test_identity_is_mandatory();
        test_syntax_handling();
        test_disc_sector_paths();
        std::cout << "All defjam config tests passed.\n";
        return 0;
    } catch (const std::exception &exception) {
        std::cerr << "defjam config test failure: " << exception.what() << "\n";
        return 1;
    }
}

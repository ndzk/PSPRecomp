#include "defjam_config.hpp"
#include "defjam_decoder.hpp"
#include "defjam_atrac.hpp"
#include "defjam_disc.hpp"
#include "defjam_ge.hpp"
#include "defjam_profile.hpp"
#include "defjam_io.hpp"
#include "defjam_mpeg.hpp"
#include "defjam_utility.hpp"

#include "psprecomp/common.hpp"

#include <filesystem>
#include <fstream>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

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

// A utility dialog is a state machine the guest drives from its own loop, and
// the loop only terminates because reading a status advances it. Getting this
// wrong does not fail loudly: the title spins on GetStatus forever.
void test_utility_dialog_sequence() {
    defjam::UtilityDialog dialog;

    // Before anything starts, the answer is "no dialog", and it stays that way
    // however often it is asked.
    require(dialog.read() == 0u, "an unopened dialog did not report NONE");
    require(dialog.read() == 0u, "reading NONE changed the status");

    dialog.begin();
    require(dialog.read() == 1u, "a started dialog did not report INITIALIZE");
    require(dialog.read() == 2u, "INITIALIZE did not advance to RUNNING when read");
    require(dialog.read() == 2u, "RUNNING advanced without an update");

    dialog.update();
    require(dialog.read() == 3u, "an updated dialog did not report FINISHED");
    require(dialog.read() == 3u, "FINISHED advanced on its own");

    dialog.shutdown();
    require(dialog.read() == 4u, "a shut down dialog did not report SHUTDOWN");
    require(dialog.read() == 0u, "SHUTDOWN did not advance to NONE when read");

    // An update outside RUNNING must not move anything, or a guest that calls
    // Update defensively would skip states it needs to observe.
    defjam::UtilityDialog idle;
    idle.update();
    require(idle.read() == 0u, "updating an idle dialog started it");
    idle.begin();
    idle.update();
    require(idle.read() == 1u, "updating an INITIALIZE dialog skipped RUNNING");
}

// Builds a PSMF header the way the container specifies it: big-endian fields,
// a stream count and a table of 16-byte entries.
std::vector<std::uint8_t> make_psmf_header(std::uint32_t stream_offset, std::uint32_t stream_size) {
    std::vector<std::uint8_t> header(2048u, 0u);
    const char magic[] = "PSMF0014";
    for (std::size_t i = 0; i < 8; ++i) header[i] = static_cast<std::uint8_t>(magic[i]);
    const auto put_be32 = [&header](std::size_t at, std::uint32_t value) {
        header[at] = static_cast<std::uint8_t>(value >> 24);
        header[at + 1] = static_cast<std::uint8_t>(value >> 16);
        header[at + 2] = static_cast<std::uint8_t>(value >> 8);
        header[at + 3] = static_cast<std::uint8_t>(value);
    };
    put_be32(0x08, stream_offset);
    put_be32(0x0C, stream_size);
    header[0x80] = 0x00;
    header[0x81] = 0x02;       // two streams
    header[0x82] = 0xE0;       // video
    header[0x82 + 16] = 0xBD;  // audio, on private stream 1
    return header;
}

void test_psmf_header() {
    const auto header = make_psmf_header(0x800u, 0x2C000u);
    const defjam::PsmfHeader parsed = defjam::parse_psmf_header(header.data(), header.size());
    require(parsed.valid, "a well-formed PSMF header was rejected");
    require(parsed.version == 14u, "the ASCII version digits were misread");
    require(parsed.stream_offset == 0x800u, "stream offset was not read big-endian");
    require(parsed.stream_size == 0x2C000u, "stream size was not read big-endian");
    require(parsed.stream_count == 2u, "stream count was misread");
    require(parsed.has_video && parsed.has_audio, "the stream table was not walked");

    // Anything that is not a PSMF must come back invalid rather than parsed
    // into nonsense, because the guest hands this whatever buffer it likes.
    std::vector<std::uint8_t> junk(2048u, 0x5Au);
    require(!defjam::parse_psmf_header(junk.data(), junk.size()).valid,
            "a buffer with no PSMF magic was accepted");
    auto bad_version = header;
    bad_version[5] = 'x';
    require(!defjam::parse_psmf_header(bad_version.data(), bad_version.size()).valid,
            "a non-numeric version was accepted");
    require(!defjam::parse_psmf_header(header.data(), 16u).valid,
            "a truncated header was accepted");
}

// One PES packet, optionally carrying a presentation timestamp.
void append_pes(std::vector<std::uint8_t> &out, std::uint8_t stream_id,
                const std::vector<std::uint8_t> &payload, bool with_pts, std::uint64_t pts) {
    std::vector<std::uint8_t> header;
    header.push_back(0x80);                                    // flags byte one
    header.push_back(static_cast<std::uint8_t>(with_pts ? 0x80 : 0x00));
    header.push_back(static_cast<std::uint8_t>(with_pts ? 5 : 0));
    if (with_pts) {
        header.push_back(static_cast<std::uint8_t>(0x21 | ((pts >> 29) & 0x0E)));
        header.push_back(static_cast<std::uint8_t>(pts >> 22));
        header.push_back(static_cast<std::uint8_t>(((pts >> 14) & 0xFE) | 1));
        header.push_back(static_cast<std::uint8_t>(pts >> 7));
        header.push_back(static_cast<std::uint8_t>(((pts << 1) & 0xFE) | 1));
    }
    const std::size_t length = header.size() + payload.size();
    out.push_back(0x00);
    out.push_back(0x00);
    out.push_back(0x01);
    out.push_back(stream_id);
    out.push_back(static_cast<std::uint8_t>(length >> 8));
    out.push_back(static_cast<std::uint8_t>(length));
    out.insert(out.end(), header.begin(), header.end());
    out.insert(out.end(), payload.begin(), payload.end());
}

void test_program_stream_demuxer() {
    // Two video access units, the second beginning where a new timestamp
    // appears, plus one audio unit whose first four payload bytes are the
    // private-stream header the elementary stream does not include.
    std::vector<std::uint8_t> stream;
    append_pes(stream, 0xE0, {0x11, 0x22}, true, 90000);
    append_pes(stream, 0xE0, {0x33}, false, 0);
    append_pes(stream, 0xBD, {0xAA, 0xAA, 0xAA, 0xAA, 0x0F, 0xD0}, true, 90000);
    append_pes(stream, 0xE0, {0x44, 0x55}, true, 93000);

    defjam::ProgramStreamDemuxer demuxer;
    demuxer.append(stream.data(), stream.size());

    require(demuxer.has_video(), "no video access unit was produced");
    const defjam::AccessUnit first = demuxer.take_video();
    require(first.data.size() == 3u, "continuation packets were not joined to the unit");
    require(first.data[0] == 0x11 && first.data[2] == 0x33, "payload bytes were reordered");
    require(first.has_timestamp && first.pts == 90000u, "the 33-bit timestamp was misdecoded");

    // The last unit is still open until the stream is flushed, which is what
    // stops trailing data being dropped at end of file.
    require(!demuxer.has_video(), "an unterminated unit was emitted early");
    demuxer.flush();
    require(demuxer.has_video(), "flush did not emit the trailing unit");
    const defjam::AccessUnit second = demuxer.take_video();
    require(second.data.size() == 2u && second.pts == 93000u, "the second unit is wrong");

    require(demuxer.has_audio(), "no audio access unit was produced");
    const defjam::AccessUnit audio = demuxer.take_audio();
    require(audio.data.size() == 2u, "the private-stream header was not skipped");
    require(audio.data[0] == 0x0F && audio.data[1] == 0xD0, "audio payload was mistrimmed");

    // Feeding the same stream one byte at a time must produce the same result,
    // since packets arrive split across ring buffer fills.
    defjam::ProgramStreamDemuxer piecemeal;
    for (std::uint8_t byte : stream) piecemeal.append(&byte, 1u);
    piecemeal.flush();
    require(piecemeal.video_units() == 2u && piecemeal.audio_units() == 1u,
            "a stream split across calls demultiplexed differently");
}

// A synthetic disc has to be a real ISO 9660 volume, not merely something the
// profile's own reader happens to accept: the title reads the volume
// descriptor, walks the path table and reopens content by the sector it found
// in a directory entry. This builds a small tree, lays it out, and reads the
// structure back out of the sectors the way a guest would.
// A program may carry more than one stream of a kind, and a private stream
// payload may be too short to hold the sub-header it is supposed to start
// with. Both used to end up concatenated into whatever access unit was open.
void test_demuxer_stream_selection() {
    std::vector<std::uint8_t> stream;
    append_pes(stream, 0xE0, {0x11, 0x22}, true, 90000);
    append_pes(stream, 0xE1, {0x99}, false, 0);        // a different video stream
    append_pes(stream, 0xE0, {0x33}, false, 0);
    append_pes(stream, 0xE0, {0x44}, true, 91000);

    defjam::ProgramStreamDemuxer selective;
    selective.select_streams(0xE0u, 0xBDu);
    selective.append(stream.data(), stream.size());
    require(selective.has_video(), "no access unit was produced");
    const defjam::AccessUnit unit = selective.take_video();
    require(unit.data.size() == 3u, "the declared stream's unit is the wrong length");
    for (std::uint8_t byte : unit.data)
        require(byte != 0x99, "a foreign video stream was appended to the declared one");

    // Before a PSMF header has been read there is nothing to select on, and a
    // single-stream movie must still demultiplex.
    defjam::ProgramStreamDemuxer unselected;
    unselected.append(stream.data(), stream.size());
    require(unselected.video_units() == 1u, "an unselected demuxer produced nothing");

    // A private stream 1 payload of two bytes is all sub-header and no data.
    // Contributing those two bytes would corrupt the elementary stream.
    std::vector<std::uint8_t> audio_stream;
    append_pes(audio_stream, 0xBD, {0x77, 0x77}, true, 90000);
    append_pes(audio_stream, 0xBD, {0xAA, 0xAA, 0xAA, 0xAA, 0x01, 0x02}, true, 91000);
    append_pes(audio_stream, 0xBD, {0xAA, 0xAA, 0xAA, 0xAA, 0x03, 0x04}, true, 92000);

    defjam::ProgramStreamDemuxer audio;
    audio.append(audio_stream.data(), audio_stream.size());
    require(audio.has_audio(), "no audio access unit was produced");
    const defjam::AccessUnit block = audio.take_audio();
    require(block.data.size() == 2u, "the short packet contributed to the stream");
    require(block.data[0] == 0x01 && block.data[1] == 0x02, "audio payload was mistrimmed");
}

// ---------------------------------------------------------------------------
// GE display list interpretation
// ---------------------------------------------------------------------------
// A GE command word is (command << 24) | 24 bits of data.
constexpr std::uint32_t ge_cmd(std::uint8_t command, std::uint32_t data) {
    return (static_cast<std::uint32_t>(command) << 24u) | (data & 0x00FFFFFFu);
}

constexpr std::uint8_t kGeNop = 0x00u, kGePrim = 0x04u, kGeJump = 0x08u, kGeCall = 0x0Au,
                       kGeRet = 0x0Bu, kGeEnd = 0x0Cu, kGeSignal = 0x0Eu, kGeFinish = 0x0Fu,
                       kGeBase = 0x10u, kGeVertexType = 0x12u;

// Lists live in guest RAM, which starts at 0x08000000.
constexpr std::uint32_t kListBase = 0x08100000u;

std::uint32_t ge_write(psprecomp::Runtime &runtime, std::uint32_t at,
                       std::initializer_list<std::uint32_t> words) {
    for (std::uint32_t word : words) {
        runtime.memory().store32(at, word);
        at += 4u;
    }
    return at;
}

void test_ge_walks_a_list() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::ge_reset();

    const std::uint32_t end = ge_write(runtime, kListBase, {
        ge_cmd(kGeNop, 0u),
        ge_cmd(kGeVertexType, 0x123456u),
        ge_cmd(kGePrim, (3u << 16u) | 24u),   // 24 triangles
        ge_cmd(kGePrim, (6u << 16u) | 4u),    // 4 sprites
        ge_cmd(kGeEnd, 0u),
        ge_cmd(kGePrim, (3u << 16u) | 99u),   // past END: must not run
    });
    (void)end;

    defjam::GeListState state{};
    state.resume = kListBase;
    const defjam::GeExecution execution = defjam::ge_execute_list(runtime, state, 0u);

    const defjam::GeStats stats = defjam::ge_stats();
    require(stats.commands == 5u, "the walk did not stop at END");
    require(stats.draws == 2u, "PRIM commands were not counted");
    require(stats.vertices == 28u, "vertex counts were not summed");
    require(stats.primitives[3] == 1u && stats.primitives[6] == 1u,
            "primitives were filed under the wrong type");
    require(stats.last_vertex_type == 0x123456u, "the vertex type was not latched");
    require(execution.resume_address == kListBase + 5u * 4u,
            "execution did not resume just past END");
    // Every command latches, so a backend can read draw state out of the file.
    require(defjam::ge_registers()[kGeVertexType] == 0x123456u, "the register file was not updated");
}

void test_ge_control_flow() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::ge_reset();

    // BASE supplies the high bits a 24-bit operand cannot hold: 0x08000000
    // comes from bits 16-19 of the BASE operand, shifted up by eight.
    const std::uint32_t subroutine = kListBase + 0x40u;
    ge_write(runtime, kListBase, {
        ge_cmd(kGeBase, 0x080000u),
        ge_cmd(kGeCall, subroutine & 0x00FFFFFFu),
        ge_cmd(kGePrim, (3u << 16u) | 1u),   // must run after the call returns
        ge_cmd(kGeEnd, 0u),
    });
    ge_write(runtime, subroutine, {
        ge_cmd(kGePrim, (3u << 16u) | 2u),
        ge_cmd(kGeRet, 0u),
    });

    defjam::GeListState state{};
    state.resume = kListBase;
    (void)defjam::ge_execute_list(runtime, state, 0u);

    const defjam::GeStats stats = defjam::ge_stats();
    require(stats.calls == 1u && stats.returns == 1u, "the call and return were not counted");
    require(stats.draws == 2u, "RET did not come back to the caller");
    require(stats.vertices == 3u, "the wrong side of the call ran");
}

void test_ge_call_stack_survives_a_stall() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::ge_reset();

    // The guest routinely stalls a list part-way through, including inside a
    // subroutine. The call stack has to survive that pause, or the matching
    // RET finds nothing to return to and execution falls straight through it.
    const std::uint32_t subroutine = kListBase + 0x40u;
    ge_write(runtime, kListBase, {
        ge_cmd(kGeBase, 0x080000u),
        ge_cmd(kGeCall, subroutine & 0x00FFFFFFu),
        ge_cmd(kGePrim, (3u << 16u) | 7u),   // only reached by returning
        ge_cmd(kGeEnd, 0u),
    });
    ge_write(runtime, subroutine, {
        ge_cmd(kGeNop, 0u),
        ge_cmd(kGeNop, 0u),                  // stall here, inside the subroutine
        ge_cmd(kGeRet, 0u),
        ge_cmd(kGeEnd, 0u),                  // where a lost stack lands instead
    });

    defjam::GeListState state{};
    state.resume = kListBase;
    const std::uint32_t stall = subroutine + 4u;
    const defjam::GeExecution first = defjam::ge_execute_list(runtime, state, stall);
    require(first.resume_address == stall, "the list did not stop at the stall address");
    require(defjam::ge_stats().draws == 0u, "nothing should have been drawn yet");

    // The guest moves the stall on; the rest of the subroutine, its RET, and
    // the caller's remaining work all run.
    const defjam::GeExecution second = defjam::ge_execute_list(runtime, state, 0u);
    (void)second;
    const defjam::GeStats stats = defjam::ge_stats();
    require(stats.returns == 1u, "RET was not reached after the stall");
    require(stats.draws == 1u && stats.vertices == 7u,
            "the call stack did not survive the stall, so RET fell through");
}

void test_ge_guards_its_limits() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::ge_reset();

    // A call stack deeper than the hardware's is stopped rather than smashed.
    std::uint32_t at = kListBase;
    at = ge_write(runtime, at, {ge_cmd(kGeBase, 0x080000u)});
    for (std::uint32_t i = 0; i < defjam::kGeCallStackDepth + 4u; ++i) {
        const std::uint32_t next = at + 4u;
        at = ge_write(runtime, at, {ge_cmd(kGeCall, next & 0x00FFFFFFu)});
    }
    ge_write(runtime, at, {ge_cmd(kGeEnd, 0u)});

    defjam::GeListState overflow{};
    overflow.resume = kListBase;
    (void)defjam::ge_execute_list(runtime, overflow, 0u);
    require(defjam::ge_stats().calls == defjam::kGeCallStackDepth + 1u,
            "the call stack did not stop at its depth limit");

    // A list that walks out of guest memory stops instead of reading on.
    defjam::ge_reset();
    ge_write(runtime, kListBase, {ge_cmd(kGeJump, 0u)});   // BASE is 0: jumps to 0
    defjam::GeListState astray{};
    astray.resume = kListBase;
    const defjam::GeExecution wandered = defjam::ge_execute_list(runtime, astray, 0u);
    require(wandered.resume_address != 0u || defjam::ge_stats().jumps == 1u,
            "a jump out of memory was not stopped");
}

void test_ge_signal_and_finish() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::ge_reset();

    ge_write(runtime, kListBase, {
        ge_cmd(kGeSignal, 0x4321u),
        ge_cmd(kGeFinish, 0x8765u),
        ge_cmd(kGeEnd, 0u),
    });

    defjam::GeListState state{};
    state.resume = kListBase;
    const defjam::GeExecution execution = defjam::ge_execute_list(runtime, state, 0u);
    require(execution.signalled && execution.signal_argument == 0x4321u,
            "SIGNAL did not reach the caller with its payload");
    require(execution.finished && execution.finish_argument == 0x8765u,
            "FINISH did not reach the caller with its payload");
    // FINISH does not end the walk; END does.
    require(defjam::ge_stats().commands == 3u, "FINISH ended the list early");
}

// ---------------------------------------------------------------------------
// The IoFileMgrForUser surface, driven through Runtime::find_hle
// ---------------------------------------------------------------------------
// These handlers are what recompiled code reaches through an import wrapper.
// A test has no wrappers, so it looks the handler up and calls it with a
// register frame of its own, which is all an import wrapper does anyway.
void call_hle(psprecomp::Runtime &runtime, const char *library, std::uint32_t nid,
              psprecomp::AllegrexContext &ctx) {
    const auto *handler = runtime.find_hle(library, nid);
    require(handler != nullptr, "the profile did not register that HLE import");
    (*handler)(runtime, ctx);
}

// Guest scratch: a page for paths and buffers, well clear of anything else.
constexpr std::uint32_t kIoScratch = 0x08200000u;

void write_guest_string(psprecomp::Runtime &runtime, std::uint32_t address, const std::string &text) {
    for (std::size_t i = 0; i < text.size(); ++i)
        runtime.memory().store8(address + static_cast<std::uint32_t>(i),
                                static_cast<std::uint8_t>(text[i]));
    runtime.memory().store8(address + static_cast<std::uint32_t>(text.size()), 0u);
}

void test_io_surface() {
    const std::filesystem::path root =
        std::filesystem::temp_directory_path() / "defjam_io_surface_test";
    std::error_code ec;
    std::filesystem::remove_all(root, ec);
    std::filesystem::create_directories(root / "PSP_GAME", ec);
    {
        std::ofstream out(root / "PSP_GAME" / "DATA.BIN", std::ios::binary);
        out << "0123456789";
    }

    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    runtime.set_game_root(root);
    defjam::install_io_hle(runtime, root.string());

    constexpr std::uint32_t kOpen = 0x109F50BCu, kClose = 0x810C4BC3u, kRead = 0x6A638D83u,
                            kWrite = 0x42EC03ACu, kLseek32 = 0x68963324u, kGetstat = 0xACE946E8u;

    const std::uint32_t path_address = kIoScratch;
    const std::uint32_t buffer = kIoScratch + 0x100u;
    write_guest_string(runtime, path_address, "disc0:/PSP_GAME/DATA.BIN");

    psprecomp::AllegrexContext ctx{};
    ctx.set_gpr(4, path_address);
    ctx.set_gpr(5, 0x0001u);   // read only
    call_hle(runtime, "IoFileMgrForUser", kOpen, ctx);
    const auto fd = static_cast<std::int32_t>(ctx.gpr[2]);
    require(fd > 0, "opening a staged file failed");

    // A plain read of the whole file.
    ctx.set_gpr(4, static_cast<std::uint32_t>(fd));
    ctx.set_gpr(5, buffer);
    ctx.set_gpr(6, 10u);
    call_hle(runtime, "IoFileMgrForUser", kRead, ctx);
    require(ctx.gpr[2] == 10u, "the read did not return the whole file");
    for (std::uint32_t i = 0; i < 10u; ++i)
        require(runtime.memory().load8(buffer + i) == static_cast<std::uint8_t>('0' + i),
                "the file's bytes did not reach the guest buffer");

    // A length that no guest buffer could hold is refused, not staged. Before
    // this was checked, it sized an allocation from the length first.
    ctx.set_gpr(4, static_cast<std::uint32_t>(fd));
    ctx.set_gpr(5, buffer);
    ctx.set_gpr(6, 0xFFFFFFF0u);
    call_hle(runtime, "IoFileMgrForUser", kRead, ctx);
    require(static_cast<std::int32_t>(ctx.gpr[2]) < 0,
            "a read larger than guest memory was not refused");

    // Seeking relative to the current position.
    ctx.set_gpr(4, static_cast<std::uint32_t>(fd));
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, 0u);        // SEEK_SET
    call_hle(runtime, "IoFileMgrForUser", kLseek32, ctx);
    require(ctx.gpr[2] == 0u, "seek to the start did not report zero");
    ctx.set_gpr(4, static_cast<std::uint32_t>(fd));
    ctx.set_gpr(5, 4u);
    ctx.set_gpr(6, 1u);        // SEEK_CUR
    call_hle(runtime, "IoFileMgrForUser", kLseek32, ctx);
    require(ctx.gpr[2] == 4u, "a relative seek landed in the wrong place");
    ctx.set_gpr(4, static_cast<std::uint32_t>(fd));
    ctx.set_gpr(5, buffer);
    ctx.set_gpr(6, 2u);
    call_hle(runtime, "IoFileMgrForUser", kRead, ctx);
    require(ctx.gpr[2] == 2u && runtime.memory().load8(buffer) == '4',
            "reading after a relative seek returned the wrong bytes");

    ctx.set_gpr(4, static_cast<std::uint32_t>(fd));
    call_hle(runtime, "IoFileMgrForUser", kClose, ctx);

    // A writable handle: the relative seek here used to move twice, because an
    // fstream's read and write heads share one position.
    write_guest_string(runtime, path_address, "ms0:/SAVE.BIN");
    ctx.set_gpr(4, path_address);
    ctx.set_gpr(5, 0x0002u | 0x0200u | 0x0400u);   // write | create | truncate
    call_hle(runtime, "IoFileMgrForUser", kOpen, ctx);
    const auto save = static_cast<std::int32_t>(ctx.gpr[2]);
    require(save > 0, "creating a file for writing failed");

    for (std::uint32_t i = 0; i < 8u; ++i) runtime.memory().store8(buffer + i, 'A');
    ctx.set_gpr(4, static_cast<std::uint32_t>(save));
    ctx.set_gpr(5, buffer);
    ctx.set_gpr(6, 8u);
    call_hle(runtime, "IoFileMgrForUser", kWrite, ctx);
    require(ctx.gpr[2] == 8u, "the write did not report its length");

    ctx.set_gpr(4, static_cast<std::uint32_t>(save));
    ctx.set_gpr(5, static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, 1u);        // SEEK_CUR, four back from eight
    call_hle(runtime, "IoFileMgrForUser", kLseek32, ctx);
    require(ctx.gpr[2] == 4u,
            "a relative seek on a writable handle moved twice");

    ctx.set_gpr(4, static_cast<std::uint32_t>(save));
    call_hle(runtime, "IoFileMgrForUser", kClose, ctx);
    require(std::filesystem::file_size(root / "SAVE.BIN", ec) == 8u,
            "the written file is not the length that was written");

    // A source range that is not guest memory is refused rather than staged.
    ctx.set_gpr(4, static_cast<std::uint32_t>(save));
    ctx.set_gpr(5, buffer);
    ctx.set_gpr(6, 0xFFFFFFF0u);
    call_hle(runtime, "IoFileMgrForUser", kWrite, ctx);
    require(static_cast<std::int32_t>(ctx.gpr[2]) < 0, "an oversized write was not refused");

    // sceIoGetstat on a real file reports its real length, and on a path it
    // cannot measure reports zero rather than uintmax_t(-1).
    write_guest_string(runtime, path_address, "disc0:/PSP_GAME/DATA.BIN");
    const std::uint32_t stat = kIoScratch + 0x400u;
    ctx.set_gpr(4, path_address);
    ctx.set_gpr(5, stat);
    call_hle(runtime, "IoFileMgrForUser", kGetstat, ctx);
    require(ctx.gpr[2] == 0u, "stat on a staged file failed");
    require(runtime.memory().load32(stat + 8u) == 10u && runtime.memory().load32(stat + 12u) == 0u,
            "st_size is not the file's length");

    std::filesystem::remove_all(root, ec);
}

// ---------------------------------------------------------------------------
// ThreadManForUser waits, driven the same way
// ---------------------------------------------------------------------------
void test_kernel_wait_timeout() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);

    constexpr std::uint32_t kCreateSema = 0xD6DA4BA1u, kWaitSema = 0x4E3A1105u,
                            kPollSema = 0x58B1F937u;
    constexpr std::uint32_t kErrorWaitTimeout = 0x800201A8u;
    constexpr std::uint32_t kErrorSemaZero = 0x800201ADu;

    const std::uint32_t name = kIoScratch;
    const std::uint32_t timeout = kIoScratch + 0x40u;
    write_guest_string(runtime, name, "test");

    // A semaphore nobody will ever signal.
    psprecomp::AllegrexContext ctx{};
    ctx.set_gpr(4, name);
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, 0u);        // initial count
    ctx.set_gpr(7, 1u);        // maximum
    call_hle(runtime, "ThreadManForUser", kCreateSema, ctx);
    const std::uint32_t sema = ctx.gpr[2];

    // Polling it reports the shortage rather than blocking.
    ctx.set_gpr(4, sema);
    ctx.set_gpr(5, 1u);
    call_hle(runtime, "ThreadManForUser", kPollSema, ctx);
    require(ctx.gpr[2] == kErrorSemaZero, "polling an empty semaphore reported the wrong code");

    // Waiting on it with a limit must come back at that limit. Discarding the
    // limit is what used to park the only thread for good.
    const std::uint64_t before = defjam::headless_stats().virtual_time_us;
    runtime.memory().store32(timeout, 50000u);   // 50 ms
    ctx.set_gpr(4, sema);
    ctx.set_gpr(5, 1u);
    ctx.set_gpr(6, timeout);
    call_hle(runtime, "ThreadManForUser", kWaitSema, ctx);

    require(!runtime.stopped(),
            ("a timed wait was reported as a deadlock: " + runtime.stop_reason()).c_str());
    require(ctx.gpr[2] == kErrorWaitTimeout, "the wait did not come back as a timeout");
    const std::uint64_t after = defjam::headless_stats().virtual_time_us;
    require(after >= before + 50000u, "virtual time did not reach the deadline");
}

void test_kernel_wait_satisfied() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);

    constexpr std::uint32_t kCreateSema = 0xD6DA4BA1u, kWaitSema = 0x4E3A1105u;
    const std::uint32_t name = kIoScratch;
    write_guest_string(runtime, name, "ready");

    psprecomp::AllegrexContext ctx{};
    ctx.set_gpr(4, name);
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, 2u);        // two available
    ctx.set_gpr(7, 2u);
    call_hle(runtime, "ThreadManForUser", kCreateSema, ctx);
    const std::uint32_t sema = ctx.gpr[2];

    // A wait the count already covers returns success without blocking, and
    // without consulting the timeout at all.
    ctx.set_gpr(4, sema);
    ctx.set_gpr(5, 2u);
    ctx.set_gpr(6, 0u);
    call_hle(runtime, "ThreadManForUser", kWaitSema, ctx);
    require(ctx.gpr[2] == 0u, "a wait the semaphore could satisfy did not succeed");
    require(!runtime.stopped(), "a satisfiable wait blocked");
}

void test_event_flag_poll_code() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);

    constexpr std::uint32_t kCreateEventFlag = 0x55C20A00u, kPollEventFlag = 0x30FD48F0u,
                            kSetEventFlag = 0x1FB15A32u;
    // A failed poll reports the condition code, not the timeout code: they are
    // different answers and a title branches on which it got.
    constexpr std::uint32_t kErrorEvfCond = 0x800201AFu;

    const std::uint32_t name = kIoScratch;
    write_guest_string(runtime, name, "flag");

    psprecomp::AllegrexContext ctx{};
    ctx.set_gpr(4, name);
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, 0u);        // no bits set
    call_hle(runtime, "ThreadManForUser", kCreateEventFlag, ctx);
    const std::uint32_t flag = ctx.gpr[2];

    ctx.set_gpr(4, flag);
    ctx.set_gpr(5, 0x0Fu);
    ctx.set_gpr(6, 0u);        // wait for all of them
    ctx.set_gpr(7, 0u);
    call_hle(runtime, "ThreadManForUser", kPollEventFlag, ctx);
    require(ctx.gpr[2] == kErrorEvfCond, "a failed poll did not report the condition code");

    // Once the bits are there the same poll succeeds and reports the pattern.
    ctx.set_gpr(4, flag);
    ctx.set_gpr(5, 0x0Fu);
    call_hle(runtime, "ThreadManForUser", kSetEventFlag, ctx);

    const std::uint32_t out = kIoScratch + 0x80u;
    ctx.set_gpr(4, flag);
    ctx.set_gpr(5, 0x0Fu);
    ctx.set_gpr(6, 0u);
    ctx.set_gpr(7, out);
    call_hle(runtime, "ThreadManForUser", kPollEventFlag, ctx);
    require(ctx.gpr[2] == 0u, "a poll that should match failed");
    require((runtime.memory().load32(out) & 0x0Fu) == 0x0Fu, "the pattern was not reported");
}

// ---------------------------------------------------------------------------
// Two threads, so a wait can be ended by somebody other than the waiter
// ---------------------------------------------------------------------------
// Nothing here executes guest code: install_profile leaves thread 0 running,
// and blocking it hands the context to whichever thread is ready next. That is
// the switch, and it is what lets a test stand in for the other thread.
namespace kernel_nid {
constexpr std::uint32_t kCreateThread = 0x446D8DE6u, kStartThread = 0xF475845Du,
                        kGetThreadId = 0x293B45B8u, kTerminateThread = 0x616403BAu,
                        kWaitThreadEnd = 0x278C0DF5u, kSleepThread = 0x9ACE131Eu,
                        kWakeupThread = 0xD59EAD2Fu, kCreateSema = 0xD6DA4BA1u,
                        kDeleteSema = 0x28B6489Cu, kSignalSema = 0x3F53E640u,
                        kWaitSema = 0x4E3A1105u, kPollSema = 0x58B1F937u;
}

constexpr std::uint32_t kErrorWaitDelete = 0x800201B5u;
constexpr std::uint32_t kErrorSemaZeroCode = 0x800201ADu;

// A worker at a lower priority than thread 0, so starting it does not preempt.
std::int32_t start_worker(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    const std::uint32_t name = kIoScratch + 0x200u;
    write_guest_string(runtime, name, "worker");
    ctx.set_gpr(4, name);
    ctx.set_gpr(5, 0x08800000u);   // an entry nothing ever runs
    ctx.set_gpr(6, 40u);           // numerically higher is less urgent on PSP
    ctx.set_gpr(7, 4096u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kCreateThread, ctx);
    const auto uid = static_cast<std::int32_t>(ctx.gpr[2]);
    require(uid > 0, "creating a worker thread failed");
    ctx.set_gpr(4, static_cast<std::uint32_t>(uid));
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, 0u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kStartThread, ctx);
    return uid;
}

std::int32_t running_thread(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    call_hle(runtime, "ThreadManForUser", kernel_nid::kGetThreadId, ctx);
    return static_cast<std::int32_t>(ctx.gpr[2]);
}

std::uint32_t make_empty_sema(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx) {
    const std::uint32_t name = kIoScratch;
    write_guest_string(runtime, name, "gate");
    ctx.set_gpr(4, name);
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, 0u);   // nothing available
    ctx.set_gpr(7, 8u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kCreateSema, ctx);
    return ctx.gpr[2];
}

// Blocks thread 0 on an empty semaphore with no timeout, which hands the
// context to the worker. Returns the semaphore.
std::uint32_t block_thread_zero(psprecomp::Runtime &runtime, psprecomp::AllegrexContext &ctx,
                                std::int32_t worker) {
    const std::uint32_t sema = make_empty_sema(runtime, ctx);
    ctx.set_gpr(4, sema);
    ctx.set_gpr(5, 1u);
    ctx.set_gpr(6, 0u);   // no timeout: only another thread can end this
    call_hle(runtime, "ThreadManForUser", kernel_nid::kWaitSema, ctx);
    require(!runtime.stopped(),
            ("blocking thread 0 was reported as a deadlock: " + runtime.stop_reason()).c_str());
    require(running_thread(runtime, ctx) == worker, "blocking thread 0 did not run the worker");
    return sema;
}

void test_deleting_a_semaphore_releases_its_waiters() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);
    psprecomp::AllegrexContext ctx{};

    const std::int32_t worker = start_worker(runtime, ctx);
    const std::uint32_t sema = block_thread_zero(runtime, ctx, worker);

    // Running as the worker: delete the semaphore thread 0 is queued on. The
    // object it was waiting for is gone, so the kernel hands it the delete
    // error; leaving it queued strands it on something that no longer exists.
    ctx.set_gpr(4, sema);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kDeleteSema, ctx);

    // Park the worker so the scheduler has to pick somebody. If thread 0 was
    // stranded there is nobody left and this reports a deadlock instead.
    call_hle(runtime, "ThreadManForUser", kernel_nid::kSleepThread, ctx);
    require(!runtime.stopped(),
            ("the waiter was stranded: " + runtime.stop_reason()).c_str());
    // Read what the resumed thread came back with before anything else runs:
    // the next HLE call writes its own result over $v0.
    const std::uint32_t resumed_with = ctx.gpr[2];
    require(running_thread(runtime, ctx) == 0, "thread 0 was not resumed");
    require(resumed_with == kErrorWaitDelete, "thread 0 resumed without the delete error");
}

void test_terminating_a_thread_wakes_its_joiners() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);
    psprecomp::AllegrexContext ctx{};

    const std::int32_t worker = start_worker(runtime, ctx);

    // Thread 0 joins the worker, which blocks it and runs the worker.
    ctx.set_gpr(4, static_cast<std::uint32_t>(worker));
    ctx.set_gpr(5, 0u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kWaitThreadEnd, ctx);
    require(running_thread(runtime, ctx) == worker, "the join did not run the worker");

    // The worker terminates itself. Its joiner is now free, and there is no
    // longer a thread to return into, so the kernel has to pick another one.
    ctx.set_gpr(4, static_cast<std::uint32_t>(worker));
    call_hle(runtime, "ThreadManForUser", kernel_nid::kTerminateThread, ctx);
    require(!runtime.stopped(), ("terminating self stopped the run: " + runtime.stop_reason()).c_str());
    require(running_thread(runtime, ctx) == 0,
            "terminating a thread neither woke its joiner nor rescheduled");
}

void test_wakeup_does_not_break_a_semaphore_wait() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);
    psprecomp::AllegrexContext ctx{};

    const std::int32_t worker = start_worker(runtime, ctx);
    const std::uint32_t sema = block_thread_zero(runtime, ctx, worker);

    // sceKernelWakeupThread answers sceKernelSleepThread, not a wait on a
    // kernel object. Tearing thread 0 off the semaphore here would leave its
    // entry in the queue for the next signal to pay out to a thread that is
    // already running.
    ctx.set_gpr(4, 0u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kWakeupThread, ctx);
    require(running_thread(runtime, ctx) == worker,
            "a wakeup released a thread waiting on a semaphore");
    const std::string report = defjam::thread_report();
    require(report.find("on sema") != std::string::npos,
            "thread 0 is no longer recorded as waiting on the semaphore");

    // Signalling it is what releases thread 0, and it preempts because it is
    // the more urgent of the two.
    ctx.set_gpr(4, sema);
    ctx.set_gpr(5, 1u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kSignalSema, ctx);
    require(running_thread(runtime, ctx) == 0, "signalling did not resume the waiter");
}

void test_a_terminated_waiter_does_not_eat_the_count() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);
    psprecomp::AllegrexContext ctx{};

    const std::int32_t worker = start_worker(runtime, ctx);
    const std::uint32_t sema = block_thread_zero(runtime, ctx, worker);

    // Terminate the queued thread, then signal. The unit must still be there
    // afterwards: paying it to a thread that will never wake spends it for
    // good, and the semaphore never gets it back.
    ctx.set_gpr(4, 0u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kTerminateThread, ctx);
    require(running_thread(runtime, ctx) == worker, "terminating another thread switched away");

    ctx.set_gpr(4, sema);
    ctx.set_gpr(5, 1u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kSignalSema, ctx);

    ctx.set_gpr(4, sema);
    ctx.set_gpr(5, 1u);
    call_hle(runtime, "ThreadManForUser", kernel_nid::kPollSema, ctx);
    require(ctx.gpr[2] != kErrorSemaZeroCode,
            "the signalled unit was consumed by a thread that had been terminated");
    require(ctx.gpr[2] == 0u, "polling the signalled semaphore failed");
}

// ---------------------------------------------------------------------------
// sceAtrac3plus
// ---------------------------------------------------------------------------
void put_le16(std::vector<std::uint8_t> &v, std::uint32_t x) {
    v.push_back(static_cast<std::uint8_t>(x));
    v.push_back(static_cast<std::uint8_t>(x >> 8));
}
void put_le32(std::vector<std::uint8_t> &v, std::uint32_t x) {
    put_le16(v, x & 0xFFFFu);
    put_le16(v, x >> 16);
}
void put_tag(std::vector<std::uint8_t> &v, const char *tag) {
    for (int i = 0; i < 4; ++i) v.push_back(static_cast<std::uint8_t>(tag[i]));
}

// A minimal but well-formed .at3 container: RIFF/WAVE with fmt, fact and data.
std::vector<std::uint8_t> make_at3(std::uint16_t format_tag, std::uint16_t channels,
                                   std::uint32_t rate, std::uint16_t block_align,
                                   std::uint32_t frames) {
    std::vector<std::uint8_t> fmt;
    put_le16(fmt, format_tag);
    put_le16(fmt, channels);
    put_le32(fmt, rate);
    put_le32(fmt, rate * block_align);
    put_le16(fmt, block_align);
    put_le16(fmt, 16u);        // bits per sample
    put_le16(fmt, 4u);         // cbSize
    for (int i = 0; i < 4; ++i) fmt.push_back(0xA5u);   // codec-private tail

    std::vector<std::uint8_t> body;
    put_tag(body, "WAVE");
    put_tag(body, "fmt ");
    put_le32(body, static_cast<std::uint32_t>(fmt.size()));
    body.insert(body.end(), fmt.begin(), fmt.end());
    put_tag(body, "fact");
    put_le32(body, 4u);
    put_le32(body, frames * 2048u);
    put_tag(body, "data");
    put_le32(body, frames * block_align);
    for (std::uint32_t i = 0; i < frames * block_align; ++i)
        body.push_back(static_cast<std::uint8_t>(i));

    std::vector<std::uint8_t> file;
    put_tag(file, "RIFF");
    put_le32(file, static_cast<std::uint32_t>(body.size()));
    file.insert(file.end(), body.begin(), body.end());
    return file;
}

void test_at3_container() {
    const std::vector<std::uint8_t> file = make_at3(0xFFFEu, 2u, 44100u, 376u, 3u);
    const defjam::AtracHeader header = defjam::parse_at3_header(file.data(), file.size());
    require(header.valid, "a well-formed AT3+ container was rejected");
    require(header.codec == defjam::AtracCodec::Atrac3Plus, "the format tag was misread");
    require(header.channels == 2u && header.sample_rate == 44100u, "fmt fields were misread");
    require(header.block_align == 376u, "the block size was misread");
    require(header.data_bytes == 3u * 376u, "the data chunk length was misread");
    require(header.samples_per_frame == 2048u, "AT3+ frames are 2048 samples");
    require(header.extradata.size() == 4u && header.extradata[0] == 0xA5u,
            "the codec-private tail was not carried through");
    require(header.total_samples == 3u * 2048u, "the fact chunk was not read");
    // The data offset must actually point at the frames.
    require(file[header.data_offset] == 0u && header.data_offset + header.data_bytes <= file.size(),
            "the data offset does not address the frames");

    const std::vector<std::uint8_t> at3 = make_at3(0x0270u, 2u, 44100u, 192u, 2u);
    const defjam::AtracHeader plain = defjam::parse_at3_header(at3.data(), at3.size());
    require(plain.valid && plain.codec == defjam::AtracCodec::Atrac3, "AT3 was not recognised");
    require(plain.samples_per_frame == 1024u, "AT3 frames are 1024 samples");

    // Containers this profile must refuse rather than guess past: the frame
    // size comes from here and nowhere else.
    auto broken = file;
    broken[0] = 'X';
    require(!defjam::parse_at3_header(broken.data(), broken.size()).valid, "bad magic was accepted");
    require(!defjam::parse_at3_header(file.data(), 8u).valid, "a truncated buffer was accepted");
    const std::vector<std::uint8_t> zero_block = make_at3(0xFFFEu, 2u, 44100u, 0u, 3u);
    require(!defjam::parse_at3_header(zero_block.data(), zero_block.size()).valid,
            "a zero block size was accepted");
    const std::vector<std::uint8_t> unknown = make_at3(0x0055u, 2u, 44100u, 376u, 3u);
    require(!defjam::parse_at3_header(unknown.data(), unknown.size()).valid,
            "an unknown codec tag was accepted");
}

void test_atrac_surface() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);

    constexpr std::uint32_t kSetData = 0x7A20E7AFu, kDecode = 0x6A8C3CD5u, kRelease = 0x61EB33F5u,
                            kGetMax = 0xD6A5F2F7u, kGetNext = 0x36FAABFBu, kStreamInfo = 0x5D268707u;
    constexpr std::uint32_t kErrorBadAtracId = 0x80630005u;
    constexpr std::uint32_t kErrorAllDecoded = 0x80630024u;
    constexpr std::uint32_t kErrorUnknownFormat = 0x80630006u;

    const std::uint32_t file_at = kIoScratch;
    const std::uint32_t out_at = kIoScratch + 0x10000u;
    const std::uint32_t scratch = kIoScratch + 0x100u;

    const std::vector<std::uint8_t> file = make_at3(0xFFFEu, 2u, 44100u, 376u, 2u);
    for (std::size_t i = 0; i < file.size(); ++i)
        runtime.memory().store8(file_at + static_cast<std::uint32_t>(i), file[i]);

    psprecomp::AllegrexContext ctx{};
    ctx.set_gpr(4, file_at);
    ctx.set_gpr(5, static_cast<std::uint32_t>(file.size()));
    call_hle(runtime, "sceAtrac3plus", kSetData, ctx);
    const auto id = static_cast<std::int32_t>(ctx.gpr[2]);
    require(id > 0, "handing over a well-formed container did not yield an id");

    // The codec fixes the frame length, and the next frame is the same until
    // the stream runs out.
    ctx.set_gpr(4, static_cast<std::uint32_t>(id));
    ctx.set_gpr(5, scratch);
    call_hle(runtime, "sceAtrac3plus", kGetMax, ctx);
    require(ctx.gpr[2] == 0u && runtime.memory().load32(scratch) == 2048u,
            "the maximum frame length is wrong");

    // Two frames, then the stream is spent. This build has no decoder, so the
    // frames are silence - but the bookkeeping around them still has to hold.
    for (int frame = 0; frame < 2; ++frame) {
        ctx.set_gpr(4, static_cast<std::uint32_t>(id));
        ctx.set_gpr(5, out_at);
        ctx.set_gpr(6, scratch);
        ctx.set_gpr(7, scratch + 4u);
        ctx.set_gpr(8, scratch + 8u);
        call_hle(runtime, "sceAtrac3plus", kDecode, ctx);
        require(ctx.gpr[2] == 0u, "decoding a frame that exists failed");
        require(runtime.memory().load32(scratch) == 2048u, "the frame length was not reported");
        require(runtime.memory().load32(scratch + 4u) == (frame == 1 ? 1u : 0u),
                "the end flag does not follow the last frame");
        // -1 tells the title everything is already in memory; anything else
        // sends it looking for more of a file it has handed over in full.
        require(runtime.memory().load32(scratch + 8u) == 0xFFFFFFFFu,
                "the remaining-frame count should say all data is on memory");
    }

    ctx.set_gpr(4, static_cast<std::uint32_t>(id));
    ctx.set_gpr(5, scratch);
    call_hle(runtime, "sceAtrac3plus", kGetNext, ctx);
    require(runtime.memory().load32(scratch) == 0u, "a spent stream still offers a next frame");

    // Past the end the library says so rather than failing generically.
    ctx.set_gpr(4, static_cast<std::uint32_t>(id));
    ctx.set_gpr(5, out_at);
    ctx.set_gpr(6, scratch);
    ctx.set_gpr(7, scratch + 4u);
    ctx.set_gpr(8, scratch + 8u);
    call_hle(runtime, "sceAtrac3plus", kDecode, ctx);
    require(ctx.gpr[2] == kErrorAllDecoded, "decoding past the end reported the wrong code");
    require(runtime.memory().load32(scratch + 4u) == 1u, "the end flag was cleared past the end");

    // Nothing is ever available to stream in.
    ctx.set_gpr(4, static_cast<std::uint32_t>(id));
    ctx.set_gpr(5, scratch);
    ctx.set_gpr(6, scratch + 4u);
    ctx.set_gpr(7, scratch + 8u);
    call_hle(runtime, "sceAtrac3plus", kStreamInfo, ctx);
    require(ctx.gpr[2] == 0u && runtime.memory().load32(scratch + 4u) == 0u,
            "the library asked for more of a file it already has");

    ctx.set_gpr(4, static_cast<std::uint32_t>(id));
    call_hle(runtime, "sceAtrac3plus", kRelease, ctx);
    require(ctx.gpr[2] == 0u, "releasing a live id failed");
    ctx.set_gpr(4, static_cast<std::uint32_t>(id));
    call_hle(runtime, "sceAtrac3plus", kRelease, ctx);
    require(ctx.gpr[2] == kErrorBadAtracId, "releasing a dead id was accepted");

    // A container this profile cannot read is refused at the door, not turned
    // into a stream that decodes rubbish.
    runtime.memory().store8(file_at, 'X');
    ctx.set_gpr(4, file_at);
    ctx.set_gpr(5, static_cast<std::uint32_t>(file.size()));
    call_hle(runtime, "sceAtrac3plus", kSetData, ctx);
    require(ctx.gpr[2] == kErrorUnknownFormat, "an unreadable container was accepted");

    const defjam::AtracStats stats = defjam::atrac_stats();
    require(stats.streams_opened == 1u && stats.containers_rejected == 1u,
            "the statistics do not match what happened");
}

// A savedata name comes out of guest memory and then becomes a path, so it
// must not be able to name anything outside the savedata root.
void test_savedata_names_stay_put() {
    const std::filesystem::path root =
        std::filesystem::temp_directory_path() / "defjam_savedata_test";
    std::error_code ec;
    std::filesystem::remove_all(root, ec);
    std::filesystem::create_directories(root / "savedata", ec);

    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_utility_hle(runtime, (root / "savedata").string());

    constexpr std::uint32_t kSavedataInitStart = 0x50C4CD57u;
    constexpr std::uint32_t kResultOffset = 28u, kModeOffset = 48u, kGameNameOffset = 60u,
                            kSaveNameOffset = 76u, kFileNameOffset = 100u,
                            kDataBufOffset = 116u, kDataBufSizeOffset = 120u,
                            kDataSizeOffset = 124u;
    constexpr std::uint32_t kModeSave = 3u;

    const std::uint32_t param = kIoScratch;
    const std::uint32_t payload = kIoScratch + 0x400u;
    for (std::uint32_t i = 0; i < 256u; i += 4u) runtime.memory().store32(param + i, 0u);
    runtime.memory().store32(param + kModeOffset, kModeSave);
    runtime.memory().store32(param + kDataBufOffset, payload);
    runtime.memory().store32(param + kDataBufSizeOffset, 16u);
    runtime.memory().store32(param + kDataSizeOffset, 16u);
    for (std::uint32_t i = 0; i < 16u; ++i) runtime.memory().store8(payload + i, 0x5Au);

    // A name that climbs out of the root, which is what the guard is for.
    write_guest_string(runtime, param + kGameNameOffset, "../escaped");
    write_guest_string(runtime, param + kSaveNameOffset, "SLOT");
    write_guest_string(runtime, param + kFileNameOffset, "DATA.BIN");

    psprecomp::AllegrexContext ctx{};
    ctx.set_gpr(4, param);
    call_hle(runtime, "sceUtility", kSavedataInitStart, ctx);
    require(runtime.memory().load32(param + kResultOffset) != 0u,
            "a savedata name climbing out of the root was accepted");
    require(!std::filesystem::exists(root / "escapedSLOT", ec) &&
                !std::filesystem::exists(root / ".." / "escapedSLOT", ec),
            "the save was written outside the savedata root");

    // The ordinary case still works, so the guard is not simply refusing
    // everything.
    write_guest_string(runtime, param + kGameNameOffset, "ULUS10100");
    runtime.memory().store32(param + kResultOffset, 0xFFFFFFFFu);
    ctx.set_gpr(4, param);
    call_hle(runtime, "sceUtility", kSavedataInitStart, ctx);
    require(runtime.memory().load32(param + kResultOffset) == 0u,
            "a well-formed save was refused");
    require(std::filesystem::is_regular_file(root / "savedata" / "ULUS10100SLOT" / "DATA.BIN", ec),
            "the save did not land where it should");

    std::filesystem::remove_all(root, ec);
}

// ---------------------------------------------------------------------------
// The sceMpeg surface: the path this profile's movie playback runs through
// ---------------------------------------------------------------------------
void test_mpeg_surface() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);

    constexpr std::uint32_t kQueryMemSize = 0xD7A29F46u, kRingbufferConstruct = 0x37295ED8u,
                            kMpegCreate = 0xD8C5F121u, kMpegDelete = 0x606A4649u,
                            kGetAvcAu = 0xFE246728u, kInitAu = 0x167AFD9Eu,
                            kAvailableSize = 0xB5F6DC87u;
    // The library's "nothing to hand out yet" code, which this title compares
    // against by value rather than merely testing the sign.
    constexpr std::uint32_t kErrorMpegNoData = 0x80618001u;
    constexpr std::uint32_t kPacketOverhead = 104u, kPacketSize = 2048u;

    const std::uint32_t ringbuffer = kIoScratch;
    const std::uint32_t mpeg_handle = kIoScratch + 0x100u;
    const std::uint32_t au = kIoScratch + 0x200u;
    const std::uint32_t data = kIoScratch + 0x1000u;

    psprecomp::AllegrexContext ctx{};

    // The size the guest is told to allocate is what it is then held to.
    ctx.set_gpr(4, 4u);
    call_hle(runtime, "sceMpeg", kQueryMemSize, ctx);
    const std::uint32_t needed = ctx.gpr[2];
    require(needed == 4u * (kPacketOverhead + kPacketSize), "the ring buffer size is wrong");

    // A packet count that does not fit the block the guest passed is a
    // disagreement about one number, and everything downstream indexes that
    // block by it.
    const auto construct = [&](std::uint32_t packets, std::uint32_t size) {
        ctx.set_gpr(4, ringbuffer);
        ctx.set_gpr(5, packets);
        ctx.set_gpr(6, data);
        ctx.set_gpr(7, size);
        ctx.set_gpr(8, 0u);
        ctx.set_gpr(9, 0u);
        call_hle(runtime, "sceMpeg", kRingbufferConstruct, ctx);
        return ctx.gpr[2];
    };
    require(static_cast<std::int32_t>(construct(4u, needed / 2u)) < 0,
            "a ring buffer smaller than its packet count was accepted");
    require(static_cast<std::int32_t>(construct(0u, needed)) < 0,
            "a ring buffer of no packets was accepted");
    require(construct(4u, needed) == 0u, "a correctly sized ring buffer was refused");

    // Creating a stream, then deleting and creating again: the handles must
    // differ. Deriving one from the number of live contexts handed out a
    // duplicate as soon as one was deleted.
    const auto create = [&]() {
        ctx.set_gpr(4, mpeg_handle);
        ctx.set_gpr(5, 0u);
        ctx.set_gpr(6, 0x10000u);
        ctx.set_gpr(7, ringbuffer);
        ctx.set_gpr(8, 512u);
        call_hle(runtime, "sceMpeg", kMpegCreate, ctx);
        require(ctx.gpr[2] == 0u, "sceMpegCreate failed");
        return runtime.memory().load32(mpeg_handle);
    };
    const std::uint32_t first = create();
    require(first != 0u, "no handle was written back");
    ctx.set_gpr(4, mpeg_handle);
    call_hle(runtime, "sceMpeg", kMpegDelete, ctx);
    const std::uint32_t second = create();
    require(second != first, "a deleted stream's handle was handed out again");

    // Nothing has been fed, so there is no access unit. This must come back as
    // the library's shortage code: the title compares the value, and a generic
    // -1 fails that comparison and marks the movie broken.
    ctx.set_gpr(4, mpeg_handle);
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, au);
    call_hle(runtime, "sceMpeg", kInitAu, ctx);
    ctx.set_gpr(4, mpeg_handle);
    ctx.set_gpr(5, 0u);
    ctx.set_gpr(6, au);
    call_hle(runtime, "sceMpeg", kGetAvcAu, ctx);
    require(ctx.gpr[2] == kErrorMpegNoData,
            "an empty demultiplexer did not report the library's shortage code");

    // With nothing held, every packet slot is free.
    ctx.set_gpr(4, ringbuffer);
    call_hle(runtime, "sceMpeg", kAvailableSize, ctx);
    require(ctx.gpr[2] == 4u, "an idle ring buffer did not report itself empty");

    const defjam::MpegStats stats = defjam::mpeg_stats();
    require(stats.streams_opened == 2u, "the stream count does not match");
    require(stats.video_units_refused == 1u, "the refusal was not recorded");
}

// ---------------------------------------------------------------------------
// sceGe_user, sceSasCore and sceAudio through find_hle
// ---------------------------------------------------------------------------
void test_ge_user_surface() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);
    defjam::ge_reset();

    constexpr std::uint32_t kEdramAddr = 0xE47E40E4u, kEdramSize = 0x1F6752ADu,
                            kSetTranslation = 0xB77905EAu, kListEnQueue = 0xAB49E76Au;

    psprecomp::AllegrexContext ctx{};
    call_hle(runtime, "sceGe_user", kEdramAddr, ctx);
    require(ctx.gpr[2] == 0x04000000u, "edram does not start where VRAM does");
    call_hle(runtime, "sceGe_user", kEdramSize, ctx);
    require(ctx.gpr[2] == 2u * 1024u * 1024u, "edram is not two megabytes");

    // The translation setter answers with what it replaced, which is how a
    // title restores the previous value.
    ctx.set_gpr(4, 0x10u);
    call_hle(runtime, "sceGe_user", kSetTranslation, ctx);
    const std::uint32_t first = ctx.gpr[2];
    ctx.set_gpr(4, 0x20u);
    call_hle(runtime, "sceGe_user", kSetTranslation, ctx);
    require(ctx.gpr[2] == 0x10u && first != 0x10u,
            "the translation setter did not report the previous value");

    // A list the interpreter can walk: two draws and an END.
    const std::uint32_t list = kListBase;
    ge_write(runtime, list, {
        ge_cmd(kGePrim, (3u << 16u) | 12u),
        ge_cmd(kGePrim, (3u << 16u) | 6u),
        ge_cmd(kGeEnd, 0u),
    });
    ctx.set_gpr(4, list);
    ctx.set_gpr(5, 0u);      // no stall: run to the end
    ctx.set_gpr(6, static_cast<std::uint32_t>(-1));   // no callback set
    ctx.set_gpr(7, 0u);
    call_hle(runtime, "sceGe_user", kListEnQueue, ctx);

    const defjam::GeStats stats = defjam::ge_stats();
    require(stats.draws == 2u && stats.vertices == 18u,
            "the enqueued list was not interpreted");
    require(defjam::headless_stats().display_list_submissions == 1u,
            "the submission was not counted");
}

void test_sas_voice_length() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);

    constexpr std::uint32_t kSasInit = 0x42778A9Fu, kSetVoice = 0x99944089u,
                            kKeyOn = 0x76F01ACAu, kSasCore = 0xA3589D81u,
                            kGetEndFlag = 0x68A46B95u;
    constexpr std::uint32_t kGrain = 256u;
    // VAG packs 28 samples into every 16-byte block, so this is 64 blocks.
    constexpr std::uint32_t kVagBytes = 64u * 16u;
    constexpr std::uint32_t kVoiceSamples = 64u * 28u;      // 1792
    const std::uint32_t grains_to_finish = (kVoiceSamples + kGrain - 1u) / kGrain;

    const auto play = [&](std::uint32_t loop_mode, std::uint32_t grains) {
        psprecomp::AllegrexContext ctx{};
        ctx.set_gpr(4, 0u);
        ctx.set_gpr(5, kGrain);
        ctx.set_gpr(6, 32u);
        ctx.set_gpr(7, 0u);
        call_hle(runtime, "sceSasCore", kSasInit, ctx);

        // (core, voice, vagAddr, size, loopMode). The fifth argument is in $t0,
        // as every five-argument import in this title is; reading it off the
        // stack gave back whatever happened to be there.
        ctx.set_gpr(4, 0u);
        ctx.set_gpr(5, 0u);
        ctx.set_gpr(6, kIoScratch);
        ctx.set_gpr(7, kVagBytes);
        ctx.set_gpr(8, loop_mode);
        call_hle(runtime, "sceSasCore", kSetVoice, ctx);

        ctx.set_gpr(4, 0u);
        ctx.set_gpr(5, 0u);
        call_hle(runtime, "sceSasCore", kKeyOn, ctx);

        for (std::uint32_t i = 0; i < grains; ++i) {
            ctx.set_gpr(4, 0u);
            ctx.set_gpr(5, 0u);   // no output buffer
            call_hle(runtime, "sceSasCore", kSasCore, ctx);
        }
        ctx.set_gpr(4, 0u);
        call_hle(runtime, "sceSasCore", kGetEndFlag, ctx);
        return (ctx.gpr[2] & 1u) != 0u;   // set means the voice has ended
    };

    require(!play(0u, grains_to_finish - 1u), "the voice ended before its data ran out");
    require(play(0u, grains_to_finish), "the voice did not end when its data ran out");
    // A looping voice restarts instead of retiring, which is only visible if
    // the loop mode reached the library at all.
    require(!play(1u, grains_to_finish * 3u), "a looping voice retired anyway");
}

void test_audio_counts_only_accepted_buffers() {
    psprecomp::Runtime runtime(32u * 1024u * 1024u);
    defjam::install_profile(runtime, 0x08900000u);

    constexpr std::uint32_t kChReserve = 0x5EC81C55u, kOutputPanned = 0xE2D56B2Du,
                            kOutputBlocking = 0x136CAF51u;
    const std::uint32_t buffer = kIoScratch;

    psprecomp::AllegrexContext ctx{};
    ctx.set_gpr(4, 0u);        // channel 0
    ctx.set_gpr(5, 1024u);     // samples
    ctx.set_gpr(6, 0u);        // stereo
    call_hle(runtime, "sceAudio", kChReserve, ctx);
    require(static_cast<std::int32_t>(ctx.gpr[2]) == 0, "reserving channel 0 failed");

    // The first buffer is taken.
    ctx.set_gpr(4, 0u);
    ctx.set_gpr(5, buffer);
    call_hle(runtime, "sceAudio", kOutputPanned, ctx);
    require(ctx.gpr[2] == 1024u, "the first buffer was not accepted");

    // The second arrives while the first is still draining, and the
    // non-blocking form refuses it. A refusal that still bumps the totals reads
    // afterwards as audio that played.
    ctx.set_gpr(4, 0u);
    ctx.set_gpr(5, buffer);
    call_hle(runtime, "sceAudio", kOutputPanned, ctx);
    require(ctx.gpr[2] == 0u, "a busy channel accepted a second buffer");

    const defjam::HeadlessStats stats = defjam::headless_stats();
    require(stats.audio_buffers == 1u,
            "a refused buffer was counted as played");
    require(stats.audio_samples == 1024u, "refused samples were counted too");

    // The blocking form waits instead, and does count.
    ctx.set_gpr(4, 0u);
    ctx.set_gpr(5, buffer);
    call_hle(runtime, "sceAudio", kOutputBlocking, ctx);
    require(defjam::headless_stats().audio_buffers == 2u,
            "a buffer that was waited for was not counted");
}

void test_synthetic_disc() {
    const std::filesystem::path root =
        std::filesystem::temp_directory_path() / "defjam_synthetic_disc_test";
    std::error_code ec;
    std::filesystem::remove_all(root, ec);
    std::filesystem::create_directories(root / "PSP_GAME" / "USRDIR", ec);

    const std::string payload(5000u, 'Z');  // spans three sectors
    {
        std::ofstream out(root / "UMD_DATA.BIN", std::ios::binary);
        out << "identity";
    }
    {
        std::ofstream out(root / "PSP_GAME" / "USRDIR" / "big.dat", std::ios::binary);
        out << payload;
    }

    defjam::SyntheticDisc disc;
    std::string error;
    require(disc.build(root, error), ("synthetic disc build failed: " + error).c_str());
    require(disc.directory_count() == 3u, "root, PSP_GAME and USRDIR were not all laid out");
    require(disc.file_count() == 2u, "not every staged file was placed");

    const auto read_sector = [&disc](std::uint32_t sector) {
        std::vector<std::uint8_t> data(2048u);
        const std::uint32_t got = disc.read(sector, 1u, data.data());
        require(got == 2048u, "a sector inside the disc did not read a full sector");
        return data;
    };
    const auto le32 = [](const std::uint8_t *at) {
        return static_cast<std::uint32_t>(at[0]) | (static_cast<std::uint32_t>(at[1]) << 8) |
               (static_cast<std::uint32_t>(at[2]) << 16) | (static_cast<std::uint32_t>(at[3]) << 24);
    };

    // Sector 16 must be a primary volume descriptor, which is exactly what the
    // title's first disc ioctl asks for.
    const auto pvd = read_sector(16u);
    require(pvd[0] == 1u, "sector 16 is not a primary volume descriptor");
    require(std::memcmp(pvd.data() + 1, "CD001", 5) == 0, "the standard identifier is missing");
    require(static_cast<std::uint32_t>(pvd[128]) + (static_cast<std::uint32_t>(pvd[129]) << 8) == 2048u,
            "logical block size is not 2048");
    require(le32(pvd.data() + 80) == disc.total_sectors(), "volume space size disagrees with the disc");

    // The path table it points at must list every directory, root first.
    const std::uint32_t table_size = le32(pvd.data() + 132);
    const std::uint32_t table_sector = le32(pvd.data() + 140);
    require(table_size != 0u && table_sector >= 18u, "the path table was not placed");
    const auto table = read_sector(table_sector);
    require(table[0] == 1u && table[8] == 0x00u, "the first path table record is not the root");

    std::size_t cursor = 0u;
    std::uint32_t directories = 0u;
    bool saw_usrdir = false;
    while (cursor + 8u <= table_size) {
        const std::size_t name_length = table[cursor];
        if (name_length == 0u) break;
        const std::string name(reinterpret_cast<const char *>(table.data() + cursor + 8), name_length);
        if (name == "USRDIR") saw_usrdir = true;
        ++directories;
        cursor += 8u + name_length + (name_length & 1u);
    }
    require(directories == 3u, "the path table does not list every directory");
    require(saw_usrdir, "a nested directory is missing from the path table");

    // Follow the root record to its extent and find the staged file, then read
    // it back from the sector the record gives, which is the whole point.
    const std::uint32_t root_extent = le32(pvd.data() + 156 + 2);
    const auto root_dir = read_sector(root_extent);
    std::uint32_t found_sector = 0u;
    std::uint32_t found_size = 0u;
    std::size_t at = 0u;
    while (at < 2048u && root_dir[at] != 0u) {
        const std::size_t name_length = root_dir[at + 32];
        const std::string name(reinterpret_cast<const char *>(root_dir.data() + at + 33), name_length);
        if (name == "UMD_DATA.BIN") {
            found_sector = le32(root_dir.data() + at + 2);
            found_size = le32(root_dir.data() + at + 10);
        }
        at += root_dir[at];
    }
    require(found_sector != 0u, "the staged file has no directory record");
    require(found_size == 8u, "the record reports the wrong size");
    const auto content = read_sector(found_sector);
    require(std::memcmp(content.data(), "identity", 8) == 0,
            "reading the file's sector did not return the file");

    // A file longer than one sector must read back whole and contiguous, which
    // is the case a per-sector reader gets wrong.
    std::uint32_t big_sector = 0u;
    std::uint32_t big_size = 0u;
    {
        const std::uint32_t usrdir_parent = le32(pvd.data() + 156 + 2);
        (void)usrdir_parent;
        // Find USRDIR through the path table rather than by walking two levels.
        std::size_t scan = 0u;
        std::uint32_t usrdir_extent = 0u;
        while (scan + 8u <= table_size) {
            const std::size_t name_length = table[scan];
            if (name_length == 0u) break;
            const std::string name(reinterpret_cast<const char *>(table.data() + scan + 8), name_length);
            if (name == "USRDIR") usrdir_extent = le32(table.data() + scan + 2);
            scan += 8u + name_length + (name_length & 1u);
        }
        require(usrdir_extent != 0u, "USRDIR has no extent in the path table");
        const auto usrdir = read_sector(usrdir_extent);
        std::size_t entry = 0u;
        while (entry < 2048u && usrdir[entry] != 0u) {
            const std::size_t name_length = usrdir[entry + 32];
            const std::string name(reinterpret_cast<const char *>(usrdir.data() + entry + 33), name_length);
            if (name == "big.dat") {
                big_sector = le32(usrdir.data() + entry + 2);
                big_size = le32(usrdir.data() + entry + 10);
            }
            entry += usrdir[entry];
        }
    }
    require(big_sector != 0u, "the multi-sector file has no directory record");
    require(big_size == 5000u, "the multi-sector file reports the wrong size");

    std::vector<std::uint8_t> big(3u * 2048u);
    require(disc.read(big_sector, 3u, big.data()) == 3u * 2048u,
            "a three-sector read came back short");
    require(std::string(reinterpret_cast<const char *>(big.data()), 5000u) == payload,
            "a file spanning sectors did not read back intact");
    require(big[5000] == 0u, "the tail of the last sector was not zero padded");

    std::filesystem::remove_all(root, ec);
}

// A decoded picture is planar YUV, and the guest wants 32-bit ABGR8888 in a
// buffer wider than the picture. Getting the packing or the stride wrong shows
// up as a picture that is the right shape and the wrong colour, or as one that
// shears, so both are pinned down here rather than eyeballed later.
void test_frame_conversion() {
    defjam::DecodedFrame frame;
    frame.width = 2u;
    frame.height = 2u;
    frame.y_stride = 2u;
    frame.uv_stride = 1u;
    // Limited range: 16 is black and 235 is white, with chroma centred on 128.
    frame.y = {16u, 235u, 16u, 235u};
    frame.u = {128u};
    frame.v = {128u};

    std::vector<std::uint32_t> pixels;
    require(defjam::frame_to_abgr8888(frame, 4u, pixels), "a well-formed frame was refused");
    require(pixels.size() == 4u * 2u, "the output was not sized to the stride");

    // ABGR8888 puts red in the low byte and alpha in the high one.
    require(pixels[0] == 0xFF000000u, "limited-range black did not come out black");
    require(pixels[1] == 0xFFFFFFFFu, "limited-range white did not come out white");
    require(pixels[4] == 0xFF000000u && pixels[5] == 0xFFFFFFFFu,
            "the second row did not start at the stride");

    // The padding between the picture and the stride must be opaque, not left
    // as transparent or as whatever was in the buffer.
    require(pixels[2] == 0xFF000000u && pixels[3] == 0xFF000000u,
            "stride padding is not opaque black");

    // A saturated red must land in the red byte and nowhere else.
    frame.y = {81u, 81u, 81u, 81u};
    frame.u = {90u};
    frame.v = {240u};
    require(defjam::frame_to_abgr8888(frame, 2u, pixels), "a well-formed frame was refused");
    require((pixels[0] & 0x000000FFu) == 0x000000FFu, "red did not land in the low byte");
    require((pixels[0] & 0x00FFFF00u) == 0u, "red bled into green or blue");
    require((pixels[0] & 0xFF000000u) == 0xFF000000u, "alpha is not opaque");

    // A stride narrower than the picture is refused rather than overrunning,
    // and says so: an all-black field is otherwise indistinguishable from a
    // frame that is genuinely black, which hides the fault at the call site.
    require(!defjam::frame_to_abgr8888(frame, 1u, pixels),
            "a too-narrow stride was not reported");
    require(pixels.size() == 1u * 2u, "a too-narrow stride still sized the buffer");
    require(pixels[0] == 0xFF000000u, "a too-narrow stride wrote pixels anyway");

    // Everything here indexes off the strides, so a frame whose planes do not
    // hold the rows they describe must be refused rather than read past. A
    // decoder that changes resolution mid-stream produces exactly this.
    defjam::DecodedFrame ragged;
    ragged.width = 4u;
    ragged.height = 4u;
    ragged.y_stride = 4u;
    ragged.uv_stride = 2u;
    ragged.y.assign(4u * 4u, 128u);
    ragged.u.assign(2u * 2u, 128u);
    ragged.v.assign(2u * 2u, 128u);
    require(defjam::frame_to_abgr8888(ragged, 4u, pixels), "a complete frame was refused");
    ragged.y.pop_back();
    require(!defjam::frame_to_abgr8888(ragged, 4u, pixels),
            "a luma plane shorter than its stride describes was accepted");
    ragged.y.assign(4u * 4u, 128u);
    ragged.v.clear();
    require(!defjam::frame_to_abgr8888(ragged, 4u, pixels),
            "a frame missing a chroma plane was accepted");
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
        test_utility_dialog_sequence();
        test_psmf_header();
        test_program_stream_demuxer();
        test_demuxer_stream_selection();
        test_ge_walks_a_list();
        test_ge_control_flow();
        test_ge_call_stack_survives_a_stall();
        test_ge_guards_its_limits();
        test_ge_signal_and_finish();
        test_io_surface();
        test_kernel_wait_timeout();
        test_kernel_wait_satisfied();
        test_event_flag_poll_code();
        test_deleting_a_semaphore_releases_its_waiters();
        test_terminating_a_thread_wakes_its_joiners();
        test_wakeup_does_not_break_a_semaphore_wait();
        test_a_terminated_waiter_does_not_eat_the_count();
        test_at3_container();
        test_atrac_surface();
        test_savedata_names_stay_put();
        test_mpeg_surface();
        test_ge_user_surface();
        test_sas_voice_length();
        test_audio_counts_only_accepted_buffers();
        test_synthetic_disc();
        test_frame_conversion();
        std::cout << "All defjam config tests passed.\n";
        return 0;
    } catch (const std::exception &exception) {
        std::cerr << "defjam config test failure: " << exception.what() << "\n";
        return 1;
    }
}

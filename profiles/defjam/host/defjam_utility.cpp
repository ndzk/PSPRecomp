#include "defjam_utility.hpp"

#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <vector>

namespace {
// Which subsystem writes a given guest address. A texture buffer that keeps
// filling with non-image bytes is either written by the game or by one of our
// own handlers, and this is how the second case is ruled in or out.
void note_write_over(const char *who, std::uint32_t at, std::uint32_t length) {
    static const std::uint32_t traced = [] {
        const char *text = std::getenv("PSPRECOMP_DEFJAM_WRITE_INTO");
        return text == nullptr ? 0u : static_cast<std::uint32_t>(std::strtoul(text, nullptr, 0));
    }();
    if (traced == 0u || traced < at || traced >= at + length) return;
    defjam::runtime_log_line(std::string(who) + " writes over " + psprecomp::hex32(traced) + ": " +
                     psprecomp::hex32(at) + " + " + std::to_string(length));
}
}  // namespace


namespace defjam {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::Runtime;

// pspUtilityDialogCommon is eleven 32-bit fields; `result` is the eighth.
constexpr std::uint32_t kCommonResultOffset = 28u;
constexpr std::uint32_t kCommonSize = 48u;

// SceUtilitySavedataParam, offsets derived from the published field order:
// the common header, then mode, bind, overwrite, gameName[13] + 3 pad,
// saveName[20], saveNameList, fileName[13] + 3 pad, dataBuf, dataBufSize,
// dataSize.
constexpr std::uint32_t kSavedataModeOffset = kCommonSize;          // 48

// Message dialog parameters, taken from a dialog this title raised: the
// structure declares 580 bytes, and the text is 512 of them starting at 60,
// which leaves the option flags and the answer as the last two words.
constexpr std::uint32_t kMessageTextOffset = 60u;
constexpr std::uint32_t kMessageOptionsOffset = 572u;
constexpr std::uint32_t kMessageButtonOffset = 576u;
constexpr std::uint32_t kMessageParamsSize = 580u;
// The option word this title sets on its question is 0x111. The low bit
// separates a text dialog from an error one and 0x100 asks for No to be
// the default, which leaves 0x10 as the flag that says there are two
// buttons to choose between at all.
constexpr std::uint32_t kMessageOptionYesNo = 0x10u;
constexpr std::uint32_t kButtonYes = 1u;
constexpr std::uint32_t kSavedataGameNameOffset = 60u;
constexpr std::uint32_t kSavedataGameNameSize = 13u;
constexpr std::uint32_t kSavedataSaveNameOffset = 76u;
constexpr std::uint32_t kSavedataSaveNameSize = 20u;
constexpr std::uint32_t kSavedataFileNameOffset = 100u;
constexpr std::uint32_t kSavedataFileNameSize = 13u;
constexpr std::uint32_t kSavedataDataBufOffset = 116u;
constexpr std::uint32_t kSavedataDataBufSizeOffset = 120u;
constexpr std::uint32_t kSavedataDataSizeOffset = 124u;

// Savedata modes this profile acts on.
constexpr std::uint32_t kModeAutoLoad = 0u;
constexpr std::uint32_t kModeAutoSave = 1u;
constexpr std::uint32_t kModeLoad = 2u;
constexpr std::uint32_t kModeSave = 3u;
// Reading one named file out of a save. Values taken from pspsdk's
// psputility_savedata.h, not from memory.
constexpr std::uint32_t kModeMakeDataSecure = 13u;
constexpr std::uint32_t kModeMakeData = 14u;
constexpr std::uint32_t kModeReadDataSecure = 15u;
constexpr std::uint32_t kModeReadData = 16u;
constexpr std::uint32_t kModeWriteDataSecure = 17u;
constexpr std::uint32_t kModeWriteData = 18u;

// Result codes. Only the last is confirmed: pspsdk defines
// PSP_SYSTEMPARAM_RETVAL_FAIL in psputility_sysparam.h, and searching that SDK
// finds neither of the savedata values. This title materialises no constant in
// the 0x8011 block at all, so it does not read them and their exactness is
// moot here; a profile whose title does check them should confirm them first.
constexpr std::uint32_t kErrorLoadNoData = 0x80110307u;      // unverified
constexpr std::uint32_t kErrorSaveAccess = 0x80110385u;      // unverified
constexpr std::uint32_t kSystemParamRetvalFail = 0x80110103u;

// System parameter ids.
constexpr std::uint32_t kSystemParamNickname = 1u;

UtilityDialog g_savedata;
UtilityDialog g_message;
UtilityStats g_stats;
std::filesystem::path g_savedata_root;

void set_return(AllegrexContext &ctx, std::uint32_t value) { ctx.set_gpr(2, value); }

std::string read_fixed_string(Runtime &rt, std::uint32_t address, std::uint32_t capacity) {
    std::string text;
    for (std::uint32_t i = 0; i < capacity; ++i) {
        const auto byte = static_cast<char>(rt.memory().load8(address + i));
        if (byte == '\0') break;
        text.push_back(byte);
    }
    return text;
}

// These names come out of guest memory and then become a path, so they may
// only ever name one directory directly under the savedata root. A separator
// or a parent reference would put the save somewhere else entirely, and
// Runtime::translate_path already refuses the same thing on the IO side; this
// path was building the name without asking.
bool is_safe_name(const std::string &text) {
    if (text.empty() || text == "." || text == "..") return false;
    return text.find('/') == std::string::npos && text.find('\\') == std::string::npos;
}

// PSP saves live in a directory named by the game and slot, holding one data
// file. Only that data file is modelled; icons, PARAM.SFO and secure files are
// not written, which is recorded rather than glossed over.
std::filesystem::path save_directory(const std::string &game_name, const std::string &save_name) {
    return g_savedata_root / (game_name + save_name);
}

void set_result(Runtime &rt, std::uint32_t param, std::uint32_t result) {
    if (param != 0u) rt.memory().store32(param + kCommonResultOffset, result);
}

void perform_load(Runtime &rt, std::uint32_t param, const std::filesystem::path &directory,
                  const std::string &file_name) {
    const std::filesystem::path file = directory / file_name;
    std::error_code ec;
    if (!std::filesystem::is_regular_file(file, ec)) {
        ++g_stats.loads_with_no_data;
        runtime_log_line("savedata load: no data at " + file.string());
        set_result(rt, param, kErrorLoadNoData);
        return;
    }

    const std::uint32_t buffer = rt.memory().load32(param + kSavedataDataBufOffset);
    const std::uint32_t capacity = rt.memory().load32(param + kSavedataDataBufSizeOffset);
    const auto size = static_cast<std::uint64_t>(std::filesystem::file_size(file, ec));
    if (buffer == 0u || capacity == 0u || size > capacity || !rt.memory().contains(buffer, capacity)) {
        // Reporting success here would hand the guest a buffer it never filled.
        runtime_log_line("savedata load: " + file.string() + " is " + std::to_string(size) +
                         " bytes but the guest offered " + std::to_string(capacity));
        set_result(rt, param, kErrorLoadNoData);
        return;
    }

    std::vector<std::uint8_t> staging(static_cast<std::size_t>(size));
    std::ifstream input(file, std::ios::binary);
    input.read(reinterpret_cast<char *>(staging.data()), static_cast<std::streamsize>(size));
    if (static_cast<std::uint64_t>(input.gcount()) != size) {
        set_result(rt, param, kErrorLoadNoData);
        return;
    }
    note_write_over("utility", buffer, static_cast<std::uint32_t>(staging.size()));
    rt.memory().copy_in(buffer, std::span<const std::uint8_t>(staging.data(), staging.size()));
    rt.memory().store32(param + kSavedataDataSizeOffset, static_cast<std::uint32_t>(size));
    ++g_stats.saves_loaded;
    runtime_log_line("savedata load: " + std::to_string(size) + " bytes from " + file.string());
    set_result(rt, param, 0u);
}

void perform_save(Runtime &rt, std::uint32_t param, const std::filesystem::path &directory,
                  const std::string &file_name) {
    const std::uint32_t buffer = rt.memory().load32(param + kSavedataDataBufOffset);
    const std::uint32_t size = rt.memory().load32(param + kSavedataDataSizeOffset);
    if (buffer == 0u || size == 0u || !rt.memory().contains(buffer, size)) {
        runtime_log_line("savedata save: guest offered no usable buffer");
        set_result(rt, param, kErrorSaveAccess);
        return;
    }

    std::error_code ec;
    std::filesystem::create_directories(directory, ec);
    const std::filesystem::path file = directory / file_name;
    std::vector<std::uint8_t> staging(size);
    rt.memory().copy_out(buffer, staging);
    std::ofstream output(file, std::ios::binary | std::ios::trunc);
    output.write(reinterpret_cast<const char *>(staging.data()), static_cast<std::streamsize>(size));
    output.flush();
    if (!output) {
        runtime_log_line("savedata save: could not write " + file.string());
        set_result(rt, param, kErrorSaveAccess);
        return;
    }
    ++g_stats.saves_written;
    runtime_log_line("savedata save: " + std::to_string(size) + " bytes to " + file.string());
    set_result(rt, param, 0u);
}

} // namespace

UtilityStats utility_stats() { return g_stats; }

std::string resolve_savedata_root(const std::string &game_root) {
    if (const char *env = std::getenv("PSPRECOMP_DEFJAM_SAVEDATA"); env != nullptr && *env != '\0')
        return env;
    // Beside the staged disc rather than inside it: saves are the user's data
    // and have no business in the directory that mirrors the disc.
    return (std::filesystem::path(game_root).parent_path() / "savedata").string();
}

void install_utility_hle(Runtime &runtime, const std::string &savedata_root) {
    g_savedata = UtilityDialog{};
    g_message = UtilityDialog{};
    g_stats = UtilityStats{};
    g_savedata_root = savedata_root;

    // -----------------------------------------------------------------------
    // Savedata dialog
    // -----------------------------------------------------------------------
    runtime.register_hle("sceUtility", 0x50C4CD57u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::uint32_t param = ctx.gpr[4];
        if (param == 0u || !rt.memory().contains(param, kSavedataDataSizeOffset + 4u)) {
            rt.stop("sceUtilitySavedataInitStart was given an unusable parameter block");
            return;
        }
        const std::uint32_t mode = rt.memory().load32(param + kSavedataModeOffset);
        const std::string game_name =
            read_fixed_string(rt, param + kSavedataGameNameOffset, kSavedataGameNameSize);
        const std::string save_name =
            read_fixed_string(rt, param + kSavedataSaveNameOffset, kSavedataSaveNameSize);
        const std::string file_name =
            read_fixed_string(rt, param + kSavedataFileNameOffset, kSavedataFileNameSize);

        ++g_stats.savedata_dialogs;
        runtime_log_line("savedata dialog mode=" + std::to_string(mode) + " game=" + game_name +
                         " save=" + save_name + " file=" + file_name + " bufSize=" +
                         std::to_string(rt.memory().load32(param + kSavedataDataBufSizeOffset)));

        if (!is_safe_name(game_name + save_name) || !is_safe_name(file_name)) {
            runtime_log_line("savedata dialog: refusing a name that leaves the savedata root: game=" +
                             game_name + " save=" + save_name + " file=" + file_name);
            set_result(rt, param, kErrorSaveAccess);
            set_return(ctx, 0u);
            return;
        }

        const std::filesystem::path directory = save_directory(game_name, save_name);
        switch (mode) {
        case kModeAutoLoad:
        case kModeLoad:
            perform_load(rt, param, directory, file_name);
            break;
        case kModeAutoSave:
        case kModeSave:
            perform_save(rt, param, directory, file_name);
            break;
        case kModeMakeDataSecure:
        case kModeMakeData: {
            // Create the save's directory and say it worked. Nothing is written
            // yet; the title follows this with a write mode.
            std::error_code ec;
            std::filesystem::create_directories(directory, ec);
            if (ec) {
                runtime_log_line("savedata make: could not create " + directory.string());
                set_result(rt, param, kErrorSaveAccess);
                break;
            }
            runtime_log_line("savedata make mode " + std::to_string(mode) + ": " +
                             directory.string());
            set_result(rt, param, 0u);
            break;
        }

        case kModeWriteDataSecure:
        case kModeWriteData:
            // The same fields plain save uses. That they are the right ones for
            // these modes is not assumed: mode 15 reported this title's file
            // name and buffer size correctly through them, which it could not
            // have done if the block were laid out differently.
            perform_save(rt, param, directory, file_name);
            break;

        case kModeReadDataSecure:
        case kModeReadData:
            // Reads through the same fields, for the same reason. A save that
            // is not there answers "no data" from inside perform_load, which is
            // what lets a first run start as a new player.
            perform_load(rt, param, directory, file_name);
            break;

        default:
            // Modes beyond plain load and save need the list, size and secure
            // file semantics pinned down first. Refused rather than answered
            // with a success that did nothing.
            rt.stop("sceUtilitySavedata mode " + std::to_string(mode) +
                    " is not implemented (game=" + game_name + ", save=" + save_name + ")");
            return;
        }

        g_savedata.begin();
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceUtility", 0x8874DBE0u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, g_savedata.read());
    });
    runtime.register_hle("sceUtility", 0xD4B95FFBu, [](Runtime &, AllegrexContext &ctx) {
        g_savedata.update();
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceUtility", 0x9790B33Cu, [](Runtime &, AllegrexContext &ctx) {
        g_savedata.shutdown();
        set_return(ctx, 0u);
    });

    // -----------------------------------------------------------------------
    // Message dialog. There is no screen to show it on and no button to
    // dismiss it with, so it opens and closes; the text is logged so a message
    // the title wanted the player to read is not lost silently.
    // -----------------------------------------------------------------------
    runtime.register_hle("sceUtility", 0x2AD8E239u, [](Runtime &rt, AllegrexContext &ctx) {
        const std::uint32_t param = ctx.gpr[4];
        ++g_stats.message_dialogs;
        if (param != 0u && rt.memory().contains(param, kCommonSize + 8u)) {
            // The layout was measured rather than assumed, on a dialog this
            // title raised: the structure declares 580 bytes, the longest run
            // of printable bytes starts at 60, and 60 + 512 leaves exactly the
            // two trailing words. Reading the message from 52 - which is the
            // mode word - is what logged every message as empty while the
            // title was repeating the same complaint.
            if (rt.memory().contains(param, kMessageParamsSize)) {
                const std::uint32_t options = rt.memory().load32(param + kMessageOptionsOffset);
                // A dialog that asks a question and never gets an answer is
                // asked again. This title asked "Do you wish to continue
                // without loading?" 14,674 times running, because nothing here
                // ever wrote the answer back.
                //
                // Headless there is no one to press the button, so the profile
                // answers as the only player who could get anywhere would: it
                // confirms. That is a decision made on the guest's behalf, so
                // it is logged with the question rather than applied quietly.
                if ((options & kMessageOptionYesNo) != 0u) {
                    rt.memory().store32(param + kMessageButtonOffset, kButtonYes);
                }
                runtime_log_line("message dialog: " +
                                 read_fixed_string(rt, param + kMessageTextOffset, 512u) +
                                 " [options " + psprecomp::hex32(options) + "]" +
                                 ((options & kMessageOptionYesNo) != 0u ? " answered yes" : ""));
            }
            set_result(rt, param, 0u);
        }
        g_message.begin();
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceUtility", 0x9A1C91D7u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, g_message.read());
    });
    runtime.register_hle("sceUtility", 0x95FC253Bu, [](Runtime &, AllegrexContext &ctx) {
        g_message.update();
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceUtility", 0x67AF3428u, [](Runtime &, AllegrexContext &ctx) {
        g_message.shutdown();
        set_return(ctx, 0u);
    });

    // -----------------------------------------------------------------------
    // System parameters
    // -----------------------------------------------------------------------
    runtime.register_hle("sceUtility", 0x34B78343u, [](Runtime &rt, AllegrexContext &ctx) {
        // (id, buffer, length). Only the nickname is a string parameter.
        const std::uint32_t id = ctx.gpr[4];
        const std::uint32_t buffer = ctx.gpr[5];
        const std::uint32_t length = ctx.gpr[6];
        if (id != kSystemParamNickname) {
            runtime_log_line("sceUtilityGetSystemParamString: unknown id " + std::to_string(id));
            set_return(ctx, kSystemParamRetvalFail);
            return;
        }
        // There is no console profile to read, so the name is empty rather
        // than invented. A title that shows it gets a blank, not a fiction.
        if (buffer != 0u && length != 0u && rt.memory().contains(buffer, 1u))
            rt.memory().store8(buffer, 0u);
        set_return(ctx, 0u);
    });

    // -----------------------------------------------------------------------
    // Net modules. Nothing is loaded, and nothing in this profile serves the
    // ad-hoc networking they would provide; accepting the request is what lets
    // a title that only calls them during setup carry on.
    // -----------------------------------------------------------------------
    runtime.register_hle("sceUtility", 0x1579A159u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, 0u);
    });
    runtime.register_hle("sceUtility", 0x64D50C56u, [](Runtime &, AllegrexContext &ctx) {
        set_return(ctx, 0u);
    });
}

} // namespace defjam

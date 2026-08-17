#include "defjam_utility.hpp"

#include "defjam_profile.hpp"
#include "psprecomp/common.hpp"

#include <algorithm>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <vector>

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

// Result codes, from the published kernel error list.
constexpr std::uint32_t kErrorLoadNoData = 0x80110307u;
constexpr std::uint32_t kErrorSaveAccess = 0x80110385u;
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
            // The message follows the common header and a mode word.
            runtime_log_line("message dialog: " +
                             read_fixed_string(rt, param + kCommonSize + 4u, 512u));
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

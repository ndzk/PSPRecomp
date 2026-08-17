#pragma once

#include "psprecomp/runtime.hpp"

#include <cstdint>
#include <string>

namespace defjam {

// PSP utility dialogs: savedata, message dialog and the system parameters.
//
// A utility dialog is a state machine the guest drives from its own loop:
// InitStart begins it, GetStatus reports where it is, Update advances it and
// ShutdownStart ends it. On hardware the dialog is a piece of UI the user
// interacts with; headless there is nobody to interact, so the work happens at
// InitStart and the machine walks straight through.
//
// Status values, and the rule that reading INITIALIZE or SHUTDOWN advances
// past it, are the observable contract; a title that never sees RUNNING or
// never gets back to NONE will loop forever.

// Status values a dialog reports. Reading INITIALIZE advances to RUNNING and
// reading SHUTDOWN advances to NONE, so each is observed exactly once; a guest
// that never sees RUNNING, or never gets back to NONE, loops forever.
enum class DialogStatus : std::uint32_t {
    None = 0,
    Initialize = 1,
    Running = 2,
    Finished = 3,
    Shutdown = 4,
};

// The dialog state machine, free of any Runtime so it can be tested directly.
struct UtilityDialog {
    DialogStatus status{DialogStatus::None};

    void begin() { status = DialogStatus::Initialize; }

    // Reading is not free of side effects; that is what moves the guest along.
    std::uint32_t read() {
        const DialogStatus observed = status;
        if (status == DialogStatus::Initialize) status = DialogStatus::Running;
        else if (status == DialogStatus::Shutdown) status = DialogStatus::None;
        return static_cast<std::uint32_t>(observed);
    }

    // Headless there is no fade and no user, so a running dialog is done as
    // soon as the guest gives it a turn.
    void update() {
        if (status == DialogStatus::Running) status = DialogStatus::Finished;
    }

    void shutdown() { status = DialogStatus::Shutdown; }
};

void install_utility_hle(psprecomp::Runtime &runtime, const std::string &savedata_root);

struct UtilityStats {
    std::uint64_t savedata_dialogs{};
    std::uint64_t message_dialogs{};
    std::uint64_t saves_written{};
    std::uint64_t saves_loaded{};
    std::uint64_t loads_with_no_data{};
};
[[nodiscard]] UtilityStats utility_stats();

// Where saves are read from and written to. Resolved from
// PSPRECOMP_DEFJAM_SAVEDATA, else a "savedata" directory beside the game root.
[[nodiscard]] std::string resolve_savedata_root(const std::string &game_root);

} // namespace defjam

#include "vcs_diagnostics.hpp"

#include "psprecomp/common.hpp"

#include <cstdlib>
#include <iostream>

namespace vcs {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::Runtime;
using psprecomp::hex32;

struct Flags {
    bool heap{};
    bool request_alloc{};
    bool world_stream{};
    bool world_stream_stop{};
    bool file_object{};
    bool file_object_stop{};
    std::uint32_t world_stream_manager{};

    [[nodiscard]] bool any() const {
        return heap || request_alloc || world_stream || file_object;
    }
};

Flags g_flags;

// Carried across dispatches, so the world-stream transition is reported once
// per change rather than once per dispatch.
bool g_world_active_known = false;
std::uint32_t g_world_previous_active = 0u;

std::uint64_t environment_u64(const char *name, std::uint64_t fallback) {
    const char *text = std::getenv(name);
    if (text == nullptr || *text == '\0') return fallback;
    char *end = nullptr;
    const unsigned long long value = std::strtoull(text, &end, 0);
    return end != text && *end == '\0' ? static_cast<std::uint64_t>(value) : fallback;
}

bool environment_set(const char *name) { return std::getenv(name) != nullptr; }

} // namespace

bool install_vcs_diagnostics() {
    g_flags = Flags{};
    g_flags.heap = environment_set("PSPRECOMP_HEAP_DIAG");
    g_flags.request_alloc = environment_set("PSPRECOMP_REQUEST_ALLOC_DIAG");
    g_flags.world_stream = environment_set("PSPRECOMP_WORLD_STREAM_DIAG");
    g_flags.world_stream_stop = environment_set("PSPRECOMP_WORLD_STREAM_STOP_AT_CALLBACK");
    g_flags.file_object = environment_set("PSPRECOMP_FILE_OBJECT_DIAG");
    g_flags.file_object_stop = environment_set("PSPRECOMP_FILE_OBJECT_STOP_ON_NULL");
    g_flags.world_stream_manager =
        static_cast<std::uint32_t>(environment_u64("PSPRECOMP_WORLD_STREAM_MANAGER", 0x08E91200u));
    g_world_active_known = false;
    g_world_previous_active = 0u;
    return g_flags.any();
}

bool vcs_diagnostics_enabled() { return g_flags.any(); }

void vcs_diagnostics_pre_dispatch(Runtime &rt, AllegrexContext &ctx, std::uint32_t dispatch_pc,
                                  std::int32_t dispatch_thread_uid) {
    (void)dispatch_thread_uid;
    if (dispatch_pc == 0x089345B0u && g_flags.heap) {
        constexpr std::uint32_t manager = 0x08BC6500u;
        std::cerr << "[heapdiag] callback entered manager=" << hex32(manager)
                  << " global=" << hex32(rt.memory().load32(0x08BADEF8u)) << "\n";
        for (std::uint32_t offset = 0; offset < 0x140u; offset += 16u) {
            std::cerr << "[heapdiag] " << hex32(manager + offset);
            for (std::uint32_t word = 0; word < 16u; word += 4u)
                std::cerr << " " << hex32(rt.memory().load32(manager + offset + word));
            std::cerr << "\n";
        }
        std::uint32_t block = rt.memory().load32(manager + 8u);
        for (std::uint32_t index = 0u; block != 0u && index < 64u; ++index) {
            if (!rt.memory().contains(block, 16u)) {
                std::cerr << "[heapdiag-free] invalid=" << hex32(block) << "\n";
                return;
            }
            const std::uint32_t size = rt.memory().load32(block + 0u);
            const std::uint32_t prev = rt.memory().load32(block + 8u);
            const std::uint32_t next = rt.memory().load32(block + 12u);
            std::cerr << "[heapdiag-free] index=" << index << " block=" << hex32(block)
                      << " size=" << hex32(size) << " prev=" << hex32(prev)
                      << " next=" << hex32(next) << " end=" << hex32(block + size) << "\n";
            block = next;
        }
    }
    if (g_flags.request_alloc &&
        (dispatch_pc == 0x089390ACu || dispatch_pc == 0x08939114u ||
         dispatch_pc == 0x08939590u || dispatch_pc == 0x089395D4u ||
         dispatch_pc == 0x0893961Cu || dispatch_pc == 0x089396D8u ||
         dispatch_pc == 0x089397CCu || dispatch_pc == 0x08956258u)) {
        const psprecomp::RuntimeExecutionContextToken token = psprecomp::capture_runtime_execution_context();
        std::uint32_t manager = 0u;
        if (dispatch_pc == 0x08939590u) manager = ctx.gpr[4];
        else if (dispatch_pc == 0x089395D4u || dispatch_pc == 0x0893961Cu ||
                 dispatch_pc == 0x089396D8u) manager = ctx.gpr[16];
        else if ((dispatch_pc == 0x089390ACu || dispatch_pc == 0x08939114u) &&
                 rt.memory().contains(ctx.gpr[28] + 5908u, 4u))
            manager = rt.memory().load32(ctx.gpr[28] + 5908u);
        else if (dispatch_pc == 0x089397CCu) manager = ctx.gpr[4];
        std::cerr << "[reqalloc] pc=" << hex32(dispatch_pc)
                  << " uid=" << token.thread_uid
                  << " gen=" << token.switch_generation
                  << " v0=" << hex32(ctx.gpr[2])
                  << " a0=" << hex32(ctx.gpr[4])
                  << " a1=" << hex32(ctx.gpr[5])
                  << " a2=" << hex32(ctx.gpr[6])
                  << " a3=" << hex32(ctx.gpr[7])
                  << " t0=" << hex32(ctx.gpr[8])
                  << " t1=" << hex32(ctx.gpr[9])
                  << " s0=" << hex32(ctx.gpr[16])
                  << " s1=" << hex32(ctx.gpr[17])
                  << " s2=" << hex32(ctx.gpr[18])
                  << " sp=" << hex32(ctx.gpr[29])
                  << " ra=" << hex32(ctx.gpr[31]);
        if (manager != 0u && rt.memory().contains(manager + 6912u, 4u)) {
            const std::uint32_t free_head = rt.memory().load32(manager + 6900u);
            const std::uint32_t active_head = rt.memory().load32(manager + 6908u);
            std::cerr << " manager=" << hex32(manager)
                      << " free_head=" << hex32(free_head)
                      << " active_head=" << hex32(active_head);
        }
        std::uint32_t request = 0u;
        if (dispatch_pc == 0x089397CCu) request = ctx.gpr[5];
        else if (dispatch_pc == 0x089396D8u) request = ctx.gpr[18];
        else if (dispatch_pc == 0x08956258u || dispatch_pc == 0x08939114u) request = ctx.gpr[2];
        if (request != 0u && rt.memory().contains(request, 52u)) {
            std::cerr << " req=" << hex32(request)
                      << " prev=" << hex32(rt.memory().load32(request + 0u))
                      << " next=" << hex32(rt.memory().load32(request + 4u))
                      << " size=" << rt.memory().load32(request + 8u)
                      << " source=" << hex32(rt.memory().load32(request + 16u))
                      << " offset=" << rt.memory().load32(request + 20u)
                      << " remaining=" << rt.memory().load32(request + 24u)
                      << " progressed=" << rt.memory().load32(request + 28u)
                      << " callback=" << hex32(rt.memory().load32(request + 48u));
        }
        std::cerr << "\n";
    }
    if (g_flags.world_stream &&
        (dispatch_pc == 0x08953990u || dispatch_pc == 0x08955134u ||
         dispatch_pc == 0x08955E7Cu || dispatch_pc == 0x08956258u ||
         dispatch_pc == 0x089563C0u || dispatch_pc == 0x08956408u ||
         dispatch_pc == 0x089569C0u || dispatch_pc == 0x089569E0u)) {
        std::cerr << "[worlddiag] pc=" << hex32(dispatch_pc)
                  << " uid=" << psprecomp::runtime_thread_uid()
                  << " a0=" << hex32(ctx.gpr[4])
                  << " a1=" << hex32(ctx.gpr[5])
                  << " ra=" << hex32(ctx.gpr[31]);
        if (dispatch_pc == 0x089563C0u && rt.memory().contains(ctx.gpr[4], 1040u)) {
            const std::uint32_t manager = ctx.gpr[4];
            std::cerr << " req=" << hex32(ctx.gpr[5])
                      << " f596=" << hex32(rt.memory().load32(manager + 596u))
                      << " f600=" << hex32(rt.memory().load32(manager + 600u))
                      << " event=" << rt.memory().load32(manager + 616u)
                      << " active=" << hex32(rt.memory().load32(manager + 628u))
                      << " mode=" << rt.memory().load32(manager + 636u)
                      << " work=" << hex32(rt.memory().load32(manager + 640u))
                      << " limit=" << rt.memory().load32(manager + 648u)
                      << " stack=" << rt.memory().load32(manager + 1036u);
        }
        std::uint32_t manager = g_flags.world_stream_manager;
        if (dispatch_pc == 0x08955E7Cu || dispatch_pc == 0x08956258u) manager = ctx.gpr[17];
        else if (dispatch_pc == 0x08956408u) manager = ctx.gpr[16];
        else if (dispatch_pc == 0x089563C0u) manager = ctx.gpr[4];
        if (manager != 0u && rt.memory().contains(manager + 628u, 4u)) {
            std::cerr << " manager=" << hex32(manager)
                      << " active_before=" << hex32(rt.memory().load32(manager + 628u))
                      << " pending_v0=" << hex32(ctx.gpr[2]);
        }
        std::cerr << "\n";
        if (g_flags.world_stream_stop && dispatch_pc == 0x089563C0u) {
            rt.stop("World-stream diagnostic stop at callback " + hex32(dispatch_pc));
            return;
        }
    }
    if (g_flags.file_object &&
        (dispatch_pc == 0x08938F04u || dispatch_pc == 0x08938F7Cu || dispatch_pc == 0x089394A4u ||
         dispatch_pc == 0x08955DCCu || dispatch_pc == 0x08955DFCu || dispatch_pc == 0x08955E58u ||
         dispatch_pc == 0x08955E7Cu)) {
        const std::uint32_t manager =
            dispatch_pc == 0x08955DCCu ? ctx.gpr[4] :
            ((dispatch_pc == 0x08955DFCu || dispatch_pc == 0x08955E58u || dispatch_pc == 0x08955E7Cu) ? ctx.gpr[17] : 0u);
        const std::uint32_t object = dispatch_pc == 0x08938F7Cu ? ctx.gpr[4] :
            (dispatch_pc == 0x089394A4u ? ctx.gpr[5] : 0u);
        const bool seek_pc = dispatch_pc == 0x08938F7Cu || dispatch_pc == 0x089394A4u;
        bool manager_changed = false;
        static std::uint32_t previous_manager = 0u;
        static std::uint32_t previous_file_object = 0xFFFFFFFFu;
        static std::uint32_t previous_active = 0xFFFFFFFFu;
        static std::uint32_t previous_mode = 0xFFFFFFFFu;
        std::uint32_t manager_file_object = 0u;
        std::uint32_t manager_active = 0u;
        std::uint32_t manager_mode = 0u;
        if (manager != 0u && rt.memory().contains(manager, 652u)) {
            manager_file_object = rt.memory().load32(manager + 624u);
            manager_active = rt.memory().load32(manager + 628u);
            manager_mode = rt.memory().load32(manager + 636u);
            manager_changed = manager != previous_manager ||
                manager_file_object != previous_file_object ||
                manager_active != previous_active || manager_mode != previous_mode;
            previous_manager = manager;
            previous_file_object = manager_file_object;
            previous_active = manager_active;
            previous_mode = manager_mode;
        }
        const bool should_log = dispatch_pc == 0x08938F04u ||
            (seek_pc && object == 0u) || manager_changed;
        if (should_log) {
            std::cerr << "[fileobj] pc=" << hex32(dispatch_pc)
                      << " uid=" << psprecomp::runtime_thread_uid()
                      << " name=" << psprecomp::runtime_thread_name()
                      << " v0=" << hex32(ctx.gpr[2])
                      << " a0=" << hex32(ctx.gpr[4])
                      << " a1=" << hex32(ctx.gpr[5])
                      << " a2=" << hex32(ctx.gpr[6])
                      << " a3=" << hex32(ctx.gpr[7])
                      << " s0=" << hex32(ctx.gpr[16])
                      << " s1=" << hex32(ctx.gpr[17])
                      << " sp=" << hex32(ctx.gpr[29])
                      << " ra=" << hex32(ctx.gpr[31]);
            if (dispatch_pc == 0x08938F04u && rt.memory().contains(ctx.gpr[4])) {
                try { std::cerr << " path=\"" << rt.memory().read_c_string(ctx.gpr[4], 512u) << "\""; } catch (...) {}
            }
            if (manager != 0u && rt.memory().contains(manager, 652u)) {
                std::cerr << " manager=" << hex32(manager)
                          << " f596=" << hex32(rt.memory().load32(manager + 596u))
                          << " f600=" << hex32(rt.memory().load32(manager + 600u))
                          << " event=" << rt.memory().load32(manager + 616u)
                          << " fileobj=" << hex32(manager_file_object)
                          << " active=" << hex32(manager_active)
                          << " mode=" << manager_mode
                          << " work=" << hex32(rt.memory().load32(manager + 640u))
                          << " offset=" << rt.memory().load32(manager + 644u)
                          << " length=" << rt.memory().load32(manager + 648u);
            }
            if (object != 0u && rt.memory().contains(object, 16u)) {
                std::cerr << " object=" << hex32(object)
                          << " words=" << hex32(rt.memory().load32(object + 0u))
                          << "," << hex32(rt.memory().load32(object + 4u))
                          << "," << hex32(rt.memory().load32(object + 8u))
                          << "," << hex32(rt.memory().load32(object + 12u));
            }
            std::cerr << "\n";
        }
        if (g_flags.file_object_stop && seek_pc && object == 0u) {
            rt.stop("File-object diagnostic stop dispatch_pc null seek at " + hex32(dispatch_pc));
            return;
        }
    }
}

void vcs_diagnostics_post_dispatch(Runtime &rt, AllegrexContext &ctx, std::uint32_t dispatch_pc,
                                   std::int32_t dispatch_thread_uid) {
    (void)ctx;
    if (g_flags.world_stream && g_flags.world_stream_manager != 0u &&
        rt.memory().contains(g_flags.world_stream_manager + 628u, 4u)) {
        const std::uint32_t active = rt.memory().load32(g_flags.world_stream_manager + 628u);
        if (!g_world_active_known) {
            g_world_previous_active = active;
            g_world_active_known = true;
        } else if (active != g_world_previous_active) {
            std::cerr << "[worlddiag-transition] dispatch_pc=" << hex32(dispatch_pc)
                      << " uid_before=" << dispatch_thread_uid
                      << " uid_after=" << psprecomp::runtime_thread_uid()
                      << " manager=" << hex32(g_flags.world_stream_manager)
                      << " active=" << hex32(g_world_previous_active)
                      << "->" << hex32(active)
                      << " next_pc=" << hex32(ctx.pc);
            if (active != 0u && rt.memory().contains(active, 52u)) {
                std::cerr << " source=" << hex32(rt.memory().load32(active + 16u))
                          << " offset=" << rt.memory().load32(active + 20u)
                          << " remaining=" << rt.memory().load32(active + 24u)
                          << " progressed=" << rt.memory().load32(active + 28u)
                          << " callback=" << hex32(rt.memory().load32(active + 48u));
            }
            std::cerr << "\n";
            g_world_previous_active = active;
        }
        if (dispatch_pc == 0x08955E7Cu || dispatch_pc == 0x08956258u ||
            dispatch_pc == 0x08956408u || dispatch_pc == 0x089563C0u) {
            std::cerr << "[worlddiag-after] dispatch_pc=" << hex32(dispatch_pc)
                      << " uid_before=" << dispatch_thread_uid
                      << " uid_after=" << psprecomp::runtime_thread_uid()
                      << " manager=" << hex32(g_flags.world_stream_manager)
                      << " active_after=" << hex32(active)
                      << " next_pc=" << hex32(ctx.pc) << "\n";
        }
    }
}

} // namespace vcs

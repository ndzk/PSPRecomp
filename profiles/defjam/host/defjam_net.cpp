#include "defjam_net.hpp"

#include "defjam_profile.hpp"

#include "psprecomp/common.hpp"
#include "psprecomp/runtime.hpp"

#include <array>
#include <cstdint>
#include <string>
#include <unordered_set>

namespace defjam {
namespace {

using psprecomp::AllegrexContext;
using psprecomp::Runtime;

// What these return, and why it is not dressed up as an SCE error code.
//
// Reporting success would be the worse lie: the title would walk into a
// wireless session it cannot hold up, and fail somewhere far from here. Failing
// is also what a real PSP reports with no peer in range, so the guest's own
// no-wireless path is the honest destination.
//
// The value below is this profile's sentinel rather than a measured SCE
// constant, and it can be, because no call site in this executable compares the
// result against one. Every one of the 39 imports is either called for effect
// and its result ignored, or tested only for zero versus non-zero -- checked by
// reading each call site in the AOT corpus, not assumed. So any non-zero value
// sends the guest down the branch it already has. Writing a plausible-looking
// 0x8041xxxx here would read as a measured fact and would not be one; if some
// caller is ever found to want a specific code, measure it and replace this.
//
// The top bit is set so that a caller testing the result as a signed integer
// sees a negative, which is the PSP convention for failure.
constexpr std::uint32_t kNetUnavailable = 0x80000001u;

struct NetImport {
    const char *library;
    std::uint32_t nid;
    const char *name;
};

// Library, NID and name are the executable's own import table as read by
// psp_analyze, with names resolved through configs/nids.csv. This table is
// transcribed from that output rather than written by hand.
constexpr std::array<NetImport, 39> kNetImports{{
    {"sceNet", 0x0BF0A3AEu, "sceNetGetLocalEtherAddr"},
    {"sceNet", 0x281928A9u, "sceNetTerm"},
    {"sceNet", 0x39AF39A6u, "sceNetInit"},
    {"sceNetAdhoc", 0x0B2228E9u, "sceNetAdhocGameModeDeleteReplica"},
    {"sceNetAdhoc", 0x157E6225u, "sceNetAdhocPtpClose"},
    {"sceNetAdhoc", 0x3278AB0Cu, "sceNetAdhocGameModeCreateReplica"},
    {"sceNetAdhoc", 0x4DA4C788u, "sceNetAdhocPtpSend"},
    {"sceNetAdhoc", 0x7F75C338u, "sceNetAdhocGameModeCreateMaster"},
    {"sceNetAdhoc", 0x877F6D66u, "sceNetAdhocPtpOpen"},
    {"sceNetAdhoc", 0x8BEA2B3Eu, "sceNetAdhocPtpRecv"},
    {"sceNetAdhoc", 0x98C204C8u, "sceNetAdhocGameModeUpdateMaster"},
    {"sceNetAdhoc", 0x9AC2EEACu, "sceNetAdhocPtpFlush"},
    {"sceNetAdhoc", 0x9DF81198u, "sceNetAdhocPtpAccept"},
    {"sceNetAdhoc", 0xA0229362u, "sceNetAdhocGameModeDeleteMaster"},
    {"sceNetAdhoc", 0xA62C6F57u, "sceNetAdhocTerm"},
    {"sceNetAdhoc", 0xE08BDAC1u, "sceNetAdhocPtpListen"},
    {"sceNetAdhoc", 0xE1D621D7u, "sceNetAdhocInit"},
    {"sceNetAdhoc", 0xFA324B4Eu, "sceNetAdhocGameModeUpdateReplica"},
    {"sceNetAdhoc", 0xFC6FC07Bu, "sceNetAdhocPtpConnect"},
    {"sceNetAdhocctl", 0x0AD043EDu, "sceNetAdhocctlConnect"},
    {"sceNetAdhocctl", 0x1FF89745u, "sceNetAdhocctlJoinEnterGameMode"},
    {"sceNetAdhocctl", 0x20B317A0u, "sceNetAdhocctlAddHandler"},
    {"sceNetAdhocctl", 0x34401D65u, "sceNetAdhocctlDisconnect"},
    {"sceNetAdhocctl", 0x6402490Bu, "sceNetAdhocctlDelHandler"},
    {"sceNetAdhocctl", 0x8916C003u, "sceNetAdhocctlGetNameByAddr"},
    {"sceNetAdhocctl", 0x8DB83FDCu, "sceNetAdhocctlGetPeerInfo"},
    {"sceNetAdhocctl", 0x9D689E13u, "sceNetAdhocctlTerm"},
    {"sceNetAdhocctl", 0xA5C055CEu, "sceNetAdhocctlCreateEnterGameMode"},
    {"sceNetAdhocctl", 0xCF8E084Du, "sceNetAdhocctlExitGameMode"},
    {"sceNetAdhocctl", 0xE162CB14u, "sceNetAdhocctlGetPeerList"},
    {"sceNetAdhocctl", 0xE26F226Eu, "sceNetAdhocctlInit"},
    {"sceNetAdhocMatching", 0x2A2A1E07u, "sceNetAdhocMatchingInit"},
    {"sceNetAdhocMatching", 0x32B156B3u, "sceNetAdhocMatchingStop"},
    {"sceNetAdhocMatching", 0x5E3D4B79u, "sceNetAdhocMatchingSelectTarget"},
    {"sceNetAdhocMatching", 0x7945ECDAu, "sceNetAdhocMatchingTerm"},
    {"sceNetAdhocMatching", 0x93EF3843u, "sceNetAdhocMatchingStart"},
    {"sceNetAdhocMatching", 0xCA5EDA6Fu, "sceNetAdhocMatchingCreate"},
    {"sceNetAdhocMatching", 0xEA3C6108u, "sceNetAdhocMatchingCancelTarget"},
    {"sceNetAdhocMatching", 0xF16EAF4Fu, "sceNetAdhocMatchingDelete"},
}};

// Reported once per import. A wireless menu can poll one of these every frame,
// and a line per call would bury the log without saying anything new; the first
// one already carries the name and the call site.
std::unordered_set<std::uint32_t> g_reported;

} // namespace

void install_net_hle(Runtime &runtime) {
    g_reported.clear();
    for (const auto &entry : kNetImports) {
        runtime.register_hle(entry.library, entry.nid,
                             [entry](Runtime &, AllegrexContext &ctx) {
                                 if (g_reported.insert(entry.nid).second) {
                                     runtime_log_line(
                                         std::string(entry.name) +
                                         ": ad-hoc networking is not implemented, returning " +
                                         psprecomp::hex32(kNetUnavailable) + " to the caller at " +
                                         psprecomp::hex32(ctx.gpr[31]));
                                 }
                                 ctx.set_gpr(2, kNetUnavailable);
                             });
    }
}

} // namespace defjam

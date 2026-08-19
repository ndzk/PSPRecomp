#pragma once

namespace psprecomp {
class Runtime;
}

namespace defjam {

// Ad-hoc networking is not implemented.
//
// This title binds 39 wireless imports across sceNet, sceNetAdhoc,
// sceNetAdhocctl and sceNetAdhocMatching. Without handlers the runtime stops
// the whole run on the first one it reaches, and the message names the import
// but not who called it. install_net_hle registers all 39 so a call instead
// reports itself once, with the guest return address it came from, and hands
// back a failure the title already knows how to act on.
//
// Nothing here emulates a network. Single-player never reaches these; the
// wireless menus do, and they should back out rather than take the run down.
void install_net_hle(psprecomp::Runtime &runtime);

} // namespace defjam

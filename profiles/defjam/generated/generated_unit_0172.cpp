#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0172[509] = {
    1, 0, 0, 2, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0,
    13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0,
    29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0,
    45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0,
    61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0,
    77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0,
    93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0,
    109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0,
    125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0,
    141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0,
    157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0,
    173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0,
    189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0,
    205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0,
    221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0,
    237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251,
};
void recomp_unit_0172_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB4004u;
        entry_id = (entry_delta < 2036u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0172[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB4004;
    case 2u: goto L_08AB4010;
    case 3u: goto L_08AB4018;
    case 4u: goto L_08AB401C;
    case 5u: goto L_08AB4044;
    case 6u: goto L_08AB404C;
    case 7u: goto L_08AB4054;
    case 8u: goto L_08AB405C;
    case 9u: goto L_08AB4064;
    case 10u: goto L_08AB406C;
    case 11u: goto L_08AB4074;
    case 12u: goto L_08AB407C;
    case 13u: goto L_08AB4084;
    case 14u: goto L_08AB408C;
    case 15u: goto L_08AB4094;
    case 16u: goto L_08AB409C;
    case 17u: goto L_08AB40A4;
    case 18u: goto L_08AB40AC;
    case 19u: goto L_08AB40B4;
    case 20u: goto L_08AB40BC;
    case 21u: goto L_08AB40C4;
    case 22u: goto L_08AB40CC;
    case 23u: goto L_08AB40D4;
    case 24u: goto L_08AB40DC;
    case 25u: goto L_08AB40E4;
    case 26u: goto L_08AB40EC;
    case 27u: goto L_08AB40F4;
    case 28u: goto L_08AB40FC;
    case 29u: goto L_08AB4104;
    case 30u: goto L_08AB410C;
    case 31u: goto L_08AB4114;
    case 32u: goto L_08AB411C;
    case 33u: goto L_08AB4124;
    case 34u: goto L_08AB412C;
    case 35u: goto L_08AB4134;
    case 36u: goto L_08AB413C;
    case 37u: goto L_08AB4144;
    case 38u: goto L_08AB414C;
    case 39u: goto L_08AB4154;
    case 40u: goto L_08AB415C;
    case 41u: goto L_08AB4164;
    case 42u: goto L_08AB416C;
    case 43u: goto L_08AB4174;
    case 44u: goto L_08AB417C;
    case 45u: goto L_08AB4184;
    case 46u: goto L_08AB418C;
    case 47u: goto L_08AB4194;
    case 48u: goto L_08AB419C;
    case 49u: goto L_08AB41A4;
    case 50u: goto L_08AB41AC;
    case 51u: goto L_08AB41B4;
    case 52u: goto L_08AB41BC;
    case 53u: goto L_08AB41C4;
    case 54u: goto L_08AB41CC;
    case 55u: goto L_08AB41D4;
    case 56u: goto L_08AB41DC;
    case 57u: goto L_08AB41E4;
    case 58u: goto L_08AB41EC;
    case 59u: goto L_08AB41F4;
    case 60u: goto L_08AB41FC;
    case 61u: goto L_08AB4204;
    case 62u: goto L_08AB420C;
    case 63u: goto L_08AB4214;
    case 64u: goto L_08AB421C;
    case 65u: goto L_08AB4224;
    case 66u: goto L_08AB422C;
    case 67u: goto L_08AB4234;
    case 68u: goto L_08AB423C;
    case 69u: goto L_08AB4244;
    case 70u: goto L_08AB424C;
    case 71u: goto L_08AB4254;
    case 72u: goto L_08AB425C;
    case 73u: goto L_08AB4264;
    case 74u: goto L_08AB426C;
    case 75u: goto L_08AB4274;
    case 76u: goto L_08AB427C;
    case 77u: goto L_08AB4284;
    case 78u: goto L_08AB428C;
    case 79u: goto L_08AB4294;
    case 80u: goto L_08AB429C;
    case 81u: goto L_08AB42A4;
    case 82u: goto L_08AB42AC;
    case 83u: goto L_08AB42B4;
    case 84u: goto L_08AB42BC;
    case 85u: goto L_08AB42C4;
    case 86u: goto L_08AB42CC;
    case 87u: goto L_08AB42D4;
    case 88u: goto L_08AB42DC;
    case 89u: goto L_08AB42E4;
    case 90u: goto L_08AB42EC;
    case 91u: goto L_08AB42F4;
    case 92u: goto L_08AB42FC;
    case 93u: goto L_08AB4304;
    case 94u: goto L_08AB430C;
    case 95u: goto L_08AB4314;
    case 96u: goto L_08AB431C;
    case 97u: goto L_08AB4324;
    case 98u: goto L_08AB432C;
    case 99u: goto L_08AB4334;
    case 100u: goto L_08AB433C;
    case 101u: goto L_08AB4344;
    case 102u: goto L_08AB434C;
    case 103u: goto L_08AB4354;
    case 104u: goto L_08AB435C;
    case 105u: goto L_08AB4364;
    case 106u: goto L_08AB436C;
    case 107u: goto L_08AB4374;
    case 108u: goto L_08AB437C;
    case 109u: goto L_08AB4384;
    case 110u: goto L_08AB438C;
    case 111u: goto L_08AB4394;
    case 112u: goto L_08AB439C;
    case 113u: goto L_08AB43A4;
    case 114u: goto L_08AB43AC;
    case 115u: goto L_08AB43B4;
    case 116u: goto L_08AB43BC;
    case 117u: goto L_08AB43C4;
    case 118u: goto L_08AB43CC;
    case 119u: goto L_08AB43D4;
    case 120u: goto L_08AB43DC;
    case 121u: goto L_08AB43E4;
    case 122u: goto L_08AB43EC;
    case 123u: goto L_08AB43F4;
    case 124u: goto L_08AB43FC;
    case 125u: goto L_08AB4404;
    case 126u: goto L_08AB440C;
    case 127u: goto L_08AB4414;
    case 128u: goto L_08AB441C;
    case 129u: goto L_08AB4424;
    case 130u: goto L_08AB442C;
    case 131u: goto L_08AB4434;
    case 132u: goto L_08AB443C;
    case 133u: goto L_08AB4444;
    case 134u: goto L_08AB444C;
    case 135u: goto L_08AB4454;
    case 136u: goto L_08AB445C;
    case 137u: goto L_08AB4464;
    case 138u: goto L_08AB446C;
    case 139u: goto L_08AB4474;
    case 140u: goto L_08AB447C;
    case 141u: goto L_08AB4484;
    case 142u: goto L_08AB448C;
    case 143u: goto L_08AB4494;
    case 144u: goto L_08AB449C;
    case 145u: goto L_08AB44A4;
    case 146u: goto L_08AB44AC;
    case 147u: goto L_08AB44B4;
    case 148u: goto L_08AB44BC;
    case 149u: goto L_08AB44C4;
    case 150u: goto L_08AB44CC;
    case 151u: goto L_08AB44D4;
    case 152u: goto L_08AB44DC;
    case 153u: goto L_08AB44E4;
    case 154u: goto L_08AB44EC;
    case 155u: goto L_08AB44F4;
    case 156u: goto L_08AB44FC;
    case 157u: goto L_08AB4504;
    case 158u: goto L_08AB450C;
    case 159u: goto L_08AB4514;
    case 160u: goto L_08AB451C;
    case 161u: goto L_08AB4524;
    case 162u: goto L_08AB452C;
    case 163u: goto L_08AB4534;
    case 164u: goto L_08AB453C;
    case 165u: goto L_08AB4544;
    case 166u: goto L_08AB454C;
    case 167u: goto L_08AB4554;
    case 168u: goto L_08AB455C;
    case 169u: goto L_08AB4564;
    case 170u: goto L_08AB456C;
    case 171u: goto L_08AB4574;
    case 172u: goto L_08AB457C;
    case 173u: goto L_08AB4584;
    case 174u: goto L_08AB458C;
    case 175u: goto L_08AB4594;
    case 176u: goto L_08AB459C;
    case 177u: goto L_08AB45A4;
    case 178u: goto L_08AB45AC;
    case 179u: goto L_08AB45B4;
    case 180u: goto L_08AB45BC;
    case 181u: goto L_08AB45C4;
    case 182u: goto L_08AB45CC;
    case 183u: goto L_08AB45D4;
    case 184u: goto L_08AB45DC;
    case 185u: goto L_08AB45E4;
    case 186u: goto L_08AB45EC;
    case 187u: goto L_08AB45F4;
    case 188u: goto L_08AB45FC;
    case 189u: goto L_08AB4604;
    case 190u: goto L_08AB460C;
    case 191u: goto L_08AB4614;
    case 192u: goto L_08AB461C;
    case 193u: goto L_08AB4624;
    case 194u: goto L_08AB462C;
    case 195u: goto L_08AB4634;
    case 196u: goto L_08AB463C;
    case 197u: goto L_08AB4644;
    case 198u: goto L_08AB464C;
    case 199u: goto L_08AB4654;
    case 200u: goto L_08AB465C;
    case 201u: goto L_08AB4664;
    case 202u: goto L_08AB466C;
    case 203u: goto L_08AB4674;
    case 204u: goto L_08AB467C;
    case 205u: goto L_08AB4684;
    case 206u: goto L_08AB468C;
    case 207u: goto L_08AB4694;
    case 208u: goto L_08AB469C;
    case 209u: goto L_08AB46A4;
    case 210u: goto L_08AB46AC;
    case 211u: goto L_08AB46B4;
    case 212u: goto L_08AB46BC;
    case 213u: goto L_08AB46C4;
    case 214u: goto L_08AB46CC;
    case 215u: goto L_08AB46D4;
    case 216u: goto L_08AB46DC;
    case 217u: goto L_08AB46E4;
    case 218u: goto L_08AB46EC;
    case 219u: goto L_08AB46F4;
    case 220u: goto L_08AB46FC;
    case 221u: goto L_08AB4704;
    case 222u: goto L_08AB470C;
    case 223u: goto L_08AB4714;
    case 224u: goto L_08AB471C;
    case 225u: goto L_08AB4724;
    case 226u: goto L_08AB472C;
    case 227u: goto L_08AB4734;
    case 228u: goto L_08AB473C;
    case 229u: goto L_08AB4744;
    case 230u: goto L_08AB474C;
    case 231u: goto L_08AB4754;
    case 232u: goto L_08AB475C;
    case 233u: goto L_08AB4764;
    case 234u: goto L_08AB476C;
    case 235u: goto L_08AB4774;
    case 236u: goto L_08AB477C;
    case 237u: goto L_08AB4784;
    case 238u: goto L_08AB478C;
    case 239u: goto L_08AB4794;
    case 240u: goto L_08AB479C;
    case 241u: goto L_08AB47A4;
    case 242u: goto L_08AB47AC;
    case 243u: goto L_08AB47B4;
    case 244u: goto L_08AB47BC;
    case 245u: goto L_08AB47C4;
    case 246u: goto L_08AB47CC;
    case 247u: goto L_08AB47D4;
    case 248u: goto L_08AB47DC;
    case 249u: goto L_08AB47E4;
    case 250u: goto L_08AB47EC;
    case 251u: goto L_08AB47F4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB4004:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
        goto L_08AB401C;
    }
    goto L_08AB4010;
L_08AB4010:
    ctx.gpr[31] = (0x08AB4018u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 97u, 0x08AA8780u>(ctx, &aot_mem) && ctx.pc == 0x08AB4018u) goto L_08AB4018;
    return;
L_08AB4018:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    goto L_08AB401C;
L_08AB401C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(18400), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18404), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4044:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB404C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4054:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB405C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4064:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB406C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4074:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB407C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4084:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB408C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4094:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB409C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB40FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4104:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB410C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4114:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB411C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4124:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB412C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4134:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB413C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4144:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB414C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB415C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4164:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB416C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4174:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB417C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4184:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB418C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4194:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB419C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB41FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4204:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB420C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4214:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB421C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB422C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4234:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB423C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4244:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB424C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4254:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB425C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4264:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB426C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4274:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB427C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4284:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB428C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4294:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB429C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB42FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4304:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB430C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4314:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB431C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4324:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB432C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4334:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB433C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4344:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB434C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4354:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB435C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4364:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB436C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4374:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB437C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4384:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB438C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4394:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB439C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB43FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4404:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB440C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4414:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB441C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4424:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB442C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4434:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB443C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4444:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB444C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4454:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB445C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4464:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB446C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4474:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB447C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4484:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB448C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4494:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB449C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB44FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4504:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB450C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4514:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB451C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4524:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB452C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4534:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB453C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4544:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB454C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4554:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB455C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4564:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB456C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4574:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB457C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4584:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB458C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4594:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB459C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB45FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4604:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB460C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4614:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB461C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB462C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4634:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB463C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4644:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB464C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4654:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB465C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4664:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB466C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4674:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB467C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB468C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4694:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB469C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB46FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4704:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB470C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4714:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB471C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4724:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB472C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4734:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB473C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4744:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB474C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4754:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB475C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4764:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB476C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4774:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB477C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4784:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB478C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4794:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB479C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB47F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0172(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0172_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_172(Runtime &runtime) {
    runtime.register_generated_unit(172u, 0x08AB4000u, 16384u, &recomp_unit_0172, &recomp_unit_0172_entry);
    runtime.register_function(0x08AB4004u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4010u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4018u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB401Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4044u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB404Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4054u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB405Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4064u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB406Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4074u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB407Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4084u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB408Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4094u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB409Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4104u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB410Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4114u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB411Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4124u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB412Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4134u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB413Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4144u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB414Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4154u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB415Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4164u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB416Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4174u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB417Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4184u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB418Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4194u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB419Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4204u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB420Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4214u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB421Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB422Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4234u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB423Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4244u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB424Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4254u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB425Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4264u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB426Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4274u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB427Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4284u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB428Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4294u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB429Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4304u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB430Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4314u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB431Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4324u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB432Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4334u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB433Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4344u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB434Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4354u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB435Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4364u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB436Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4374u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB437Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4384u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB438Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4394u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB439Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4404u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB440Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4414u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB441Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4424u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB442Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4434u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB443Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4444u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB444Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4454u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB445Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4464u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB446Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4474u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB447Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4484u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB448Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4494u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB449Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB44FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4504u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB450Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4514u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB451Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4524u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB452Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB453Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4544u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB454Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4554u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB455Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4564u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB456Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4574u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB457Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4584u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB458Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4594u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB459Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB460Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4614u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB461Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4624u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB462Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4634u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB463Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4644u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB464Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4654u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB465Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4664u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB466Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4674u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB467Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4684u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB468Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4694u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB469Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB46FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4704u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB470Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4714u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB471Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4724u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB472Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4734u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB473Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4744u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB474Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4754u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB475Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4764u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB476Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4774u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB477Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4784u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB478Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4794u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB479Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47F4u, &recomp_unit_0172, "recomp_unit_0172");
}
} // namespace psprecomp

#include "m2c.h"

s32 G2S_GetBG3CharPtr();
M2C_UNK func_02051af4(s32, M2C_UNK, s32, u32);
M2C_UNK MIi_CpuCopy32(M2C_UNK, s32, u32);
extern s32 GXi_DmaId;

void func_0204e728(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = G2S_GetBG3CharPtr();
    if ((GXi_DmaId != -1) && (arg2 > 0x30U)) {
        func_02051af4(GXi_DmaId, arg0, temp_ip + arg1, arg2);
        return;
    }
    MIi_CpuCopy32(arg0, temp_ip + arg1, arg2);
}

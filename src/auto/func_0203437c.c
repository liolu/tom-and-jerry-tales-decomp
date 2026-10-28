#include "m2c.h"

M2C_UNK MIi_CpuCopy32(M2C_UNK, s32, M2C_UNK);
extern M2C_UNK data_02091be4;

void func_0203437c(s32 arg0, M2C_UNK arg1) {
    MIi_CpuCopy32(arg1, (arg0 * 0x7B0) + (s32) &data_02091be4 + 8, 0xC);
}

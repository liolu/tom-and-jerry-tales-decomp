#include "m2c.h"

s32 func_0203dee8(M2C_UNK);
M2C_UNK MI_CpuCopy8(M2C_UNK, s32, M2C_UNK);

void func_0203db80(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r1;

    if (func_0203dee8(arg1) != 0) {
        var_r1 = 0x05000000;
    } else {
        var_r1 = 0x05000400;
    }
    MI_CpuCopy8(arg0, var_r1, 0x200);
}

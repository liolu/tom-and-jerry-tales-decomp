#include "m2c.h"

M2C_UNK (*func_02041454())(M2C_UNK, M2C_UNK, s32, s32);

void func_020413f0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    M2C_UNK (*temp_r0)(M2C_UNK, M2C_UNK, s32, s32);

    temp_r0 = func_02041454();
    if (temp_r0 == NULL) {
        return;
    }
    temp_r0(arg2, arg3, arg4, arg5);
}

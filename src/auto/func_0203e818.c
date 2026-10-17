#include "m2c.h"

M2C_UNK func_0203d740(s32, u16, u16, s32, s32, s32, s32); /* extern */
s32 func_0203d8d8(M2C_UNK, s32);                    /* extern */
M2C_UNK func_02051a48();                            /* extern */
extern M2C_UNK data_020b8b44;

s32 func_0203e818(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3, u16 arg4, s32 arg5, u16 arg6, u8 arg7) {
    s32 temp_r0;

    if (arg1 == 0) {
        func_02051a48();
    }
    temp_r0 = func_0203d8d8(arg2, arg5);
    func_0203d740(arg1, (u16) (arg3 - (temp_r0 >> 1)), arg4, arg5, (s32) (u8) arg6, (s32) arg7,
                  (arg0 * 0x28) + (s32) &data_020b8b44);
    return temp_r0;
}

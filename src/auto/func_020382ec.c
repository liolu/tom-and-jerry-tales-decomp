#include "m2c.h"

M2C_UNK func_020386ec(M2C_UNK *, M2C_UNK *, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0204b94c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_0204b980(M2C_UNK *, M2C_UNK *);            /* extern */

s32 func_020382ec(M2C_UNK *arg0, s32 arg1, s32 arg2, M2C_UNK *arg3, s32 arg4, s32 arg5) {
    u8 sp44[12];
    u8 sp38[12];
    u8 sp2C[12];
    u8 sp20[12];
    u8 sp14[12];
    u8 sp8[12];
    s32 temp_r8;

    func_020386ec(arg0, arg3, arg4, arg5, sp38, sp8);
    func_020386ec(arg3, arg0, arg1, arg2, sp44, sp8);
    func_0204b94c(arg0, sp38, sp2C);
    func_0204b94c(arg3, sp44, sp20);
    temp_r8 = func_0204b980(sp2C, sp2C);
    if (temp_r8 < func_0204b980(sp20, sp20)) {
        func_020386ec(sp38, arg0, arg1, arg2, sp44, sp8);
    } else {
        func_020386ec(sp44, arg3, arg4, arg5, sp38, sp8);
    }
    func_0204b94c(sp44, sp38, sp14);
    return func_0204b980(sp14, sp14) - 0x64;
}

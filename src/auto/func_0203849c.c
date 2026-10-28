#include "m2c.h"

M2C_UNK func_01ff99e8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *);
M2C_UNK func_020386ec(M2C_UNK *, M2C_UNK *, s32, s32, M2C_UNK *, M2C_UNK *);
M2C_UNK VEC_Subtract(M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 VEC_DotProduct(M2C_UNK *, M2C_UNK *);

s32 func_0203849c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK *arg3, s32 arg4, s32 arg5) {
    u8 sp20[12];
    u8 sp14[12];
    u8 sp8[12];

    func_01ff99e8(arg3, arg0, arg1, arg2, sp20, sp8);
    func_020386ec(sp20, arg3, arg4, arg5, sp14, sp8);
    func_01ff99e8(sp14, arg0, arg1, arg2, sp20, sp8);
    func_020386ec(sp20, arg3, arg4, arg5, sp14, sp8);
    func_01ff99e8(sp14, arg0, arg1, arg2, sp20, sp8);
    func_020386ec(sp20, arg3, arg4, arg5, sp14, sp8);
    VEC_Subtract(sp20, sp14, sp8);
    return VEC_DotProduct(sp8, sp8) - 0xA;
}

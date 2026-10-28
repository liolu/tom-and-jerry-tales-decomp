#include "m2c.h"

M2C_UNK MTX_MultVec33(M2C_UNK *, void *, M2C_UNK *);
M2C_UNK VEC_Add(s32, s32, M2C_UNK *);
M2C_UNK VEC_MultAdd(s32, M2C_UNK *, void *, M2C_UNK);

void func_02003658(void *arg0, s32 arg1, M2C_UNK arg2) {
    u8 sp0[12];

    VEC_Add((arg1 * 0x14) + (s32) (arg0 + 0x154), (M2C_FIELD(arg0, u8 *, 0x128) * 0xC) + (s32) (arg0 + 0x13C), sp0);
    MTX_MultVec33(sp0, arg0 + 0x7C, sp0);
    VEC_MultAdd(M2C_FIELD(arg0, s32 *, 0x54) * 4, sp0, arg0 + 0xAC, arg2);
}

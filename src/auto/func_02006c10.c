#include "m2c.h"

M2C_UNK func_02006bb0(M2C_UNK *, M2C_UNK);
s32 func_02007470();
M2C_UNK func_02039d0c(M2C_UNK *, M2C_UNK *, s32);
M2C_UNK MTX_Identity33_(M2C_UNK *);
M2C_UNK func_0204b070(M2C_UNK *, s16, s16);
M2C_UNK MTX_MultVec33(M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK VEC_Add(void *, M2C_UNK *, void *);
extern M2C_UNK data_02064748;
extern M2C_UNK data_02067e48;
extern s32 data_020692ec;
extern s32 data_0206ace8;
extern u8 data_0206e678;
extern M2C_UNK data_02086a88;

typedef struct {
    s32 a, b, c;
} V3;
void func_02006c10(V3 *arg0, V3 *arg1, M2C_UNK *arg2) {
    s32 sp18[9];
    s32 spC[3];
    s32 sp0[3];

    func_02006bb0(sp0, -0x1000);
    func_02039d0c(sp0, arg2, 0x4CC);
    MTX_Identity33_(sp18);
    if ((data_0206ace8 != 0) && (func_02007470() != 7) && (data_020692ec == 4)) {
        if (data_0206e678 & 1) {
            func_0204b070(sp18, M2C_FIELD(&data_02064748, s16 *, 0xF8), M2C_FIELD(&data_02064748, s16 *, 0xFA));
        } else if (data_0206e678 & 2) {
            func_0204b070(sp18, M2C_FIELD(&data_02067e48, s16 *, 4), M2C_FIELD(&data_02067e48, s16 *, 6));
        }
    }
    MTX_MultVec33(arg2, sp18, arg2);
    *arg0 = *arg1;
    func_02039d0c(sp0, spC, M2C_FIELD(&data_02086a88, s32 *, 0xC));
    VEC_Add(arg0, spC, arg0);
    arg0->b = (s32) (arg0->b + M2C_FIELD(&data_02086a88, s32 *, 8));
}

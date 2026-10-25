#include "m2c.h"

M2C_UNK func_02006bb0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02007470();                                /* extern */
M2C_UNK func_02039d0c(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_0204b014(M2C_UNK *);                   /* extern */
M2C_UNK func_0204b070(M2C_UNK *, s16, s16);         /* extern */
M2C_UNK func_0204b404(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0204b918(void *, M2C_UNK *, void *);   /* extern */
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
    func_0204b014(sp18);
    if ((data_0206ace8 != 0) && (func_02007470() != 7) && (data_020692ec == 4)) {
        if (data_0206e678 & 1) {
            func_0204b070(sp18, M2C_FIELD(&data_02064748, s16 *, 0xF8), M2C_FIELD(&data_02064748, s16 *, 0xFA));
        } else if (data_0206e678 & 2) {
            func_0204b070(sp18, M2C_FIELD(&data_02067e48, s16 *, 4), M2C_FIELD(&data_02067e48, s16 *, 6));
        }
    }
    func_0204b404(arg2, sp18, arg2);
    *arg0 = *arg1;
    func_02039d0c(sp0, spC, M2C_FIELD(&data_02086a88, s32 *, 0xC));
    func_0204b918(arg0, spC, arg0);
    arg0->b = (s32) (arg0->b + M2C_FIELD(&data_02086a88, s32 *, 8));
}

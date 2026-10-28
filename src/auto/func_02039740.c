#include "m2c.h"

s32 func_02039d0c(void *, void *, M2C_UNK);
s32 VEC_DotProduct(void *, void *);

s32 func_02039740(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_3;
    s32 var_r5;
    s32 var_r6;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;

    temp_r0_4 = arg0 + 0x88;
    var_r6    = 0;
    var_r5    = 0;
    temp_r0_5 = arg0 + 0x94;
    if (VEC_DotProduct(temp_r0_4, temp_r0_4) < 0x64) {
        var_r5 = 1;
    }
    if (VEC_DotProduct(temp_r0_5, temp_r0_5) < 0x1F4) {
        temp_r0_6 = arg0 + 0x94;
        func_02039d0c(temp_r0_6, temp_r0_6, 0);
        M2C_FIELD(arg0, s16 *, 0x6C) = 0;
    }
    temp_r0_7 = arg0 + 0x70;
    temp_r0_8 = arg0 + 0x7C;
    if (VEC_DotProduct(temp_r0_7, temp_r0_7) < 0x64) {
        var_r6 = 1;
    }
    temp_r0 = VEC_DotProduct(temp_r0_8, temp_r0_8);
    if ((var_r5 != 0) && (var_r6 != 0)) {
        temp_r0_3 = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) << 0x1E) >> 0x1F;
        if (temp_r0_3 == 0) {
            return temp_r0_3;
        }
        temp_r0_9                    = arg0 + 0x88;
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) & ~0x100);
        func_02039d0c(temp_r0_9, temp_r0_9, 0);
        temp_r0_2 = arg0 + 0x94;
        return func_02039d0c(temp_r0_2, temp_r0_2, 0);
    }
    return temp_r0;
}

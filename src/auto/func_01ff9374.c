#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V3;
s32 func_01ff8e94(s32 a, s32 b, s32 c, s32 d);
extern u16 data_020a0b78[];
extern s32 *data_027e0080;

s32 func_01ff9374(s32 *arg0, s32 arg1, u8 *arg2, s32 *arg3) {
    V3 sp0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 var_r4;
    s32 var_r2;
    u8 *temp_r4;

    temp_r4                  = arg2;
    data_020a0b78[3]         = data_020a0b78[3] + 1;
    *(s16 *) (temp_r4 + 0xE) = 1;
    if (*(u16 *) (temp_r4 + 6) != 0) {
        data_020a0b78[2] = data_020a0b78[2] + 1;
        return func_01ff8e94((s32) arg0, arg1, (s32) arg2, (s32) arg3);
    }
    switch (*(u16 *) (temp_r4 + 0xC)) {
        case 0:
            var_r2 = arg0[0];
            break;
        case 1:
            var_r2 = arg0[1];
            break;
        case 2:
            var_r2 = arg0[2];
            break;
    }
    temp_r1 = *(s32 *) (temp_r4 + 8);
    if (var_r2 + arg1 <= temp_r1) {
        var_r4 = func_01ff9374(arg0, arg1, (u8 *) *data_027e0080 + *(u16 *) (temp_r4 + 4) * 0x10, arg3);
    } else if (var_r2 - arg1 >= temp_r1) {
        var_r4 = func_01ff9374(arg0, arg1, (u8 *) *data_027e0080 + (*(u16 *) (temp_r4 + 4) + 1) * 0x10, arg3);
    } else {
        var_r4    = func_01ff9374(arg0, arg1, (u8 *) *data_027e0080 + *(u16 *) (temp_r4 + 4) * 0x10, arg3);
        temp_r0_2 = func_01ff9374(arg0, arg1, (u8 *) *data_027e0080 + (*(u16 *) (temp_r4 + 4) + 1) * 0x10, (s32 *) &sp0);
        if (temp_r0_2 < var_r4) {
            var_r4       = temp_r0_2;
            *(V3 *) arg3 = sp0;
        }
    }
    return var_r4;
}

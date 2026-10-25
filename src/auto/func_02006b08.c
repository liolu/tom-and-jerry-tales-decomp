#include "m2c.h"

void func_02033df8(s32);
extern s32 data_020692e0;
extern u8 data_02086a88;
extern u8 data_02086ac0[];

void func_02006b08(s32 arg0) {
    s16 i = 0;
    s32 *p;
    if ((s32) data_02086a88 > 0) {
        p = (s32 *) (data_02086ac0 + arg0 * 0xC);
        do {
            func_02033df8(p[i]);
            p[i] = -1;
            i    = i + 1;
        } while ((s32) data_02086a88 > (s32) i);
    }
    data_020692e0 = -1;
}

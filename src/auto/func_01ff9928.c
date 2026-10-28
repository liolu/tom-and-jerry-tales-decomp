#include "m2c.h"

s32 func_01ff99e8(void *, void *, void *, s32, void *, void *);
void VEC_Subtract(void *, void *, void *);
s32 VEC_DotProduct(void *, void *);

s32 func_01ff9928(void *a0, s32 a1, void *a2, void *a3, s32 a4) {
    s32 sp20[3];
    s32 sp14[3];
    s32 sp8[3];
    u16 flag;
    s32 t;
    s32 r;

    flag = func_01ff99e8(a0, a2, a3, a4, sp20, sp14);
    VEC_Subtract(sp20, a0, sp8);
    sp8[0] *= 0x10;
    sp8[1] *= 0x10;
    sp8[2] *= 0x10;
    r = VEC_DotProduct(sp8, sp8);
    t = a1 * 0x10;
    r = (r >> 8) - ((s32) (((long long) t * t + 0x800) >> 12) >> 8);
    if (r <= 0) {
        return r;
    }
    if (flag != 0) {
        r *= -1;
    }
    return r;
}

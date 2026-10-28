#include "m2c.h"
typedef struct {
    s32 a, b, c;
} V3;
void func_01ff9df0(void *, void *, void *, s32);
void func_01ffa2dc(void *, void *, void *, s32);
void func_02036380(void *);
s32 func_020363a4(void *, u16);
void func_02039d0c(void *, void *, s32);
void VEC_Add(void *, void *, void *);
void func_0203620c(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *base;
    u32 i;
    u8 *v8;
    V3 sp0;
    u8 *v9;
    u8 *v4;
    s32 a;
    s32 b;
    *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + ((*(s32 *) (arg0 + 0x10) * arg2) >> 12);
    v4                    = arg1;
    func_02036380(*(void **) arg0);
    a = func_020363a4(*(void **) arg0, *(u16 *) (arg0 + 0x14));
    if (*(s32 *) (arg0 + 0xC) == 0) {
        b = 0;
    } else {
        b = func_020363a4(*(void **) arg0, *(u16 *) (arg0 + 0x16));
    }
    base = *(u8 **) arg0;
    v8   = base + 0x420 + a * 0xA14;
    v9   = base + 0x420 + b * 0xA14;
    func_01ff9df0(base + 0x54 + a * 0xA14, base + 0x54 + b * 0xA14, arg0 + 0x38 + arg0[0x24] * 12,
                  0x1000 - *(s32 *) (arg0 + 0xC));
    for (i = 0; i < *(u32 *) (*(u8 **) arg0 + 0x1E8C);) {
        func_01ffa2dc(v8 + 0xC, v9 + 0xC, v4 + 0xC, *(s32 *) (arg0 + 0xC));
        func_02039d0c(v8, v4, 0x1000 - *(s32 *) (arg0 + 0xC));
        func_02039d0c(v9, &sp0, *(s32 *) (arg0 + 0xC));
        VEC_Add(v4, &sp0, v4);
        i++;
        v8 += 0x14;
        v9 += 0x14;
        v4 += 0x14;
    }
}

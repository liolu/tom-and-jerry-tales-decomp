#include "m2c.h"

s32 func_020482c4(void);
s32 func_020485e0(s32, void *, s32, s32);
u8 *func_02048678(void);
void func_020486a0(s32, void *);
u8 *func_02048824(s32, s32, void *, s32, s32);
void func_02050b08(void *, s32);
void func_02051fd0(void *, s32, s32);
void func_02052064(void *, void *, s32);
extern s32 data_021af4f4[];
extern u32 data_021af4f0[];
extern u8 func_020491dc;

u8 *func_02048ff4(s32 arg0, s32 arg1, s32 arg2) {
    s32 b;
    u8 *p;
    s32 a;
    s32 t;

    p = func_02048678();
    if (p == NULL) {
        if (func_020485e0(arg0, &data_021af4f0[1], 0x3C, 0) != 0x3C) {
            return NULL;
        }
        a = *(s32 *) ((u8 *) data_021af4f4 + 0x38) * 4;
        b = a * 2;
        if (arg1 == 0) {
            return NULL;
        }
        if (arg2 == 0) {
            t = 0;
        } else {
            t = func_020482c4();
        }
        p = func_02048824(arg1, b + 0x5C, &func_020491dc, t, arg0);
        if (p == NULL) {
            return NULL;
        }
        t = func_020485e0(arg0, p, a + 0x3C, 0);
        if (t != a + 0x3C) {
            return NULL;
        }
        func_02052064(p + 0x3C, p + 0x3C + *(s32 *) (p + 0x38) * 4, a);
        func_02051fd0(p + 0x3C, 0, a);
        func_02050b08(p, b + 0x3C);
        if (arg2 != 0) {
            func_020486a0(arg0, p);
        }
    }
    return p;
}

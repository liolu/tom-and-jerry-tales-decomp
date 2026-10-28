#include "m2c.h"

typedef struct {
    u8 p0[0xc];
    u16 fc;
    u8 p1[0x14 - 0xe];
    void (*f14)(void *, void *);
    u8 p2[0x24 - 0x18];
    s32 f24;
} G;
extern G data_020b8ea0;
extern u8 data_020ba280[];
extern u8 data_0206db2c[];
extern void DC_FlushRange(void *, int);
extern u16 func_0203f33c(void);
extern void func_0203f2ec(void);
extern s32 func_02058870(void (*)(void), int, int, int, u16, u16, u16);
extern void func_0203f1f4(s32);
extern void *func_0203f1cc(s32);

s32 func_0203f210(int arg0, int arg1, int arg2) {
    s32 r;
    u16 x;
    DC_FlushRange(data_020ba280, data_020b8ea0.f24);
    x = (func_0203f33c() != 0) ? 1 : (data_020b8ea0.fc & 0xfffe);
    r = func_02058870(func_0203f2ec, arg2, arg0, arg1, x, 5, 1);
    if (r != 2) {
        func_0203f1f4(r);
        if (data_020b8ea0.f14 != 0) {
            data_020b8ea0.f14(data_0206db2c, func_0203f1cc(r));
        }
        return 0;
    }
    return 1;
}

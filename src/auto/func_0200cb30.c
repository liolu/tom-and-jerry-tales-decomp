#include "m2c.h"
s32 func_02004330(s32);
void func_0203d740(s32, s32, u16, s32, s32, s32, void *);
s32 func_0203dea8(void);
s32 func_0203deb8(void);
s32 func_0203dec8(void);
s32 func_0203ded8(void);
extern u8 data_020b8b44[];
void func_0200cb30(void) {
    s32 i = 0;
    s32 x = 16;
    do {
        s32 a = func_02004330(i);
        s32 b = func_0203dea8();
        s32 c = func_0203dec8();
        s32 d = func_0203deb8();
        func_0203d740(a, 0x20, x, func_0203ded8(), d, c, data_020b8b44 + b * 0x28);
        x += 12;
        i++;
    } while (i < 0x62);
}

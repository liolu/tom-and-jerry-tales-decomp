#include "m2c.h"
typedef struct {
    u8 d[0x28];
} E;
extern s32 data_0206a5c8[];
extern E data_020b8b44[];
s32 func_0203dea8(void);
s32 func_0203deb8(void);
s32 func_0203dec8(void);
s32 func_0203ded8(void);
void func_0203d740(s32, s32, u16, s32, s32, s32, void *);

void func_0200cab0(void) {
    u32 i = 0;
    s32 o, a, b, c;
    s32 y = 0x10;
    do {
        o = data_0206a5c8[i];
        a = func_0203dea8();
        b = func_0203dec8();
        c = func_0203deb8();
        func_0203d740(o, 0x20, y, func_0203ded8(), c, b, &data_020b8b44[a]);
        y += 0xC;
        i++;
    } while (i < 9);
}

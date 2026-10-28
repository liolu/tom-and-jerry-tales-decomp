#include "m2c.h"

s32 _s32_div_f(s32, u16);
extern u8 data_02063f5c[];
extern u8 data_02063f64[];
extern u16 data_02063fc4;

void func_02011468(u32 arg0) {
    u8 r4;
    u8 i;
    u8 t;
    u16 *pal                     = (u16 *) 0x05000400;
    *(volatile u16 *) 0x04001040 = ((((u8) _s32_div_f(arg0 * 0x7E, data_02063fc4) + 0x41) << 8) & 0xFF00) | 0xBF;
    *(volatile u16 *) 0x04001044 = 0xACB7;
    i                            = 0;
    do {
        if (arg0 >= data_02063f5c[i]) {
            r4 = i;
        }
        i += 1;
    } while (i < 5U);
    t         = data_02063f64[r4];
    pal[0xB3] = pal[t];
    pal[0xB4] = pal[t + 1];
    pal[0xB5] = pal[t + 2];
}

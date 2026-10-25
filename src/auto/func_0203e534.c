#include "m2c.h"
void func_0203e534(u32 *buf, u32 x, u32 y, u32 v) {
    u32 m;
    u32 w;
    u16 i;
    u8 sh;
    i      = (u16) (((x & 0xf8) << 1));
    i      = (u16) (i + ((y & 0xf8) << 6));
    i      = i + (((s32) (x & 4)) >> 2);
    i      = i + ((y & 7) << 1);
    sh     = (x << 30) >> 27;
    m      = ~(0xff << sh);
    w      = buf[i];
    buf[i] = (w & m) | ((v & 0xff) << sh);
}

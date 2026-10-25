#include "m2c.h"
u32 func_02062ec4(u64, u32, u32);
void func_0202cba8(u64 v, u16 *out) {
    u32 t  = func_02062ec4(v << 6, 0x82EA, 0);
    u32 s  = t / 1000;
    out[1] = s % 60;
    out[2] = (t - s * 1000) / 10;
    out[0] = t / 60000;
}

#include "m2c.h"
typedef void (*DrawFn)(s32, u16, u16, u16);
extern s32 func_0203e374(s32);
extern s32 func_0203e498(s32, s32);
extern void func_0203d924(u8, u16, u16, u16, u16, s32);
void func_0203d0d8(u16 x, u16 y, u16 w, u16 h, u8 flag, u8 c, s32 *a6) {
    u16 xx;
    u16 yy;
    s32 p;
    s32 q;
    p = func_0203e374((s32) a6);
    q = func_0203e498(a6[2], a6[3]);
    for (yy = y; yy < y + h; yy++) {
        for (xx = x; xx < x + w; xx++) {
            ((DrawFn) q)(p, xx, yy, c);
        }
    }
    func_0203d924(flag, x, y, w, h, (s32) a6);
}

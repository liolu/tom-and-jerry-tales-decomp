#include "m2c.h"
extern s32 func_0203e374(s32);
extern s32 func_0203e498(s32, s32);
extern u16 func_0203e5c0(s32, u8, u16, u16, u8 *, s32, s32);
extern void func_0203d924(u8, u16, u16, u16, u16, s32);
u16 func_0203d740(s8 *s, u16 x, u16 y, u8 *font, u8 flag, s32 a5, s32 *a6) {
    u16 vy;
    u16 hx;
    u16 mx;
    s32 p;
    s32 q;
    vy = 0;
    mx = 0;
    hx = 0;
    p  = func_0203e374((s32) a6);
    q  = func_0203e498(a6[2], a6[3]);
    while (*s != 0) {
        if (*s == 10) {
            vy += (u16) (font[*(s32 *) (font + 0x14)] + 6);
            if (mx < hx) {
                mx = hx;
            }
            hx = 0;
            s++;
        } else {
            u8 c = *s++ - 0x1f;
            hx   = hx + func_0203e5c0(p, c, x + hx, y + vy, font, a5, q);
        }
    }
    vy += (u16) (font[*(s32 *) (font + 0x14)] + 6);
    if (mx < hx) {
        mx = hx;
    }
    func_0203d924(flag, x, y, mx, vy, (s32) a6);
    return mx;
}

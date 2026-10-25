#include "m2c.h"
typedef void (*DrawFn)(s32, u16, u16, u16);
u32 func_0203e5c0(s32 ctx, u8 ch, u16 x, u16 y, u8 *font, u8 pal, DrawFn fn) {
    u8 *g;
    u16 w, h;
    u16 row, col;
    u8 c;
    g    = font + ((u32 *) font)[ch];
    h    = g[1];
    w    = g[0];
    font = g + 2;
    for (row = 0; row < h; row++) {
        for (col = 0; col < w; col++) {
            c = *font++;
            if (c != 0) {
                fn(ctx, x + col, y + row, pal + c);
            }
        }
    }
    return w;
}

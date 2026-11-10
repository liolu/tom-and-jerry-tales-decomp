#include "m2c.h"
typedef void (*PlotFn)(s32, u16, u16, u8);
extern u16 data_02064168[2][9];
extern s32 func_0203e374(s32);
extern PlotFn func_0203e498(s32, s32);
extern s32 func_0203dfb4(s32);
extern s32 func_0203df28(s32);
extern void func_0203d924(u8, u16, u16, u16, u16, s32);

void func_0203d2d4(u8 *src, u16 x, u16 y, u16 w, u16 h, u8 flag, u8 transp, s32 *a6) {
    u16 xx;
    u16 yy;
    s32 ctx;
    s32 shape;
    s32 maxh;
    s32 obj;
    PlotFn plot;
    u8 pix;
    u16 xe;
    u16 k;
    s32 n;
    s32 xend;
    u16 ye;
    ctx   = func_0203e374((s32) a6);
    shape = a6[1];
    maxh  = (s32) (((u32) data_02064168[1][shape] << 19) >> 16);
    obj   = a6[2];
    n     = 0;
    plot  = func_0203e498(obj, a6[3]);
    xend  = x + w;
    xe    = xend > (s32) (((u32) data_02064168[0][shape] << 19) >> 16) ? (s32) (((u32) data_02064168[0][shape] << 19) >> 16)
                                                                       : xend;
    {
        s32 t = y + h;
        if (t > maxh) {
            t = maxh;
        }
        ye = t;
    }
    for (yy = y; yy < ye; yy++) {
        for (xx = x; xx < xe; xx++) {
            if (n & 1) {
                pix >>= 4;
                n++;
            } else {
                pix = *src++;
                n++;
            }
            if (!transp || pix) {
                plot(ctx, xx, yy, pix & 0xF);
            }
        }
        for (k = xe; k < xend; k++) {
            src++;
        }
    }
    if (func_0203dfb4(obj) == 0) {
        return;
    }
    if (func_0203df28(obj) != 0) {
        return;
    }
    func_0203d924(flag, x, y, w, h, (s32) a6);
}

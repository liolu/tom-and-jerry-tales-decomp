#include "m2c.h"
void DC_FlushRange(void *p, s32 n);
void GX_LoadOAM(void *p, s32 o, s32 n);
void GXS_LoadOAM(void *p, s32 o, s32 n);
extern s32 data_020b84dc;
extern u8 data_020b84e0[];
void func_0203c24c(s32 i, u32 a, s32 b) {
    u8 *g = data_020b84e0 + data_020b84dc * 0x32C;
    u32 v = *(u32 *) (g + (i << 3)) & 0xFE00FF00;
    v |= (b & 0xFF);
    v |= ((a << 23) >> 7);
    *(u32 *) (g + (i << 3)) = v;
    DC_FlushRange(g + (i << 3), 8);
    if (data_020b84dc == 0) {
        GX_LoadOAM(data_020b84e0 + data_020b84dc * 0x32C + (i << 3) + 0, (s32) (i * 8u), 8);
        return;
    }
    GXS_LoadOAM(data_020b84e0 + data_020b84dc * 0x32C + (i << 3) + 0, (s32) (i * 8u), 8);
}

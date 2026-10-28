#include "m2c.h"

typedef struct {
    u8 pad[0x324];
    u16 a;
    u16 b;
    s32 c;
} T;

extern void MIi_CpuClear32(s32, void *, s32);
extern s32 _s32_div_f(s32, s32);
extern void DC_FlushRange(void *, s32);
extern void func_0203cc68(s32, s32);
extern void GX_LoadOAM(void *, s32, s32);
extern void GXS_LoadOAM(void *, s32, s32);
extern s32 data_020b84dc;
extern T data_020b84e0[];

void func_0203bb80(void) {
    if (data_020b84e0[data_020b84dc].c != 0) {
        MIi_CpuClear32(0xc0, &data_020b84e0[data_020b84dc], 0x210);
        data_020b84e0[data_020b84dc].a = _s32_div_f(
            (data_020b84e0[data_020b84dc].b + 0x7f) & ~(data_020b84e0[data_020b84dc].b - 1), data_020b84e0[data_020b84dc].b);
    } else {
        MIi_CpuClear32(0xc0, &data_020b84e0[data_020b84dc], 0x218);
        data_020b84e0[data_020b84dc].a = 0;
    }
    DC_FlushRange(&data_020b84e0[data_020b84dc], 0x218);
    func_0203cc68(4, data_020b84dc);
    if (data_020b84dc == 0) {
        GX_LoadOAM(&data_020b84e0[data_020b84dc], 0, 0x218);
    } else {
        GXS_LoadOAM(&data_020b84e0[data_020b84dc], 0, 0x218);
    }
}

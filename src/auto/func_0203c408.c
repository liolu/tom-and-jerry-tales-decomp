#include "m2c.h"
typedef struct {
    u32 w, x;
} E;
typedef struct {
    E e[101];
    u32 pad;
} Blk;
extern s32 data_020b84dc;
extern Blk data_020b84e0[];
extern void DC_FlushRange(void *, int);
extern void GX_LoadOAM(void *, int, int);
extern void GXS_LoadOAM(void *, int, int);
void func_0203c408(int arg0, u32 arg1, u32 arg2) {
    Blk *b = &data_020b84e0[data_020b84dc];
    u32 *w = &b->e[arg0].w;
    if (arg1 != 0x100 && arg1 != 0x300) {
        *w = (*w & 0xc1fffcff) | arg1;
    } else {
        *w = (*w & 0xc1fffcff) | arg1 | (arg2 << 25);
    }
    DC_FlushRange(&data_020b84e0[data_020b84dc], 0x218);
    if (data_020b84dc == 0) {
        GX_LoadOAM(&data_020b84e0[data_020b84dc].e[arg0], arg0 * 8, 8);
    } else {
        GXS_LoadOAM(&data_020b84e0[data_020b84dc].e[arg0], arg0 * 8, 8);
    }
}

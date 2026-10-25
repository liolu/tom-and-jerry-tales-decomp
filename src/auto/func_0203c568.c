#include "m2c.h"

typedef struct {
    s16 w[4];
} Ent;
typedef struct {
    Ent e[101];
    u8 pad[4];
} Blk;
extern s16 data_02064348[];
extern s32 data_020b84dc;
extern Blk data_020b84e0[];
extern s32 func_0204b7b8(int);
extern void func_02050b24(void *, int);
extern void func_0204e02c(void *, int, int);
extern void func_0204e080(void *, int, int);

void func_0203c568(int arg0, int arg1, int arg2, int arg3) {
    s32 k = (arg3 >> 4) * 2;
    s32 s;
    s32 c;
    s32 x;
    s32 y;
    Ent *e;
    s         = *(s16 *) ((u8 *) data_02064348 + (k + 1) * 2);
    c         = *(s16 *) ((u8 *) data_02064348 + k * 2);
    x         = func_0204b7b8(arg1);
    y         = func_0204b7b8(arg2);
    e         = &data_020b84e0[data_020b84dc].e[arg0 * 4];
    e[0].w[3] = (s * x) >> 16;
    e[1].w[3] = (c * x) >> 16;
    e[2].w[3] = -((c * y) >> 12) >> 4;
    e[3].w[3] = (s * y) >> 16;
    func_02050b24(&data_020b84e0[data_020b84dc], 0x218);
    if (data_020b84dc == 0) {
        func_0204e02c(&data_020b84e0[data_020b84dc].e[arg0 * 4], arg0 * 32, 0x20);
    } else {
        func_0204e080(&data_020b84e0[data_020b84dc].e[arg0 * 4], arg0 * 32, 0x20);
    }
}

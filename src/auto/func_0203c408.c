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
extern void func_02050b24(void *, int);
extern void func_0204e02c(void *, int, int);
extern void func_0204e080(void *, int, int);
void func_0203c408(int arg0, u32 arg1, u32 arg2) {
    Blk *b = &data_020b84e0[data_020b84dc];
    u32 *w = &b->e[arg0].w;
    if (arg1 != 0x100 && arg1 != 0x300) {
        *w = (*w & 0xc1fffcff) | arg1;
    } else {
        *w = (*w & 0xc1fffcff) | arg1 | (arg2 << 25);
    }
    func_02050b24(&data_020b84e0[data_020b84dc], 0x218);
    if (data_020b84dc == 0) {
        func_0204e02c(&data_020b84e0[data_020b84dc].e[arg0], arg0 * 8, 8);
    } else {
        func_0204e080(&data_020b84e0[data_020b84dc].e[arg0], arg0 * 8, 8);
    }
}

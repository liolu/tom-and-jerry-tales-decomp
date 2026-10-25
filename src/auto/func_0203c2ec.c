#include "m2c.h"
typedef struct {
    u32 w;
    u32 x;
} Ent;
typedef struct {
    Ent e[101];
} Blk;
extern s32 data_020b84dc;
extern u8 data_020b84e0[];
void func_0203c2ec(s32 arg0, u32 *arg1, u32 *arg2) {
    Ent *e = (Ent *) (data_020b84e0 + data_020b84dc * 0x32C);
    *arg1  = (e[arg0].w & 0x1FF0000) >> 16;
    *arg2  = e[arg0].w & 0xFF;
}

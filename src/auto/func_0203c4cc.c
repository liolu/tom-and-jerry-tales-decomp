#include "m2c.h"
typedef struct {
    u32 w;
    u16 h;
    u16 p;
} It;
typedef struct {
    It it[0x65];
    u8 pad[0x32c - 0x328];
} Bk;
extern s32 data_020b84dc;
extern Bk data_020b84e0[];
void func_02050b24(void *, s32);
void func_0204e02c(void *, s32, s32);
void func_0204e080(void *, s32, s32);
void func_0203c4cc(s32 i, s32 a, s32 b) {
    It *p = &data_020b84e0[data_020b84dc].it[i];
    p->w  = (p->w & ~0xC00) | (a << 10);
    p->h  = (p->h & ~0xF000) | (b << 12);
    func_02050b24(&data_020b84e0[data_020b84dc], 0x218);
    if (data_020b84dc == 0) {
        func_0204e02c((u8 *) &data_020b84e0[data_020b84dc] + i * 8, (i << 3), 8);
    } else {
        func_0204e080((u8 *) &data_020b84e0[data_020b84dc] + i * 8, (i << 3), 8);
    }
}

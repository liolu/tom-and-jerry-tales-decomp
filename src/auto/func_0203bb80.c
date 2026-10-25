#include "m2c.h"

typedef struct {
    u8 pad[0x324];
    u16 a;
    u16 b;
    s32 c;
} T;

extern void func_02051f04(s32, void *, s32);
extern s32 func_02062f0c(s32, s32);
extern void func_02050b24(void *, s32);
extern void func_0203cc68(s32, s32);
extern void func_0204e02c(void *, s32, s32);
extern void func_0204e080(void *, s32, s32);
extern s32 data_020b84dc;
extern T data_020b84e0[];

void func_0203bb80(void) {
    if (data_020b84e0[data_020b84dc].c != 0) {
        func_02051f04(0xc0, &data_020b84e0[data_020b84dc], 0x210);
        data_020b84e0[data_020b84dc].a = func_02062f0c(
            (data_020b84e0[data_020b84dc].b + 0x7f) & ~(data_020b84e0[data_020b84dc].b - 1), data_020b84e0[data_020b84dc].b);
    } else {
        func_02051f04(0xc0, &data_020b84e0[data_020b84dc], 0x218);
        data_020b84e0[data_020b84dc].a = 0;
    }
    func_02050b24(&data_020b84e0[data_020b84dc], 0x218);
    func_0203cc68(4, data_020b84dc);
    if (data_020b84dc == 0) {
        func_0204e02c(&data_020b84e0[data_020b84dc], 0, 0x218);
    } else {
        func_0204e080(&data_020b84e0[data_020b84dc], 0, 0x218);
    }
}

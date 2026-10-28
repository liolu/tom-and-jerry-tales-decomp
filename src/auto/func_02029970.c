#include "m2c.h"
void func_020293f8(void *, s32, s32);
s32 func_020296b4(u8 *, u16, s32, s32);
void MIi_CpuClearFast(s32, u8 *, s32);
extern u8 data_0206c8f8[];
void func_02029970(u8 *arg0, s32 arg1, s32 arg2) {
    u16 i;
    func_020293f8(data_0206c8f8, 0x260, 0x118);
    MIi_CpuClearFast(0, arg0 + 0x169C, 0xDC);
    i = 0;
    do {
        s32 r                            = func_020296b4(arg0, i, arg1, arg2);
        *(s32 *) (arg0 + i * 4 + 0x169C) = r;
        i++;
    } while (i < 0x37);
}

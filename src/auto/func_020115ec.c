#include "m2c.h"

extern void func_0203c1e8(u16, u8, u16, u16);

void func_020115ec(s8 *arg0, s16 arg1, int arg2, s32 arg3, u8 arg4) {
    s8 c = *arg0;
    if (c == 0) {
        return;
    }
    do {
        func_0203c1e8(arg3 + (c - 0x30), arg4++, arg1, arg2);
        if (*arg0 == 0x31) {
            arg1 += 7;
        } else if (*arg0 == 0x39) {
            arg1 += 11;
        } else {
            arg1 += 10;
        }
        arg0++;
        c = *arg0;
    } while (c != 0);
}

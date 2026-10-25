#include "m2c.h"
void func_0203ccc8(s32 arg0, s32 arg1) {
    u32 t;
    if (arg1 == 0) {
        t = (*(volatile u32 *) 0x04000000 & 0x1F00) >> 8;
    } else {
        t = (*(volatile u32 *) 0x04001000 & 0x1F00) >> 8;
    }
    t &= ~(1 << arg0);
    if (arg1 == 0) {
        *(volatile u32 *) 0x04000000 = (*(volatile u32 *) 0x04000000 & ~0x1F00) | (t << 8);
    } else {
        *(volatile u32 *) 0x04001000 = (*(volatile u32 *) 0x04001000 & ~0x1F00) | (t << 8);
    }
}

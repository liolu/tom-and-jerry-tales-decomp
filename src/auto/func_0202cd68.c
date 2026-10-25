#include "m2c.h"
extern void func_020219d8(u32);
extern void func_020222b8(s32, s32, s32);
void func_0202cd68(void) {
    volatile u32 *r;
    func_020219d8(5);
    r  = (volatile u32 *) 0x4001000;
    *r = *r & ~0x1F00;
    func_020222b8(0, 0, 2);
}

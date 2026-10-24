#include "m2c.h"
extern u32 func_020517f8(void);
extern u32 func_0205180c(u32);
extern u32 func_0204f26c(s32);
extern u32 func_0204f324(u32);
extern void WaitByLoop(s32);

void func_02058bcc(s32 a0, s32 *a1) {
    u32 flag;
    for (;;) {
        *(u32 *) ((s8 *) a1 + 4) = func_020517f8();
        flag                     = func_0204f324(0x27fffe8) & 0x40;
        *(u32 *) ((s8 *) a1 + 0) = flag;
        if (flag != 0) {
            return;
        }
        if (func_0204f26c(a0) == 0) {
            return;
        }
        func_0205180c(*(u32 *) ((s8 *) a1 + 4));
        WaitByLoop(1);
    }
}

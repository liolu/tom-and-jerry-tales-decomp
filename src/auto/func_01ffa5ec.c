#include "m2c.h"

extern s32 func_020517f8(void);
extern void func_0205180c(s32);

void func_01ffa5ec(s32 n, s32 a, s32 b, s32 c) {
    s32 t;
    s32 q;
    s32 s                            = func_020517f8();
    t                                = n * 12;
    *(s32 *) (t + 0x04000000 + 0xB0) = a;
    q                                = t + 0x040000B0;
    *(s32 *) (q + 4)                 = b;
    *(s32 *) (q + 8)                 = c;
    func_0205180c(s);
}

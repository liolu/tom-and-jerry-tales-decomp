#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 mode;
} Q;
void func_02030ed4(s32 *);
void func_02030ee0(s32 *, s32);
s32 func_02030f40(s32, s32 *, s32, s32);
void func_0203d578(s32, s32, Q *);
void func_0203db80(s32, s32);
void func_0203dc40(s32, s32, s32, s32);
void OS_Terminate(void);

void func_0203d498(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Q *arg4) {
    s32 sp4 = 0;
    s32 sp0 = 0;
    s32 mode;
    s32 p;
    u8 vb;
    func_02030ed4(&sp0);
    if (func_02030f40(arg0, &sp4, arg1, arg1) < 0 || sp4 == 0) {
        OS_Terminate();
    }
    if (arg3 != 0) {
        s32 t = *(volatile s32 *) 0x04000000;
        mode  = arg4->mode;
        t &= 0x40000000;
        vb = t;
        p  = sp4;
        if (mode == 0 || (mode == 1 && vb == 0)) {
            func_0203db80(p + 4, arg4->a);
        } else if (vb != 0) {
            func_0203dc40(p + 4, arg1, arg4->a, arg2);
        }
    }
    func_0203d578(sp4, arg2, arg4);
    func_02030ee0(&sp0, arg1);
}

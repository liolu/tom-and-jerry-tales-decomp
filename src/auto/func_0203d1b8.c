#include "m2c.h"

void func_02030ed4(s32 *a);
void func_02030ee0(s32 *a, s32 b);
s32 func_02030f40(s32 a, u8 **b, s32 c, s32 d);
void func_0203d2d4(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 *h);
void func_0203db80(u8 *a, s32 b);
void func_0203dc40(u8 *a, s32 b, s32 c, s32 d);
void func_02051a48(void);

void func_0203d1b8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, s32 *arg7) {
    u8 *sp14;
    s32 sp10;
    u8 *p;
    u8 temp_r4;
    u8 temp_r5;
    u8 *q;
    u8 *q1;
    s32 n;
    u8 hw;

    sp14 = NULL;
    sp10 = 0;
    func_02030ed4(&sp10);
    if ((func_02030f40(arg0, &sp14, arg1, arg1) < 0) || (sp14 == NULL)) {
        func_02051a48();
    }
    p       = sp14;
    q1      = p + 1;
    sp14    = q1;
    temp_r4 = p[0];
    q       = q1 + 1;
    sp14    = q;
    temp_r5 = p[1];
    if (arg6 != 0) {
        n  = arg7[3];
        hw = (u8) (*(volatile u32 *) 0x04000000 & 0x40000000);
        if (n == 0 || (n == 1 && hw == 0)) {
            func_0203db80(q, arg7[0]);
        } else if (hw != 0) {
            func_0203dc40(q, arg1, arg7[0], arg4);
        }
    }
    sp14 += 0x20;
    func_0203d2d4(sp14, arg2, arg3, temp_r4, temp_r5, arg4, arg5, arg7);
    func_02030ee0(&sp10, arg1);
}

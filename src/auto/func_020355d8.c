#include "m2c.h"

typedef struct M {
    s32 m[12];
} M;

void func_01ff87b4(M *, M *, s32);
void func_01ff9f5c(void *, M *);
void func_01ffa410(void *, void *);

void func_020355d8(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 q[4];
    M b;
    M a;
    s32 n = *(s32 *) (arg1 + 4);
    u8 *p = arg1 + 8;
    s32 i = 0;
    if (n > 0 && n > 0) {
        do {
            func_01ffa410(arg0 + 0xC, q);
            func_01ff9f5c(q, &b);
            func_01ff9f5c(p + 0x44, &a);
            b.m[9]  = *(s32 *) (arg0 + 0);
            b.m[10] = *(s32 *) (arg0 + 4);
            b.m[11] = *(s32 *) (arg0 + 8);
            a.m[9]  = *(s32 *) (p + 0x18);
            a.m[10] = *(s32 *) (p + 0x1C);
            a.m[11] = *(s32 *) (p + 0x20);
            func_01ff87b4(&a, &b, arg2);
            i++;
            arg2 += 0x30;
            arg0 += 0x14;
            p += 0x58;
        } while (i < n);
    }
}

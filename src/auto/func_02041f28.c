#include "m2c.h"

s32 *func_01ff8000(s32, s32);
void func_02051a48(void);
s32 func_0205c108(void *, s32);
double func_0205d8c4(s32);
s32 func_020617bc(double);
extern char data_0206dc90[];
extern char data_0206dc98[];
extern char data_0206dca0[];
extern char data_0206dcac[];

s32 *func_02041f28(s32 *arg0, s32 arg1, s32 arg2) {
    s32 a;
    s32 b;
    s32 t;
    s32 n;
    s32 *r;
    s32 i;
    t = arg0[0];
    if (func_0205c108(data_0206dc90, t) == 0) {
        a = 2;
        b = 1;
    } else if (func_0205c108(data_0206dc98, t) == 0) {
        a = 0;
        b = 3;
    } else if (func_0205c108(data_0206dca0, t) == 0) {
        a = 3;
        b = 2;
    } else if (func_0205c108(data_0206dcac, t) == 0) {
        a = 1;
        b = 4;
    } else {
        func_02051a48();
    }
    r    = func_01ff8000(arg2, b * 4 + 4);
    n    = b + 1;
    r[0] = a;
    for (i = 1; i < n; i++) {
        r[i] = func_020617bc(0.5 + 4096.0 * func_0205d8c4(arg0[i]));
    }
    return r;
}

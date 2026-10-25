#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 x, y, z, d;
} Q;
extern s32 func_0203864c(s32, V *, s32, Q *, V *, V *);
extern void func_02039d0c(V *, V *, s32);
extern void func_0204b918(V *, V *, V *);
extern void func_0204b94c(s32, V *, V *);
extern s32 func_0204b980(V *, V *);
extern void func_0204baa0(V *, V *);

s32 func_020386ec(s32 arg0, V *arg1, s32 *arg2, s32 *arg3, V *arg4, V *arg5) {
    V a;
    V b;
    Q q;
    s32 t;
    s32 lim;
    *arg4 = *arg1;
    a.x   = arg2[1];
    a.y   = arg2[4];
    a.z   = arg2[7];
    func_0204b94c(arg0, arg1, &b);
    t   = func_0204b980(&a, &b);
    lim = arg3[1];
    if (t > lim) {
        func_02039d0c(&a, &b, lim);
        func_0204b918(arg1, &b, &b);
        q.x = a.x;
        q.y = a.y;
        q.z = a.z;
        q.d = func_0204b980(&a, &b);
        return func_0203864c(arg0, &b, arg3[0], &q, arg4, arg5);
    }
    if (t < 0 - lim) {
        func_02039d0c(&a, &a, -0x1000);
        func_02039d0c(&a, &b, arg3[1]);
        func_0204b918(arg1, &b, &b);
        q.x = a.x;
        q.y = a.y;
        q.z = a.z;
        q.d = func_0204b980(&a, &b);
        return func_0203864c(arg0, &b, arg3[0], &q, arg4, arg5);
    }
    func_02039d0c(&a, &a, t);
    func_0204b918(arg4, &a, arg4);
    func_0204b94c(arg0, arg4, &b);
    if (func_0204b980(&b, &b) == 0) {
        return 0;
    }
    func_0204baa0(&b, arg5);
    func_02039d0c(arg5, &b, arg3[0]);
    func_0204b918(arg4, &b, arg4);
    return 1;
}

#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    u8 p0[4];
    u32 a;
    u8 p1[0x14 - 8];
    V v;
    s32 r;
} S;
extern void func_0204b918(u32, void *, void *);
extern void func_0204b94c(void *, void *, void *);
extern s32 func_02059508(s32);

s32 func_020381c0(S *arg0, S *arg1) {
    V c;
    V a;
    V b;
    s32 x, y, z;
    if (arg0 == 0 || arg1 == 0 || arg0->a == 0 || arg1->a == 0 || arg0->a < 0x2000000 || arg1->a < 0x2000000 ||
        arg0->a > 0x3000000 || arg1->a > 0x3000000) {
        return 0;
    }
    func_0204b918(arg0->a, &arg0->v, &a);
    func_0204b918(arg1->a, &arg1->v, &b);
    func_0204b94c(&a, &b, &c);
    x = func_02059508(c.z);
    y = func_02059508(c.x);
    z = func_02059508(c.y);
    return x + (y + z) > (arg0->r + arg1->r) * 2;
}

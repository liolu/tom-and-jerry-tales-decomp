#include "m2c.h"

extern void func_0204b94c(void *, void *, void *);
extern s32 func_0204b980(void *, void *);

s32 func_01ff98dc(void *a, s32 b, void *c, s32 d) {
    s32 v[3];
    s32 r;
    func_0204b94c(a, c, v);
    r = func_0204b980(v, v);
    return r - (s32) (((long long) (b + d) * (b + d) + 0x800) >> 12);
}

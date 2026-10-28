#include "m2c.h"

extern void VEC_Subtract(void *, void *, void *);
extern s32 VEC_DotProduct(void *, void *);

s32 func_01ff98dc(void *a, s32 b, void *c, s32 d) {
    s32 v[3];
    s32 r;
    VEC_Subtract(a, c, v);
    r = VEC_DotProduct(v, v);
    return r - (s32) (((long long) (b + d) * (b + d) + 0x800) >> 12);
}

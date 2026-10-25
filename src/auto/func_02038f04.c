#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s32 kind;
    V3 *pos;
    V3 *center;
    u8 pad0c[0x14 - 0xC];
    V3 off;
    u8 pad20[0x24 - 0x20];
    u8 shape[4];
} Body;
void VEC_Add(V3 *, V3 *, V3 *);
void VEC_Subtract(V3 *, V3 *, V3 *);
s32 VEC_DotProduct(V3 *, V3 *);
void VEC_CrossProduct(V3 *, V3 *, V3 *);
void VEC_Normalize(V3 *, V3 *);
void func_02039d0c(V3 *, V3 *, s32);
s32 func_01ff99e8(V3 *, V3 *, s32, void *, V3 *, V3 *);
s32 func_020386ec(V3 *, V3 *, s32, void *, V3 *, V3 *);
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_02038f04(Body *a, Body *b, s32 *plane, V3 *point, s32 *depth) {
    V3 pa, pb, d1, d2, n, na, nb, va, vb;
    s32 ra, rb;
    VEC_Add(a->pos, &a->off, &va);
    VEC_Add(b->pos, &b->off, &vb);
    ra = func_01ff99e8(&vb, &va, a->kind, a->shape, &pa, &na);
    rb = func_020386ec(&va, &vb, b->kind, b->shape, &pb, &nb);
    if (ra > 1 && rb > 1) {
        if (ra == 2 && rb == 2) {
            VEC_CrossProduct(&na, &nb, &n);
            if (VEC_DotProduct(&n, &n) == 0) {
                VEC_Subtract(a->center, b->center, &n);
            }
            VEC_Normalize(&n, &n);
        } else {
            VEC_Subtract(a->center, b->center, &n);
            VEC_Normalize(&n, &n);
        }
    } else if (ra == 1) {
        n = na;
    } else {
        n = nb;
    }
    VEC_Subtract(&pb, &vb, &d1);
    VEC_Subtract(&pa, &pb, &d2);
    if (VEC_DotProduct(&n, &d1) < 0) {
        func_02039d0c(&n, &n, -0x1000);
    }
    *depth = VEC_DotProduct(&n, &d2);
    if (*depth < 0) {
        *depth = FX_Mul(*depth, -0x1000);
    }
    d2.x = FX_Mul(d2.x, 0x800);
    d2.y = FX_Mul(d2.y, 0x800);
    d2.z = FX_Mul(d2.z, 0x800);
    VEC_Add(&pb, &d2, point);
    plane[0] = n.x;
    plane[1] = n.y;
    plane[2] = n.z;
    plane[3] = VEC_DotProduct(&n, point);
}

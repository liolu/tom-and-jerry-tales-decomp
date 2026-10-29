/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} VecFx32;

typedef struct {
    VecFx32 n;
    s32 d;
} ColPlane;

extern void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern s32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
extern s32 FX_Div(s32 numer, s32 denom);
extern void func_02039d0c(const VecFx32 *v, VecFx32 *out, s32 s);

s32 func_01ff8ac4(VecFx32 *p, VecFx32 *a, VecFx32 *b, VecFx32 *c, ColPlane *plane, VecFx32 *out) {
    VecFx32 ab;
    VecFx32 ac;
    VecFx32 ap;
    VecFx32 bp;
    VecFx32 cp;
    ColPlane pl;
    s32 d1, d2, d3, d4, d5, d6;
    s64 vc, vb, va;
    s32 v, w;

    pl = *plane;
    VEC_Subtract(b, a, &ab);
    VEC_Subtract(c, a, &ac);
    VEC_Subtract(p, a, &ap);
    d1 = VEC_DotProduct(&ab, &ap);
    d2 = VEC_DotProduct(&ac, &ap);
    if (d1 <= 0 && d2 <= 0) {
        *out = *a;
        return 0;
    }
    VEC_Subtract(p, b, &bp);
    d3 = VEC_DotProduct(&ab, &bp);
    d4 = VEC_DotProduct(&ac, &bp);
    if (d3 >= 0 && d4 <= d3) {
        *out = *b;
        return 0;
    }
    vc = ((s64) d1 * d4 >> 12) - ((s64) d3 * d2 >> 12);
    if (vc <= 0 && d1 >= 0 && d3 <= 0) {
        v = FX_Div(d1, d1 - d3);
        func_02039d0c(&ab, out, v);
        VEC_Add(a, out, out);
        return 0;
    }
    VEC_Subtract(p, c, &cp);
    d5 = VEC_DotProduct(&ab, &cp);
    d6 = VEC_DotProduct(&ac, &cp);
    if (d6 >= 0 && d5 <= d6) {
        *out = *c;
        return 0;
    }
    vb = ((s64) d5 * d2 >> 12) - ((s64) d1 * d6 >> 12);
    if (vb <= 0 && d2 >= 0 && d6 <= 0) {
        w = d2 - d6;
        w = FX_Div(d2, w);
        func_02039d0c(&ac, out, w);
        VEC_Add(a, out, out);
        return 0;
    }
    va = ((s64) d3 * d6 >> 12) - ((s64) d5 * d4 >> 12);
    if (va <= 0 && d4 - d3 >= 0 && d5 - d6 >= 0) {
        w = FX_Div(d4 - d3, (d4 - d3) + (d5 - d6));
        VEC_Subtract(c, b, out);
        func_02039d0c(out, out, w);
        VEC_Add(b, out, out);
        return 0;
    }
    func_02039d0c(&pl.n, &ac, pl.d + VEC_DotProduct(p, &pl.n));
    VEC_Subtract(p, &ac, out);
    return 1;
}

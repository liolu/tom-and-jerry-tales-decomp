/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} VecFx32;

typedef struct {
    s32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;

extern void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void VEC_Add(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern s32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
extern void VEC_Normalize(const VecFx32 *src, VecFx32 *dst);
extern void func_02039d0c(const VecFx32 *v, VecFx32 *out, s32 s);
extern int abs(int);

s16 func_01ff99e8(VecFx32 *p, VecFx32 *center, MtxFx33 *rot, VecFx32 *half, VecFx32 *out, VecFx32 *normal) {
    VecFx32 d;
    VecFx32 ax0;
    VecFx32 ax1;
    VecFx32 ax2;
    s32 dist0;
    s32 dist1;
    s32 dist2;
    s32 ex;
    s32 ey;
    s32 ez;
    s32 e;
    VecFx32 *a0;
    VecFx32 *a1;
    s32 *s2;
    s32 *e1;
    s32 *pe;
    s32 *s0;
    s32 *s1;
    s32 t;
    VecFx32 *a2;
    s32 *e0;
    s32 pen0;
    s32 *e2;
    VecFx32 *pa;
    s32 pen2;
    s32 pen1;
    s16 cnt;
    s32 *ps;
    normal->x = normal->y = normal->z = 0;
    VEC_Subtract(p, center, &d);
    *out  = *center;
    ex    = half->x;
    ey    = half->y;
    ez    = half->z;
    ax0.x = rot->_00;
    ax0.y = rot->_10;
    ax0.z = rot->_20;
    ax1.x = rot->_01;
    ax1.y = rot->_11;
    ax1.z = rot->_21;
    ax2.x = rot->_02;
    ax2.y = rot->_12;
    ax2.z = rot->_22;

    dist0 = VEC_DotProduct(&d, &ax0);
    e     = ex;
    if (dist0 > e) {
        dist0 = e;
    }
    if (dist0 < -e) {
        dist0 = -e;
    }
    pen0 = abs(e) - abs(dist0);
    e0   = &ex;
    s0   = &dist0;
    a0   = &ax0;

    dist1 = VEC_DotProduct(&d, &ax1);
    e     = ey;
    if (dist1 > e) {
        dist1 = e;
    }
    if (dist1 < -e) {
        dist1 = -e;
    }
    pen1 = abs(e) - abs(dist1);
    s1   = &dist1;
    e1   = &ey;
    a1   = &ax1;

    dist2 = VEC_DotProduct(&d, &ax2);
    e     = ez;
    if (dist2 > e) {
        dist2 = e;
    }
    if (dist2 < -e) {
        dist2 = -e;
    }
    pen2 = abs(e) - abs(dist2);
    s2   = &dist2;
    e2   = &ez;
    a2   = &ax2;

    if (pen2 < pen1) {
        t    = pen2;
        pen2 = pen1;
        pen1 = t;
        ps   = s2;
        s2   = s1;
        s1   = ps;
        pe   = e2;
        e2   = e1;
        e1   = pe;
        pa   = a2;
        a2   = a1;
        a1   = pa;
    }
    if (pen1 < pen0) {
        t    = pen1;
        pe   = e1;
        ps   = s1;
        pa   = a1;
        pen1 = pen0;
        s1   = s0;
        e1   = e0;
        a1   = a0;
        pen0 = t;
        e0   = pe;
        s0   = ps;
        a0   = pa;
    }
    if (pen2 < pen1) {
        t    = pen2;
        pe   = e2;
        ps   = s2;
        pa   = a2;
        pen2 = pen1;
        s2   = s1;
        e2   = e1;
        a2   = a1;
        pen1 = t;
        e1   = pe;
        s1   = ps;
        a1   = pa;
    }

    cnt = 0;
    if (pen0 > 0) {
        cnt++;
        *normal = *a0;
        if (*s0 > 0) {
            *s0 = *e0;
        } else {
            *s0 = -*e0;
            func_02039d0c(normal, normal, -0x1000);
        }
        if (pen1 == pen0) {
            cnt++;
            if (*s1 > 0) {
                *s1 = *e1;
                VEC_Add(normal, a1, normal);
            } else {
                *s1 = -*e1;
                VEC_Subtract(normal, a1, normal);
            }
            if (pen2 == pen1) {
                cnt++;
                if (*s2 > 0) {
                    *s2 = *e2;
                    VEC_Add(normal, a2, normal);
                } else {
                    *s2 = -*e2;
                    VEC_Subtract(normal, a2, normal);
                }
            }
        }
        if (VEC_DotProduct(normal, normal) == 0) {
            return 0;
        }
        VEC_Normalize(normal, normal);
    }
    func_02039d0c(&ax0, &ax0, dist0);
    VEC_Add(out, &ax0, out);
    func_02039d0c(&ax1, &ax1, dist1);
    VEC_Add(out, &ax1, out);
    func_02039d0c(&ax2, &ax2, dist2);
    VEC_Add(out, &ax2, out);
    return cnt;
}

#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    V3 prev;
    V3 pos;
    s16 ang;
    u8 pad1a[2];
    V3 dir;
    s32 t;
    u8 idx;
    u8 pad2d[3];
    s32 speed;
    s32 f34;
} Obj;
typedef struct {
    V3 *pts;
    u8 pad[0x14 - 4];
} Seg;
typedef struct {
    s32 f0;
    Seg *segs;
} Path;
extern Path data_02086ff4;
u16 func_02011cd8(u8, s32);
s64 func_020124d8(u8, u16, s32);
s64 func_02011d5c(u8, u16, s32);
void func_02039d68(V3 *, V3 *, s64);
void VEC_Add(V3 *, V3 *, V3 *);
s32 VEC_Mag(V3 *);
s32 FX_Div(s32, s32);
s32 func_02012e00(u8);
void VEC_Normalize(V3 *, V3 *);
s32 FX_Atan2Idx(s32, s32);
void VEC_Subtract(V3 *, V3 *, V3 *);
void func_02012e28(Obj *o) {
    V3 q0, q1, q2, q3;
    V3 p0, p1, p2, p3;
    V3 s;
    s32 t;
    u8 idx;
    u16 k;
    s64 w0, w1, w2, w3;
    idx = o->idx;
    t   = o->t;
    k   = func_02011cd8(idx, t);
    p0  = data_02086ff4.segs[idx].pts[k - 3];
    p1  = data_02086ff4.segs[idx].pts[k - 2];
    p2  = data_02086ff4.segs[idx].pts[k - 1];
    p3  = data_02086ff4.segs[idx].pts[k];
    w0  = func_020124d8(idx, k - 3, t);
    w1  = func_020124d8(idx, k - 2, t);
    w2  = func_020124d8(idx, k - 1, t);
    w3  = func_020124d8(idx, k, t);
    func_02039d68(&p0, &p0, w0);
    func_02039d68(&p1, &p1, w1);
    func_02039d68(&p2, &p2, w2);
    func_02039d68(&p3, &p3, w3);
    VEC_Add(&p0, &p1, &s);
    VEC_Add(&s, &p2, &s);
    VEC_Add(&s, &p3, &s);
    t += FX_Div(o->speed, VEC_Mag(&s));
    if (t >= func_02012e00(o->idx)) {
        t = func_02012e00(o->idx) - 1;
    }
    k  = func_02011cd8(idx, t);
    q0 = data_02086ff4.segs[idx].pts[k - 3];
    q1 = data_02086ff4.segs[idx].pts[k - 2];
    q2 = data_02086ff4.segs[idx].pts[k - 1];
    q3 = data_02086ff4.segs[idx].pts[k];
    w0 = func_02011d5c(idx, k - 3, t);
    w1 = func_02011d5c(idx, k - 2, t);
    w2 = func_02011d5c(idx, k - 1, t);
    w3 = func_02011d5c(idx, k, t);
    func_02039d68(&q0, &q0, w0);
    func_02039d68(&q1, &q1, w1);
    func_02039d68(&q2, &q2, w2);
    func_02039d68(&q3, &q3, w3);
    VEC_Add(&q0, &q1, &o->pos);
    VEC_Add(&o->pos, &q2, &o->pos);
    VEC_Add(&o->pos, &q3, &o->pos);
    VEC_Normalize(&s, &o->dir);
    o->ang = FX_Atan2Idx(s.x, s.z) >> 8;
    o->t   = t;
    VEC_Subtract(&o->pos, &o->prev, &q0);
    o->f34  = VEC_Mag(&q0);
    o->prev = o->pos;
}

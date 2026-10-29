#include "m2c.h"
typedef struct {
    s32 x, y, z;
} Vec;
typedef struct {
    Vec a;
    u8 padc[4];
    Vec center;
    Vec normal;
    s32 f28;
    u16 pad2c;
    u16 f2e;
} Tri;
typedef struct {
    u8 pad0[0x64];
    u32 f64_lo : 3;
    u32 wall : 1;
    u32 ceil : 1;
    u32 f64_hi : 27;
    u8 pad68[4];
    u32 ground : 1;
    u32 f6c_hi : 31;
    u8 pad70[4];
    u32 b0 : 1;
    u32 b1 : 1;
    u32 f74_hi : 30;
    u8 pad78[0x1C];
    Vec dir;
} Obj;
s32 func_02036eb4(Vec *, s32);
s32 func_02036ef0(Vec *, s32);
void func_02036f18(Tri **);
void MIi_CpuCopyFast(void *, void *, s32);
s32 abs(s32);
void func_02039d0c(Vec *, Vec *, s32);
void VEC_Subtract(Vec *, Vec *, Vec *);
s32 VEC_DotProduct(Vec *, Vec *);
void VEC_Add(Vec *, Vec *, Vec *);

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}

s32 func_02006178(Vec *pos, Obj *obj, s32 r) {
    Vec v;
    s32 j;
    u8 buf[0x3C0];
    s32 i;
    Tri *t;
    Vec d;
    s32 flagA;
    Vec push;
    Tri *list;
    s32 pen;
    int m;
    Vec nrm;
    s32 flagB;
    s32 rr;
    int n;
    obj->ceil   = 0;
    obj->ground = 0;
    obj->b0     = 0;
    obj->b1     = 0;
    pos->y += r;
    n = func_02036eb4(pos, (s32) (r * 3.5));
    if (n != 0) {
        func_02036f18(&list);
        MIi_CpuCopyFast(list, buf, sizeof(buf));
        for (i = 0; i < n; i++) {
            if (list[i].a.y < -0xFF4 && list[i].f28 < 10000) {
                obj->ground = 1;
            }
            if (list[i].a.y > 0xB54) {
                obj->b0 = 1;
            }
            if (abs(list[i].a.y) < 1000) {
                obj->b1 = 1;
            }
        }
        v  = *pos;
        rr = FX_Mul(r, r);
        m  = func_02036ef0(&v, r);
        if (m != 0) {
            func_02036f18(&list);
            func_02039d0c(&push, &push, 0);
            for (j = 0; j < m; j++) {
                flagA = 0;
                flagB = 0;
                VEC_Subtract(&v, &list[j].center, &d);
                if (VEC_DotProduct(&d, &d) < rr) {
                    t   = &list[j];
                    pen = r - abs(t->f28);
                    nrm = t->normal;
                    i   = VEC_DotProduct(&nrm, &t->a);
                    if (abs(nrm.y) <= 500 && i > 2000) {
                        if (list[j].f2e != 0xFE) {
                            if (VEC_DotProduct(&nrm, &obj->dir) < -0xA48) {
                                obj->ceil = 1;
                            }
                        }
                        flagB = 1;
                    }
                    if (nrm.y > 0x9C4 && i > 0xBB8) {
                        obj->wall = 1;
                        flagA     = 1;
                    }
                    func_02039d0c(&nrm, &push, pen);
                    if (flagA) {
                        push.z = 0;
                        push.x = 0;
                    }
                    if (flagB) {
                        push.y = 0;
                    }
                    VEC_Add(&push, &v, &v);
                }
            }
            *pos = v;
        }
    }
    pos->y -= r;
    return 0;
}

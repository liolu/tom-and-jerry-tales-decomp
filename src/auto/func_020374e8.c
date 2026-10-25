#include "m2c.h"

typedef struct {
    s32 x, y, z;
} Vec;
typedef struct {
    u8 pad0[0x10];
    u32 w10;
    u8 pad14[0x20];
    s16 s34;
    u16 s36;
} Obj;
typedef struct {
    s32 w0;
    Vec *vp;
    s32 w8;
    s32 wc;
    s32 w10;
    s32 w14;
    s32 w18;
    s32 w1c;
    s32 w20;
    s32 pad[6];
} S;
typedef struct {
    s16 a;
    s16 pad2;
    s16 b;
    u8 p1[0x2c - 6];
    Vec v;
    u8 p2[0x88 - 0x38];
    s32 z[6];
    u8 p3[0xBC - 0xA0];
} T;

s32 func_020381c0(void *, void *);
s32 func_020370b0(void *, void *, void *, s32, s32);
s32 func_02037020(void *, void *, void *, s32, s32);
s32 func_020372f8(void *, void *, void *, s32, s32);
void func_02051a48(void);
s16 *func_0203a95c(s32);
void func_0203a58c(s32);
void func_02039280(void *, void *, s32, void *, s32);

s32 func_020374e8(Obj *obj, Vec *in, Vec *out, s32 *a3, s32 a4) {
    S s;
    Vec copy;
    T t;
    s32 r;
    s32 k;
    s16 *p;

    copy  = *in;
    s.vp  = &copy;
    s.w20 = 0;
    s.w14 = 0;
    s.w18 = 0;
    s.w1c = 0;
    if (obj->s36 == 0) {
        return 0;
    }
    if (func_020381c0(obj, &s) != 0) {
        return 0;
    }
    k = (s16) (((s16) ((((u32) (obj->w10 << 27)) >> 29) << 3)) | 1);
    switch (k) {
        case 9:
            r = func_020370b0(obj, &s, out, a4, (s32) a3);
            out->x *= -1;
            out->y *= -1;
            out->z *= -1;
            break;
        case 0x11:
            r = func_02037020(&s, obj, out, a4, (s32) a3);
            out->x *= -1;
            out->y *= -1;
            out->z *= -1;
            break;
        case 0x21:
            r = func_020372f8(&s, obj, out, a4, (s32) a3);
            out->x *= -1;
            out->y *= -1;
            out->z *= -1;
            break;
        default:
            r = 0;
            func_02051a48();
            break;
    }
    if (r != 0) {
        p = func_0203a95c(obj->s34);
        func_0203a58c(*p);
        t.v    = *s.vp;
        t.a    = -1;
        t.b    = -1;
        t.z[0] = 0;
        t.z[1] = 0;
        t.z[2] = 0;
        t.z[3] = 0;
        t.z[4] = 0;
        t.z[5] = 0;
        func_02039280(p, &t, a4, out, *a3);
    }
    return r;
}

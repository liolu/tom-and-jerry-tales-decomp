#include "m2c.h"
typedef struct V {
    s32 x, y, z;
} V;
typedef struct S {
    V a;
    V b;
    s32 ang;
} S;
extern u8 *func_0203a95c(s16);
extern void MTX_Identity33_(u8 *);
extern void MTX_RotAxis33(u8 *, V *, s16, s16);
extern s16 data_02064348[];
void func_02041920(S *s, s32 id) {
    u8 *o = func_0203a95c((s16) id);
    u16 ang;
    s32 t;
    *(V *) (o + 0x2C) = s->a;
    MTX_Identity33_(o + 8);
    ang = (u16) (((long long) s->ang * 0x28BE60DB9391LL + 0x80000000000LL) >> 44);
    t   = (ang >> 4) * 2;
    MTX_RotAxis33(o + 8, &s->b, *(s16 *) ((u8 *) data_02064348 + t * 2), *(s16 *) ((u8 *) data_02064348 + (t + 1) * 2));
    *(V *) (o + 0x44) = s->b;
    *(s16 *) (o + 6)  = ((long long) s->ang * 0x28BE60DB9391LL + 0x80000000000LL) >> 44;
    *(u32 *) (o + 0x5C) |= 2;
}

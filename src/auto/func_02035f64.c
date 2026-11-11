#include "m2c.h"
typedef struct {
    s32 x, y, z;
} Vec;
typedef struct {
    s16 x, y, z, w;
} Q;
typedef struct {
    Vec v;
    Q q;
} Joint;
typedef struct {
    Vec root;
    u8 pad[0x3C0];
    Joint j[80];
    u8 pad2[8];
} Frame;
typedef struct {
    u8 pad[0x54];
    Frame fr[1];
} Anim;
typedef struct {
    Anim *a;
    Anim *b[2];
    s32 tA;
    s32 speedA;
    u16 frA0;
    u16 frA1;
    s32 tB;
    s32 speedB;
    u16 frB0;
    u16 frB1;
    u8 sel;
    u8 pad25[0xB];
    u16 blend;
    u8 pad32[6];
    Vec root[2];
} Blend;
void func_02036380(Anim *);
s32 func_020363a4(Anim *, u16);
void func_01ff9df0(Vec *, Vec *, Vec *, s32);
void func_01ffa2dc(Q *, Q *, Q *, s32);
void func_02039d0c(Joint *, Vec *, s32);
void VEC_Add(Vec *, Vec *, Vec *);

void func_02035f64(Blend *bl, Joint *out, s32 dtA, s32 dtB) {
    Anim *A;
    u32 i;
    s32 oA0;
    s32 fA0;
    Vec tmp;
    s32 fA1;
    Joint *a0;
    s32 fB0;
    Joint *a1;
    Q qa;
    Joint *b0;
    Vec va;
    Joint *b1;
    Q qb;
    Vec vb;
    s32 fB1;
    bl->tA += (bl->speedA * dtA) >> 12;
    bl->tB += (bl->speedB * dtB) >> 12;
    func_02036380(bl->a);
    func_02036380(bl->b[bl->sel]);
    fA0 = func_020363a4(bl->a, bl->frA0);
    fA1 = bl->tA == 0 ? 0 : func_020363a4(bl->a, bl->frA1);
    fB0 = func_020363a4(bl->b[bl->sel], bl->frB0);
    fB1 = bl->tB == 0 ? 0 : func_020363a4(bl->b[bl->sel], bl->frB1);
    A   = bl->a;
    oA0 = fA0 * 0xA14;
    a0  = (Joint *) ((u8 *) A + 0x420 + oA0);
    a1  = (Joint *) ((u8 *) A + 0x420 + fA1 * 0xA14);
    b0  = (Joint *) ((u8 *) bl->b[bl->sel] + 0x420 + fB0 * 0xA14);
    b1  = (Joint *) ((u8 *) bl->b[bl->sel] + 0x420 + fB1 * 0xA14);
    func_01ff9df0((Vec *) ((u8 *) A + 0x54 + oA0), (Vec *) ((u8 *) A + 0x54 + fA1 * 0xA14), &bl->root[bl->sel == 0],
                  0x1000 - bl->tA);
    func_01ff9df0((Vec *) ((u8 *) bl->b[bl->sel] + 0x54 + fB0 * 0xA14), (Vec *) ((u8 *) bl->b[bl->sel] + 0x54 + fB1 * 0xA14),
                  &bl->root[bl->sel], 0x1000 - bl->tA);
    for (i = 0; i < *(u32 *) ((u8 *) bl->a + 0x1E8C); i++) {
        func_01ffa2dc(&a0->q, &a1->q, &qa, bl->tA);
        func_01ffa2dc(&b0->q, &b1->q, &qb, bl->tB);
        func_01ffa2dc(&qa, &qb, &out->q, bl->blend);
        func_02039d0c(a0, &va, ((0x1000 - bl->tA) * (0x1000 - bl->blend)) >> 12);
        func_02039d0c(a1, &tmp, (bl->tA * (0x1000 - bl->blend)) >> 12);
        VEC_Add(&va, &tmp, &va);
        func_02039d0c(b0, &vb, ((0x1000 - bl->tB) * bl->blend) >> 12);
        func_02039d0c(b1, &tmp, (bl->tB * bl->blend) >> 12);
        VEC_Add(&vb, &tmp, &vb);
        VEC_Add(&va, &vb, &out->v);
        a0++;
        a1++;
        b0++;
        b1++;
        out++;
    }
}

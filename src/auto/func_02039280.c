#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct Node {
    u8 pad[0x38];
    struct Node *next;
} Node;
typedef struct {
    s16 id;
    u8 pad02[0x2C - 2];
    V3 pos;
    u8 pad38[0x58 - 0x38];
    u32 b0 : 8;
    u32 solid : 1;
    u32 rest : 23;
    u8 pad5c[0x70 - 0x5C];
    V3 v70;
    V3 v7c;
    V3 v88;
    V3 v94;
    u32 fa0;
    u8 pada4[4];
    Node *list;
} Actor;
typedef struct {
    u8 pad[0x2C];
    s32 f2c;
    u8 pad30[4];
    s16 f34;
    s16 f36;
} Def;
Def *func_0203a58c(s16);
void func_02039d0c(V3 *, V3 *, s32);
void VEC_Add(V3 *, V3 *, V3 *);
void VEC_Subtract(V3 *, V3 *, V3 *);
s32 VEC_Mag(V3 *);
s32 VEC_DotProduct(V3 *, V3 *);
void func_0203adcc(Actor *, s32, s32, s32);
void func_020397fc(Actor *, V3 *, V3 *);
void func_020398ac(Actor *, V3 *, V3 *);
void func_02037d44(Node *);
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_02039280(Actor *a, Actor *b, V3 *p, V3 *n, s32 depth) {
    V3 v, w, mid, d1, d2, t;
    Def *da;
    s32 push;
    s32 half;
    s32 d;
    s32 f;
    Node *node;
    push = 1;
    if (a->id == -1) {
        return;
    }
    da = func_0203a58c(a->id);
    if (b->id != -1) {
        if (func_0203a58c(b->id)->f2c == 0 && !b->solid) {
            push = 0;
        }
    } else {
        push = 0;
    }
    half = FX_Mul(depth, 0x800);
    func_02039d0c(n, &mid, half);
    VEC_Add(&mid, p, &mid);
    VEC_Subtract(p, &a->pos, &d1);
    VEC_Mag(&d1);
    VEC_Subtract(&mid, &a->pos, &d2);
    VEC_Mag(&d2);
    func_02039d0c(n, &v, half);
    VEC_Add(&a->pos, &v, &t);
    func_0203adcc(a, t.x, t.y, t.z);
    if (push) {
        func_02039d0c(&v, &w, -0x1000);
        VEC_Add(&b->pos, &w, &t);
        func_0203adcc(b, t.x, t.y, t.z);
    } else {
        VEC_Add(&a->pos, &v, &t);
        func_0203adcc(a, t.x, t.y, t.z);
    }
    d = -VEC_DotProduct(n, &a->v70);
    if (d > 0) {
        func_02039d0c(n, &v, d);
        func_020397fc(a, p, &v);
        if (v.y > 0xBB8) {
            a->fa0 |= 2;
        }
        if (push) {
            func_02039d0c(&v, &w, -0x1000);
            func_020397fc(b, p, &w);
            if (w.y > 0xBB8) {
                b->fa0 |= 2;
            }
        }
    }
    d = -VEC_DotProduct(n, &a->v88);
    if (d > 0) {
        if (d <= 0x2000) {
            d = 0;
        }
        func_02039d0c(n, &v, d);
        func_020398ac(a, p, &v);
        if (push) {
            func_02039d0c(&v, &w, -0x1000);
            func_020398ac(b, p, &w);
        }
    }
    func_02039d0c(&a->v88, &v, (s32) (da->f36 * -0.3));
    VEC_Add(&a->v70, &v, &a->v70);
    func_02039d0c(&a->v94, &v, (s32) (da->f36 * -0.3));
    VEC_Add(&a->v7c, &v, &a->v7c);
    f = FX_Mul(d, da->f34);
    if (f > 0) {
        if (f <= FX_Mul(da->f34, 0x5FF7)) {
            f = 0;
        }
        func_02039d0c(n, &v, f);
        func_020398ac(a, p, &v);
        if (push) {
            func_02039d0c(&v, &w, -0x1000);
            func_020398ac(b, p, &w);
        }
    }
    if (push) {
        for (node = b->list; node != 0; node = node->next) {
            func_02037d44(node);
        }
    }
}

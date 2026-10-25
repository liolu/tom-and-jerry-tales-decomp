#include "m2c.h"
typedef struct B {
    u32 b0 : 8;
    u32 b1 : 8;
    u32 b2 : 8;
    u32 top : 8;
    u32 w4;
} B;
typedef struct A {
    s32 f0;
    u32 lo : 8;
    u32 f8 : 12;
    u32 f20 : 3;
    u32 f23 : 1;
    u32 hi : 8;
    B *arr[4];
} A;
typedef struct {
    s32 k;
    s32 pad4;
    s32 base;
    u8 padc[6];
    u16 sz;
} Src;
void func_02051a48(void);
A *func_020322e0(s32 *);
B *func_02032428(void);
s32 func_02032180(u16);
void func_0204ebb8(void *, s32, u16);

void func_02031fd8(Src *src, u32 *data, u8 lo, s32 idx) {
    u16 i;
    s32 dst;
    A *a;
    s32 pal;
    u32 n;
    u32 v;
    B *b;
    a = NULL;
    n = *data++;
    if (n > 4) {
        func_02051a48();
    }
    if (n != 0) {
        if ((s8) src->k == 5 || (s8) src->k == 7) {
            func_02051a48();
        }
        a = func_020322e0(&pal);
        if (a == NULL) {
            func_02051a48();
        }
        a->f20 = 0;
        for (i = 0; i < n; i++) {
            v = *data++;
            b = func_02032428();
            if (b == NULL) {
                func_02051a48();
            }
            b->b2     = (v >> 24) & 0xFF;
            b->b1     = (v >> 16) & 0xFF;
            b->b0     = (v >> 8) & 0xFF;
            b->w4     = (b->w4 & ~0x8000) | ((v & 0xFF) << 8);
            b->w4     = (b->w4 & ~0x7F00) | ((pal & 0x7F) << 8);
            b->top    = 0;
            a->arr[i] = b;
            a->f20++;
        }
    }
    dst = idx * func_02032180(src->sz) + src->base;
    func_0204ebb8(data, dst, src->sz);
    if (a == NULL) {
        return;
    }
    a->f23 = 1;
    a->f8  = src->sz;
    a->lo  = lo;
    a->f0  = dst;
}

#include "m2c.h"

typedef struct N {
    void *p0;
    void *p4;
    void *p8;
    void *pc;
    u8 pad[0x28];
    struct N *next;
} N;

typedef struct A {
    u8 pad[8];
    u8 f8[0x24];
    u8 f2c[0x34];
    u8 f60[0xc];
    u8 f6c[0x38];
    s16 fa4;
    s16 pada;
    N *fa8;
} A;

typedef struct B {
    u8 pad[4];
    u32 f4 : 8;
    u32 f4r : 24;
    u8 pad1[0x18];
    N *f20;
} B;

A *func_0203a95c(s16);
B *func_0203a58c(s16);
void func_02051f18(void *, void *, s32);
void func_02037bb8(void *);

void func_020380fc(s32 arg0, s32 arg1) {
    B *b;
    A *a;
    N *n;
    N *m;
    N *t;
    s16 id = arg0;
    a      = func_0203a95c(id);
    b      = func_0203a58c(arg1);
    n      = a->fa8;
    m      = b->f20;
    if (n != 0) {
        do {
            t = n->next;
            func_02051f18(m, n, 0x3C);
            n->next                    = t;
            n->p0                      = a->f8;
            n->p4                      = a->f2c;
            n->p8                      = a->f60;
            n->pc                      = a->f6c;
            *(s16 *) ((u8 *) n + 0x34) = id;
            *(s16 *) ((u8 *) n + 0x36) = 1;
            func_02037bb8(n);
            n = n->next;
            m = m->next;
        } while (n != 0);
    }
    a->fa4 = b->f4;
}

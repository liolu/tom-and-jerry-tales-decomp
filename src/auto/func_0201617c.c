#include "m2c.h"

typedef struct I {
    s32 kind;
    u8 pad[0x3c];
    u8 sub[0x22];
    u8 flag;
    u8 pad2;
} I;

typedef struct O {
    u8 pad[0x5a];
    u8 n2;
    u8 pad1[1];
    I *a2;
    u8 n1;
    u8 pad2[3];
    I *a1;
} O;

void func_02045d74(void *);

void func_0201617c(O *arg0) {
    u8 i;
    for (i = 0; i < arg0->n1; i++) {
        I *p = &arg0->a1[i];
        if (p->kind == 2 && p->flag == 0) {
            func_02045d74(p->pad + 0x3c);
        }
    }
    for (i = 0; i < arg0->n2; i++) {
        I *p = &arg0->a2[i];
        if (p->kind == 2 && p->flag == 0) {
            func_02045d74(p->pad + 0x3c);
        }
    }
}

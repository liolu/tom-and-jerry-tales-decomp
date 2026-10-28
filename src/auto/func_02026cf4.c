#include "m2c.h"

typedef struct A {
    s16 id;
    u8 pad[0x56];
    u32 flags;
} A;

typedef struct B {
    u8 pad[0xc];
    char name[1];
} B;

u32 func_0203adac(void);
A *func_0203a95c(s16);
B *func_0203a58c(void);
s32 STD_CompareString(char *, s32);

void func_02026cf4(s32 arg0, s32 arg1) {
    s32 f2 = 0;
    s32 f1 = 0;
    u16 i  = 0;
    u32 n;
    A *a;
    B *b;
    n = func_0203adac();
    for (; i < n; i++) {
        a = func_0203a95c(i);
        if (a->id != -1) {
            b = func_0203a58c();
            if (arg1 != 0) {
                if (STD_CompareString(b->name, arg1) == 0) {
                    f1 = 1;
                    a->flags &= ~0x40;
                }
            } else {
                f1 = 1;
            }
            if (arg0 != 0) {
                if (STD_CompareString(b->name, arg0) == 0) {
                    f2 = 1;
                    a->flags |= 0x40;
                }
            } else {
                f2 = 1;
            }
            if (f1 != 0 && f2 != 0) {
                return;
            }
        }
    }
}

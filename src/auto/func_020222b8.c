#include "m2c.h"

typedef struct T {
    s32 a;
    s32 b;
    s32 c;
} T;

extern u8 data_0206b894;
extern T data_020877b8[2];
void func_02022138(void *, s32, s32, s32);
void func_02022144(s32);
s32 func_0204b77c(s32, s32);

void func_020222b8(s32 arg0, s32 arg1, s32 arg2) {
    s32 i = 0;
    s32 m = 1;
    T *t;
    s32 x;
    func_02022138(&data_0206b894, arg0, arg1, arg2);
    x = arg0 << 12;
    t = data_020877b8;
    do {
        if (arg2 & m) {
            if (arg1 != 0) {
                t->b = x;
                t->c = func_0204b77c(x - t->a, arg1) >> 12;
            }
            if (arg1 == 0) {
                t->a = x;
                t->b = x;
                t->c = 0;
                func_02022144(0);
            }
        }
        i++;
        m *= 2;
        t++;
    } while (i < 2);
}

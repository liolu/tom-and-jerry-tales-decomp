#include "m2c.h"
typedef struct {
    s32 p0;
    s32 f4;
    s32 f8;
    s32 fc;
    u8 pad[0x10];
    s32 f20;
    s32 f24;
} T;
extern u16 data_0206418c[];
s32 func_01ff8000(s32, s32);
s32 func_01ff803c(s32, s32);
s32 func_0203df68(s32);
s32 func_0203e348(s32, s32);
void func_0203e038(T *t, s32 a) {
    s32 x = 0;
    s32 y;
    s32 i  = t->f4;
    s32 j  = t->fc;
    t->f20 = 0;
    t->f24 = 0;
    y      = 0;
    if (func_0203df68(t->f8) != 0 && a != 0) {
        u32 d = data_0206418c[i];
        if (t->f8 == 1) {
            x = d * 2;
            y = func_0203e348(i, j);
        }
        t->f20 = func_01ff8000(a, x);
        t->f24 = func_01ff803c(a, y);
    }
}

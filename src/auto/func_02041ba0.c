#include "m2c.h"
typedef struct {
    s16 a;
    u8 pad[0x52];
    s32 f54;
} A;
typedef struct {
    u8 pad[8];
    u32 f8;
    u8 p2[0x10];
    s32 f1c;
} B;
A *func_0203a95c(s16);
B *func_0203a58c(s16);
void func_02041ba0(s32 id, u16 *p) {
    A *a = func_0203a95c((s16) id);
    B *b = func_0203a58c(a->a);
    p[3]++;
    a->f54 = b->f1c;
    b->f8 &= ~1;
}

#include "m2c.h"
typedef struct {
    u8 p[0x18];
    s32 f18;
    u8 q[8];
    u32 f24;
} El;
typedef struct {
    s32 a;
    s32 b;
} H;
extern H data_021a6d80;
extern El data_021a6f08[];
void func_0203fcf0(void) {
    s32 i;
    El *e = data_021a6f08;
    for (i = 0; i < 16; i++) {
        e->f18 = 0;
        e->f24 &= ~4;
        e++;
    }
    data_021a6d80.a = -1;
    data_021a6d80.b = 0;
}

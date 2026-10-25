#include "m2c.h"
typedef struct {
    s32 f0;
    u32 lo : 8;
    u32 f8 : 12;
    u32 f20 : 3;
    u32 f23 : 1;
    u32 hi : 8;
    u32 arr[4];
} A;
typedef struct {
    u32 lo24 : 24;
    u32 top : 8;
    u32 low : 8;
    u32 f8 : 7;
    u32 f15 : 1;
    u32 rest : 16;
} B;
extern A data_0208a178[20];
extern B data_0208a038[40];
extern u16 data_0208a02c;

void func_020321ec(void) {
    u16 i;
    u16 j;
    for (i = 0; i < 20; i++) {
        A *a   = &data_0208a178[i];
        a->f23 = 0;
        a->f20 = 0;
        a->f8 = a->f0 = 0;
        for (j = 0; j < 4; j++) {
            a->arr[j] = 0;
        }
    }
    for (i = 0; i < 40; i++) {
        B *b   = &data_0208a038[i];
        b->f15 = 0;
        b->top = b->low = 0;
        b->f8           = 0x7F;
    }
    data_0208a02c = 0;
}

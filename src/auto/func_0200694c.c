#include "m2c.h"

extern void func_02006c10(void *, int, void *);
extern void func_0203437c(s32, void *);
extern void func_0204b918(void *, void *, void *);
extern u8 data_02086a88;
extern s32 data_02086ac0[][3];

void func_0200694c(s32 arg0, int arg1) {
    u8 a[12];
    u8 b[12];
    s16 i;
    func_02006c10(a, arg1, b);
    i = 0;
    if (i >= data_02086a88) {
        return;
    }
    do {
        if (data_02086ac0[arg0][i] != -1) {
            func_0203437c(data_02086ac0[arg0][i], a);
            func_0204b918(a, b, a);
        }
        i++;
    } while (data_02086a88 > i);
}

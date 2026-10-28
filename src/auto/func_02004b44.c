#include "m2c.h"
extern u8 data_02086a98[];
extern s32 data_02086ac0[][3];
void MI_CpuFill8(void *, s32, s32);
void func_02004b44(void) {
    s16 i;
    s16 j;
    MI_CpuFill8(data_02086a98, 0, 0x10);
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 3; j++) {
            data_02086ac0[i][j] = -1;
        }
    }
}

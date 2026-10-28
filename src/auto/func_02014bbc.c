#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);

void func_02014bbc(void *arg0) {
    MI_CpuFill8(arg0, 0, 0x64);
    M2C_FIELD(arg0, s32 *, 0) = 0xF;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

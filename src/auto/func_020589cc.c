#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_0204f32c();                                /* extern */
extern M2C_UNK data_021b38c0;
extern M2C_UNK data_021b38c4;

void func_020589cc(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_021b38c4, 0x05000001);
    M2C_FIELD(&data_021b38c0, s16 *, 6) = func_0204f32c();
}

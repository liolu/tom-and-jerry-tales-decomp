#include "m2c.h"

M2C_UNK func_0204ee24(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0204ef68(M2C_UNK);                     /* extern */
M2C_UNK func_02051590(M2C_UNK);                     /* extern */
extern M2C_UNK data_021b0798;
extern M2C_UNK func_02051624;

void func_020515ac(void) {
    if (M2C_FIELD(&data_021b0798, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021b0798, u16 *, 0) = 1U;
    func_02051590(0);
    M2C_FIELD(&data_021b0798, s32 *, 8)       = 0;
    M2C_FIELD(&data_021b0798, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_0204ee24(8, &func_02051624);
    func_0204ef68(8);
    M2C_FIELD(&data_021b0798, s32 *, 4) = 0;
}

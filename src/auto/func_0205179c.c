#include "m2c.h"

M2C_UNK func_0204ef98(M2C_UNK);                     /* extern */
extern M2C_UNK data_021b07a8;

void func_0205179c(void) {
    if (M2C_FIELD(&data_021b07a8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021b07a8, u16 *, 0)    = 1U;
    M2C_FIELD(&data_021b07a8, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_021b07a8, s32 *, 0x10) = 0;
    func_0204ef98(4);
    M2C_FIELD(&data_021b07a8, s32 *, 8) = 0;
    M2C_FIELD(&data_021b07a8, s32 *, 4) = 0;
}

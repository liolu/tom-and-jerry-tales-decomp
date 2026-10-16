#include "m2c.h"

M2C_UNK func_020534f8();                            /* extern */
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02053650(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021b2450;
extern M2C_UNK func_020554dc;

void func_0205575c(void) {
    if (M2C_FIELD(&data_021b2450, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021b2450, u16 *, 0) = 1U;
    func_020534f8();
    M2C_FIELD(&data_021b2450, s16 *, 0x10) = 0;
    M2C_FIELD(&data_021b2450, s32 *, 4)    = 0;
    M2C_FIELD(&data_021b2450, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021b2450, s16 *, 0x36) = 0;
    M2C_FIELD(&data_021b2450, s16 *, 0x34) = 0;
    M2C_FIELD(&data_021b2450, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_021b2450, s16 *, 0x38) = 0;
    do {

    } while (func_02053650(6, 1) == 0);
    func_02053604(6, &func_020554dc);
}

#include "m2c.h"

M2C_UNK func_020534f8();

M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);

s32 func_02053650(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021b24f4;
extern M2C_UNK func_02056bd0;

void func_02056ab0(void) {
    if (M2C_FIELD(&data_021b24f4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021b24f4, u16 *, 0)    = 1U;
    M2C_FIELD(&data_021b24f4, s32 *, 4)    = 0;
    M2C_FIELD(&data_021b24f4, s32 *, 8)    = 0;
    M2C_FIELD(&data_021b24f4, s32 *, 0x20) = 0;
    M2C_FIELD(&data_021b24f4, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_021b24f4, s32 *, 0x10) = 0;
    func_020534f8();
    do {

    } while (func_02053650(5, 1) == 0);
    func_02053604(5, &func_02056bd0);
}

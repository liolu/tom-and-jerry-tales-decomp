#include "m2c.h"

void *func_02033118(u16);
s32 func_02033130(M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_02069a60;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
extern M2C_UNK data_0206ea0c;

void func_02004ac4(void) {
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0                                 = func_02033130(&data_02069a60, &data_0206e6a4, &data_0206e698);
    M2C_FIELD(&data_0206ea0c, s32 *, 4)     = temp_r0;
    temp_r0_2                               = func_02033118((u16) temp_r0);
    M2C_FIELD(&data_0206ea0c, void **, 0xC) = temp_r0_2;
    M2C_FIELD(&data_0206ea0c, s32 *, 0)     = (s32) M2C_FIELD(temp_r0_2, s32 *, 0x18);
}

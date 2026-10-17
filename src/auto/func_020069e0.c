#include "m2c.h"

s32 func_02033a2c(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_0206e698;
extern M2C_UNK data_02086aa8;

void func_020069e0(M2C_UNK arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02086aa8 + (arg1 * 4))) = func_02033a2c(arg0, &data_0206e698);
}

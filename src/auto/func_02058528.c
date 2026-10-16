#include "m2c.h"

M2C_UNK func_020534f8();                            /* extern */
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_021b2e00;
extern M2C_UNK func_02058554;

void func_02058528(void) {
    func_020534f8();
    func_02053604(0xE, &func_02058554);
    M2C_FIELD(&data_021b2e00, s32 *, 4) = 0;
}

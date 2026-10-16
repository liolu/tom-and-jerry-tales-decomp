#include "m2c.h"

M2C_UNK func_020534f8();                            /* extern */
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02053650(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021b07bc;
extern M2C_UNK func_020518d8;

void func_02051884(void) {
    if (M2C_FIELD(&data_021b07bc, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_021b07bc, u16 *, 2) = 1U;
    func_020534f8();
    do {

    } while (func_02053650(0xC, 1) == 0);
    func_02053604(0xC, &func_020518d8);
}

#include "m2c.h"

M2C_UNK func_020501c8(s32, M2C_UNK);                /* extern */
M2C_UNK func_020517f8();                            /* extern */
extern M2C_UNK data_021b0460;

void func_020501a8(void) {
    func_020517f8();
    func_020501c8(M2C_FIELD(&data_021b0460, s32 *, 0x28), 0);
}

#include "m2c.h"

s32 func_020506dc();                                /* extern */
s32 func_02050d4c(M2C_UNK);                         /* extern */
s32 func_02050e30(M2C_UNK);                         /* extern */
M2C_UNK func_02050ed8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02050eec(M2C_UNK, s32);                /* extern */
M2C_UNK func_02051394(s32);                         /* extern */
M2C_UNK func_0205139c(s32);                         /* extern */
extern M2C_UNK data_021b06dc;

void func_02050cb8(void) {
    func_02050ed8(2, func_02050d4c(2));
    func_02050eec(2, func_02050e30(2));
    if ((M2C_FIELD(&data_021b06dc, s32 *, 4) != 0) && ((func_020506dc() & 3) != 1)) {
        return;
    }
    func_02051394(0x0200002B);
    func_0205139c(0x023E0021);
}

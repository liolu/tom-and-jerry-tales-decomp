#include "m2c.h"

M2C_UNK func_0205934c(M2C_UNK);                     /* extern */
M2C_UNK func_02063960();                            /* extern */
extern M2C_UNK data_021b3ed0;

void func_02059300(M2C_UNK arg0) {
    if (M2C_FIELD(&data_021b3ed0, s32 *, 0xC) == 0) {
        func_02063960();
        if (M2C_FIELD(&data_021b3ed0, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_021b3ed0, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_021b3ed0, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_0205934c(arg0);
}

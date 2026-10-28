#include "m2c.h"

void *func_01ff8000(M2C_UNK, M2C_UNK);
M2C_UNK func_0200e2b4();

void *func_0200e760(s32 arg0, M2C_UNK arg1) {
    void *temp_r4;

    temp_r4                                        = func_01ff8000(arg1, 0x1C);
    M2C_FIELD(func_01ff8000(arg1, 0x10), s32 *, 8) = 0;
    func_0200e2b4();
    return temp_r4;
}

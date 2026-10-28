#include "m2c.h"

s32 func_01ff8000(M2C_UNK, M2C_UNK);
M2C_UNK func_0200979c(void *);

void func_020096fc(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0xB8) = func_01ff8000(arg1, 0x54);
    func_0200979c(arg0);
}

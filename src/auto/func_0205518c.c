#include "m2c.h"

M2C_UNK func_02054738(void *, M2C_UNK);             /* extern */

void func_0205518c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_02054738(arg0, 3);
}

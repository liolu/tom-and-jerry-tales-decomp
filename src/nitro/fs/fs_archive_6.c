#include "m2c.h"

M2C_UNK func_02053814(void *, s32);
s32 func_02053870(void *, s32);
s32 func_0205444c(s32);
M2C_UNK FSi_ExecuteAsyncCommand();

s32 FSi_ExecuteSyncCommand(void *arg0) {
    func_02053814(arg0, func_02053870(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0205444c(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        FSi_ExecuteAsyncCommand();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}

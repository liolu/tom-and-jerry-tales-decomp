#include "m2c.h"

M2C_UNK func_0204f260();                            /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */

void func_02058c28(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0204f260(arg0);
    }
    func_0205180c(M2C_FIELD(arg1, s32 *, 4));
}

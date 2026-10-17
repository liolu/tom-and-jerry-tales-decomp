#include "m2c.h"

s32 func_0203df7c(s32);                             /* extern */
s32 func_0203e348(s32, s32);                        /* extern */
s32 func_0203e374(void *);                          /* extern */
M2C_UNK func_02051fd0(s32, M2C_UNK, s32);           /* extern */

void func_0203d098(void *arg0) {
    s32 temp_r4;

    if (func_0203df7c(M2C_FIELD(arg0, s32 *, 8)) == 0) {
        return;
    }
    temp_r4 = func_0203e348(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    func_02051fd0(func_0203e374(arg0), 0, temp_r4);
}

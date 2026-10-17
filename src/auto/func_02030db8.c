#include "m2c.h"

M2C_UNK func_02030ecc(void *);                      /* extern */
s32 func_02051000(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_02051a48();                            /* extern */

void func_02030db8(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 & 3) {
        do {
            var_r4 += 1;
        } while (var_r4 & 3);
    }
    temp_r0                   = func_02051000(0, -1, var_r4);
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (temp_r0 == 0) {
        func_02051a48();
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((M2C_FIELD(arg0, s32 *, 0) + var_r4) - 1);
    func_02030ecc(arg0);
}

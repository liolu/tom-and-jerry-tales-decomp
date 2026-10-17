#include "m2c.h"

M2C_UNK func_02030ecc(void *);                      /* extern */
s32 func_02051000(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_020512e0(M2C_UNK, s32);                /* extern */
M2C_UNK func_02051a48();                            /* extern */
extern M2C_UNK data_0206cf20;

void func_02030e44(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = arg1;
    if (var_r5 & 3) {
        do {
            var_r5 += 1;
        } while (var_r5 & 3);
    }
    func_020512e0(4, M2C_FIELD(&data_0206cf20, s32 *, 4));
    temp_r0                   = func_02051000(4, -1, var_r5);
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    func_020512e0(4, M2C_FIELD(&data_0206cf20, s32 *, 4));
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        func_02051a48();
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((M2C_FIELD(arg0, s32 *, 0) + var_r5) - 1);
    func_02030ecc(arg0);
}

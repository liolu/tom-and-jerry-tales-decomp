#include "m2c.h"

s32 func_02050d24(M2C_UNK);                         /* extern */
s32 func_02050d38(M2C_UNK);                         /* extern */
M2C_UNK func_02050eec(M2C_UNK, s32);                /* extern */
M2C_UNK func_02051170(M2C_UNK, s32);                /* extern */
s32 func_020511a0(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_02051248(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_02051a48();                            /* extern */
extern M2C_UNK data_0206cf20;

void func_02030c98(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;

    temp_r4 = func_02050d24(0);
    func_02050eec(0, func_020511a0(0, func_02050d38(0), temp_r4, 1));
    temp_r4_2                           = func_02050d24(0);
    temp_r0                             = func_02051248(0, func_02050d38(0), temp_r4_2);
    M2C_FIELD(&data_0206cf20, s32 *, 0) = temp_r0;
    if (temp_r0 < 0) {
        func_02051a48();
    }
    func_02051170(0, M2C_FIELD(&data_0206cf20, s32 *, 0));
    temp_r4_3 = func_02050d24(4);
    temp_r0   = func_02050d38(4);
    if (temp_r0 == temp_r4_3) {
        return;
    }
    temp_r4_4 = func_02050d24(4);
    func_02050eec(4, func_020511a0(4, func_02050d38(4), temp_r4_4, 1));
    temp_r4_5                           = func_02050d24(4);
    temp_r0_2                           = func_02051248(4, func_02050d38(4), temp_r4_5);
    M2C_FIELD(&data_0206cf20, s32 *, 4) = temp_r0_2;
    if (temp_r0_2 < 0) {
        func_02051a48();
    }
    func_02051170(4, M2C_FIELD(&data_0206cf20, s32 *, 4));
}

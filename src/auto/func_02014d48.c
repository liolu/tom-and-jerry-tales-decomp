#include "m2c.h"

s32 func_02014da0(M2C_UNK);
M2C_UNK func_020211dc(u8, s32);
extern M2C_UNK data_02087048;
s32 func_02014d48(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;
    temp_r0 = func_02014da0(1);
    temp_r5 = (temp_r0 * 0x58) + M2C_FIELD(&data_02087048, s32 *, 0x10);
    func_020211dc((u8) arg0, temp_r5);
    *(s32 *) (M2C_FIELD(&data_02087048, s32 *, 8) + (temp_r0 * 4)) = temp_r5;
    if (temp_r0 == M2C_FIELD(&data_02087048, s16 *, 2)) {
        M2C_FIELD(&data_02087048, s16 *, 2) = (s16) (M2C_FIELD(&data_02087048, s16 *, 2) + 1);
    }
    return temp_r5;
}

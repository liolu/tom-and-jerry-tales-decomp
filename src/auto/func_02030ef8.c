#include "m2c.h"

s32 func_02051000(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_02054c34(M2C_UNK);                     /* extern */
s32 func_0205541c(s32, s32);                        /* extern */
extern M2C_UNK data_02088720;

void func_02030ef8(void) {
    s32 temp_r0;

    func_02054c34(-1);
    temp_r0 = func_0205541c(0, 0);
    func_0205541c(func_02051000(0, -1, temp_r0), temp_r0);
    M2C_FIELD(&data_02088720, s32 *, 4) = 1;
}

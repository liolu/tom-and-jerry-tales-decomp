#include "m2c.h"

M2C_UNK func_02027730(M2C_UNK);                     /* extern */
M2C_UNK func_0203b96c(M2C_UNK);                     /* extern */
M2C_UNK func_0203c24c(u8, u8, M2C_UNK);             /* extern */
M2C_UNK func_0203d0d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_0206bb5c;
extern M2C_UNK data_0206bb68;
extern M2C_UNK data_020b8b6c;

void func_02027794(void) {
    u8 var_r7;

    func_0203b96c(0);
    var_r7 = 0;
    do {
        func_0203c24c(((s8 *) &data_0206bb5c)[var_r7], M2C_FIELD(&data_0206bb68, u8 *, 1), 0xC0);
        var_r7 += 1;
    } while ((u32) var_r7 < 9U);
    func_0203d0d8(0, 0, 0xFF, 0x30, 0, 0, &data_020b8b6c);
    func_02027730(0);
    func_0203c24c(9U, 9U, 0xC0);
}

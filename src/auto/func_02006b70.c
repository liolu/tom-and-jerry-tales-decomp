#include "m2c.h"

M2C_UNK func_02006a04(M2C_UNK, s32);                /* extern */
M2C_UNK func_02006b08(M2C_UNK);                     /* extern */
extern M2C_UNK data_0206e6d4;
extern s32 data_0206ea14;

void func_02006b70(void) {
    M2C_FIELD(&data_0206e6d4, s16 *, 0x90) = 0x5A;
    func_02006b08(1);
    func_02006b08(2);
    func_02006a04(2, data_0206ea14 + 0xA0);
}

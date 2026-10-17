#include "m2c.h"

M2C_UNK func_02002608();                            /* extern */
M2C_UNK func_0203a74c(s32);                         /* extern */
M2C_UNK func_0204d760();                            /* extern */
extern M2C_UNK data_02086d90;

void func_0200c790(void) {
    func_0204d760();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_0203a74c(M2C_FIELD(&data_02086d90, s32 *, 8));
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 1;
}

#include "m2c.h"

M2C_UNK func_02002608();                            /* extern */
M2C_UNK func_02035164();                            /* extern */
M2C_UNK func_0203ac7c();                            /* extern */
M2C_UNK func_0204d760();                            /* extern */
M2C_UNK func_0204d7cc();                            /* extern */

void func_02028d28(void) {
    func_0204d7cc();
    func_0204d760();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_0203ac7c();
    func_02035164();
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 1;
}

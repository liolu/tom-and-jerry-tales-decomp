#include "m2c.h"

M2C_UNK func_02002608();                            /* extern */
M2C_UNK func_02003f98();                            /* extern */
M2C_UNK func_0204d760();                            /* extern */

void func_0200dfb0(void) {
    func_0204d760();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_02003f98();
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 1;
}

#include "m2c.h"

M2C_UNK func_0204c1b0();                            /* extern */
M2C_UNK func_02051868();                            /* extern */

void func_0200c4f8(void) {
    func_02051868();
    *(s32 *) 0x04001000 |= 0x10000;
    func_0204c1b0();
}

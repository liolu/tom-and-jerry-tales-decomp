#include "m2c.h"

M2C_UNK func_02000e94();                            /* extern */
M2C_UNK func_02051a48();                            /* extern */
M2C_UNK func_02056590();                            /* extern */
M2C_UNK func_020585c8();                            /* extern */

void func_020011f4(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        func_02056590();
    }
    func_02000e94();
    func_020585c8();
    func_02051a48();
}

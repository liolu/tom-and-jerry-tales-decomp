#include "m2c.h"

M2C_UNK func_02051a48();                            /* extern */
M2C_UNK func_02056590(s32);                         /* extern */
M2C_UNK func_0205865c(M2C_UNK, M2C_UNK);            /* extern */

void func_020585c8(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_02056590(temp_r0);
    }
    func_0205865c(1, 1);
    func_02051a48();
}

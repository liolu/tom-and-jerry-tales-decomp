#include "m2c.h"

M2C_UNK func_02046790(void *, s32);                 /* extern */
s32 func_02046bc8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020489d0();                            /* extern */

s32 func_02048a14(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02046bc8(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020489d0();
    func_02046790(((s8 *) arg0 + 4), temp_r0);
    return 1;
}

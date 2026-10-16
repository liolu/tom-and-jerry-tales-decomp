#include "m2c.h"

M2C_UNK func_0205185c(s32);                         /* extern */
M2C_UNK func_020562d0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020564bc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020565b8(s32 *, s32 *);                /* extern */
s32 func_02056944(M2C_UNK);                         /* extern */
s32 func_02056964();                                /* extern */

void func_020564e4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_0205185c(0x996A00);
    if (func_02056964() != 1) {
        func_020565b8(&sp4, &sp0);
        if (sp4 != 0) {
            func_020564bc(0, 0);
        }
        if (sp0 != 0) {
            func_020564bc(1, 0);
        }
        if (func_02056944(1) == 0) {
            do {
                func_0205185c(0x996A00);
            } while (func_02056944(1) == 0);
        }
    }
    func_020562d0(0xE, arg0, arg1);
}

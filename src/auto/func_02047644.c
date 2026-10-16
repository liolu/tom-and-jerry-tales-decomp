#include "m2c.h"

M2C_UNK func_02052400(u8);                          /* extern */
M2C_UNK func_02052480(u8, s32);                     /* extern */
M2C_UNK func_020476e4(void *);                      /* extern */

void func_02047644(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02052480(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02052400(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020476e4(arg0);
}

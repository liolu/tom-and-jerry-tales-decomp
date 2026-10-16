#include "m2c.h"

M2C_UNK func_0205185c(M2C_UNK);                     /* extern */
s32 func_02052ec0();                                /* extern */
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02053650(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_02052dcc;

void func_02052df0(void) {
    func_02053604(7, &func_02052dcc);
    if (func_02052ec0() == 0) {
        return;
    }
    if (func_02053650(7, 1) != 0) {
        return;
    }
    do {
        func_0205185c(0x64);
    } while (func_02053650(7, 1) == 0);
}

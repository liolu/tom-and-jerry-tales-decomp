#include "m2c.h"

M2C_UNK func_020552d4();                            /* extern */
extern s32 data_021b23d8;

void func_02054c34(s32 arg0) {
    if (data_021b23d8 != 0) {
        return;
    }
    data_021b23d8 = 1;
    func_020552d4(arg0);
}

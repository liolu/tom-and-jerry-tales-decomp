#include "m2c.h"

M2C_UNK func_02051a48();                            /* extern */
extern s16 data_021b38c4;

void func_02058f4c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_021b38c4 = 1;
        return;
    }
    func_02051a48();
}

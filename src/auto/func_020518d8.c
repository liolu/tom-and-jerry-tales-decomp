#include "m2c.h"

M2C_UNK func_02051a48();                            /* extern */
extern s16 data_021b07bc;

void func_020518d8(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_021b07bc = 1;
        return;
    }
    func_02051a48();
}

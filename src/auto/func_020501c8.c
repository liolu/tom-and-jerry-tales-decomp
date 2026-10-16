#include "m2c.h"

M2C_UNK func_02050224(s32);                         /* extern */
M2C_UNK func_020505d8(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_02050690(void *);                      /* extern */
extern M2C_UNK data_021b0460;

void func_020501c8(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_021b0460, s32 *, 0x1C) != 0) {
        func_020505d8(arg0, func_02050224);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_02050690(arg0);
        return;
    }
    func_02050224(arg1);
}

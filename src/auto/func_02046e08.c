#include "m2c.h"

M2C_UNK func_020525dc(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_021ae540;

s32 func_02046e08(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & M2C_FIELD(&data_021ae540, s32 *, 8)) {
        return 0;
    }
    func_020525dc(arg0, 0);
    M2C_FIELD(&data_021ae540, s32 *, 8) = (s32) (M2C_FIELD(&data_021ae540, s32 *, 8) | arg0);
    return 1;
}

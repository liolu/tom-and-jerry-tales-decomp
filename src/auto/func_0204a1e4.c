#include "m2c.h"

M2C_UNK func_020478f0(void *);                      /* extern */
M2C_UNK func_02049f00(void *);                      /* extern */
M2C_UNK func_020508e0(M2C_UNK *);                   /* extern */
M2C_UNK func_02050964(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021af530;
extern M2C_UNK data_021afba8;

void func_0204a1e4(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_020508e0(&data_021afba8);
    if (M2C_FIELD(&data_021af530, s32 *, 4) != 0) {
        func_020508e0(M2C_FIELD(&data_021af530, s32 *, 4) + 0x4C8);
    }
    func_02049f00(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_020478f0(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_02050964(&data_021afba8);
    if (M2C_FIELD(&data_021af530, s32 *, 4) == 0) {
        return;
    }
    func_02050964(M2C_FIELD(&data_021af530, s32 *, 4) + 0x4C8);
}

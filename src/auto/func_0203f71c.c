#include "m2c.h"

s32 func_0203f370(s32);
M2C_UNK func_020470cc(void *, s32);
M2C_UNK func_02047134(void *, s32, M2C_UNK);
s32 NNS_SndArcPlayerStartSeqArcEx(void *, s32, s32, M2C_UNK, s32, s32);
extern M2C_UNK data_0206db50;
extern M2C_UNK data_020ba4c0;

s32 func_0203f71c(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r0;
    void *temp_r9;

    if ((M2C_FIELD(&data_0206db50, s32 *, 8) == 0) || (arg2 <= 0)) {
        return -1;
    }
    temp_r0 = func_0203f370(arg4);
    if (temp_r0 >= 0) {
        temp_r9 = (M2C_UNK *) ((s8 *) &data_020ba4c0 + (temp_r0 * 0x10));
        if (NNS_SndArcPlayerStartSeqArcEx(temp_r9, temp_r0 + 4, arg0, 0x7F, arg0, arg1) != 0) {
            func_020470cc(temp_r9, arg2);
            func_02047134(temp_r9, 0xFFFF, arg3);
        }
    }
    return temp_r0 + 4;
}

#include "m2c.h"

M2C_UNK NNS_SndSetMasterVolume(M2C_UNK);
M2C_UNK func_02046ffc(M2C_UNK);
M2C_UNK NNS_SndHeapLoadState(s32, M2C_UNK);
extern M2C_UNK data_020ba3e0;

void func_0203f6c0(void) {
    if (M2C_FIELD(&data_020ba3e0, s32 *, 4) == 0) {
        return;
    }
    func_02046ffc(0);
    NNS_SndSetMasterVolume(0);
    NNS_SndHeapLoadState(M2C_FIELD(&data_020ba3e0, s32 *, 0x20), 1);
}

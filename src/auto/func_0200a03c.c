#include "m2c.h"

s32 *func_0203f600();
M2C_UNK NNS_SndHeapGetFreeSize(s32);
M2C_UNK NNS_SndArcLoadBank(M2C_UNK, s32);

void func_0200a03c(M2C_UNK arg0) {
    s32 *temp_r0;

    temp_r0 = func_0203f600();
    NNS_SndHeapGetFreeSize(*temp_r0);
    NNS_SndArcLoadBank(arg0, *temp_r0);
}

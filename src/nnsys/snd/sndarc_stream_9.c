#include "m2c.h"

s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
M2C_UNK NNS_FndAppendListObject(M2C_UNK *, M2C_UNK);
extern M2C_UNK sFreeCommandList;

void FreeCommandBuffer(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = OS_DisableInterrupts();
    NNS_FndAppendListObject(&sFreeCommandList, arg0);
    OS_RestoreInterrupts(temp_r4);
}

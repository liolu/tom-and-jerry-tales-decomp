#include "m2c.h"

M2C_UNK NNS_FndRemoveListObject(M2C_UNK, void *);
void *NNS_FndGetNextListObject(M2C_UNK, M2C_UNK);
s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);

void *ReadCommandBuffer(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = OS_DisableInterrupts();
    temp_r0 = NNS_FndGetNextListObject(arg0, 0);
    if (temp_r0 != NULL) {
        NNS_FndRemoveListObject(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    OS_RestoreInterrupts(temp_r4);
    return temp_r0;
}

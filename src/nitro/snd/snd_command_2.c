#include "engine.h"
#include "m2c.h"

s32 SND_RecvCommandReply();
s32 SND_IsFinishedCommandTag();
M2C_UNK RequestCommandProc();
M2C_UNK OS_DisableInterrupts(void);
void OS_RestoreInterrupts(M2C_UNK);
extern M2C_UNK sFreeList;

void SND_WaitForCommandProc(M2C_UNK arg0) {
    if (SND_IsFinishedCommandTag() != 0) {
        return;
    }
    do {

    } while (SND_RecvCommandReply(0) != 0);
    if (SND_IsFinishedCommandTag(arg0) != 0) {
        return;
    }
    RequestCommandProc();
    if (SND_IsFinishedCommandTag(arg0) != 0) {
        return;
    }
    do {
        SND_RecvCommandReply(1);
    } while (SND_IsFinishedCommandTag(arg0) == 0);
}

s32 SND_GetCurrentCommandTag(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = OS_DisableInterrupts();
    if (M2C_FIELD(&sFreeList, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&sFreeList, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&sFreeList, s32 *, 0x20);
    }
    OS_RestoreInterrupts(temp_r0);
    return var_r4;
}

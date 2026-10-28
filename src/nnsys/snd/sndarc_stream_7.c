#include "m2c.h"

M2C_UNK NNS_SndStrmFreeChannel();
M2C_UNK NNS_FndInitList(void *, M2C_UNK);
M2C_UNK OS_CreateThread(void *, M2C_UNK *, void *, s32, s32, s32);
M2C_UNK OS_WakeupThreadDirect(void *);
M2C_UNK OS_InitMutex(void *);
extern M2C_UNK StrmThread;

void FreeChannel(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_r1 == 0) {
        return;
    }
    temp_r1_2                     = temp_r1 - 1;
    M2C_FIELD(arg0, s32 *, 0x120) = temp_r1_2;
    if (temp_r1_2 != 0) {
        return;
    }
    NNS_SndStrmFreeChannel();
}

void CreateThread(void *arg0, s32 arg1) {
    OS_CreateThread(arg0, &StrmThread, arg0, arg0 + 0x4C0, 0x400, arg1);
    NNS_FndInitList(arg0 + 0x4E0, 0);
    OS_InitMutex(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    OS_WakeupThreadDirect(arg0);
}

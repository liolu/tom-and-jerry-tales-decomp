#include "m2c.h"

M2C_UNK OS_SleepThread(void *);
M2C_UNK OSi_EnqueueTail(void *, void *);
s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
extern M2C_UNK OSi_ThreadInfo;

void OS_InitMutex(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void OS_LockMutex(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = OS_DisableInterrupts();
    temp_r7 = M2C_FIELD(&OSi_ThreadInfo, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        OSi_EnqueueTail(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        OS_SleepThread(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    OS_RestoreInterrupts(temp_r4);
}

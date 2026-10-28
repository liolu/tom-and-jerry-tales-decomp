#include "m2c.h"

M2C_UNK OSi_RemoveSpecifiedLinkFromQueue(s32, void *);
M2C_UNK func_0204ff1c(void *);
M2C_UNK OS_WakeupThread(void *);
M2C_UNK func_020503c0();
M2C_UNK OS_DisableScheduler();
M2C_UNK OS_EnableScheduler();
M2C_UNK OSi_UnlockAllMutex(void *);
M2C_UNK OS_Terminate();
extern M2C_UNK OSi_SystemCallbackInSwitchThread;
M2C_UNK OSi_InsertLinkToQueue(s32, void *);
s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);

void OSi_ExitThread_Destroy(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&OSi_SystemCallbackInSwitchThread, void ***, 8);
    OS_DisableScheduler();
    OSi_UnlockAllMutex(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        OSi_RemoveSpecifiedLinkFromQueue(temp_r0, temp_r4);
    }
    func_0204ff1c(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    OS_WakeupThread(temp_r4 + 0x9C);
    OS_EnableScheduler();
    func_020503c0();
    OS_Terminate();
}

void OS_SleepThread(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = OS_DisableInterrupts();
    temp_r5 = *M2C_FIELD(&OSi_SystemCallbackInSwitchThread, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        OSi_InsertLinkToQueue(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020503c0();
    OS_RestoreInterrupts(temp_r4);
}

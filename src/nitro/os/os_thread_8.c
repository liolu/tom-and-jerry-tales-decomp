#include "m2c.h"

M2C_UNK func_020503c0();
s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
M2C_UNK OSi_RescheduleThread();
s32 func_0200fa98();
M2C_UNK func_0200faac(s32);
struct Thread02001ff0 {
    char _0[0x64];
    int field_64;
    struct Thread02001ff0 *next;
};
struct Globals02001ff0 {
    char _0[0x2c];
    struct Thread02001ff0 *list;
};
extern struct Globals02001ff0 OSi_SystemCallbackInSwitchThread;

void OS_WakeupThreadDirect(void *arg0) {
    s32 temp_r4;

    temp_r4                      = OS_DisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020503c0();
    OS_RestoreInterrupts(temp_r4);
}

/* OSi_SelectThread from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_SelectThread.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void *OS_SelectThread(void) {
    struct Thread02001ff0 *t = OSi_SystemCallbackInSwitchThread.list;
    while (t != 0 && t->field_64 != 1) {
        t = t->next;
    }
    return t;
}

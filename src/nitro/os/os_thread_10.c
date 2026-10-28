/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int OS_DisableInterrupts();
extern void OS_RestoreInterrupts(int mask);
extern int OSi_SystemCallbackInSwitchThread[];
typedef unsigned int u32;
extern u32 OS_EnableInterrupts(void);
extern void OS_Halt(void);
extern void OSi_IdleThreadProc(void *arg);
extern int func_0200fa98();
extern void func_0200faac(int mask);

/* OS_SetIrqWorkField30 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetIrqWorkField30.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int OS_SetSwitchThreadCallback(int arg0) {
    int mask;
    int old;
    mask                                  = OS_DisableInterrupts();
    old                                   = OSi_SystemCallbackInSwitchThread[0xc];
    OSi_SystemCallbackInSwitchThread[0xc] = arg0;
    OS_RestoreInterrupts(mask);
    return old;
}

/* func_02078bc4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
void OSi_IdleThreadProc(void *arg) {
    OS_EnableInterrupts();
    while (1) {
        OS_Halt();
    }
}

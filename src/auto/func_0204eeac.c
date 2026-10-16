/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02077594 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_021b03fc[8];
extern void func_0204eeac(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 func_0204ef68(u32 mask);
extern UnkIrqCallbackInfo data_021b03fc[8];
void func_0204eeac(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_021b03fc[dmaNo].func   = func;
    data_021b03fc[dmaNo].arg    = arg;
    data_021b03fc[dmaNo].enable = func_0204ef68(mask) & mask;
}
u32 func_0204ef68(u32 mask);

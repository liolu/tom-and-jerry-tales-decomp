/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020775dc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_021b03fc[8];
extern void func_0204eef4(u32 timerNo, void (*func)(void *), void *arg);
extern u32 func_0204ef68(u32 mask);
extern UnkIrqCallbackInfo data_021b03fc[8];
void func_0204eef4(u32 timerNo, void (*func)(void *), void *arg) {
    u32 mask                          = 1 << (timerNo + 3);
    (data_021b03fc + 4)[timerNo].func = func;
    (data_021b03fc + 4)[timerNo].arg  = arg;
    func_0204ef68(mask);
    (data_021b03fc + 4)[timerNo].enable = 1;
}
u32 func_0204ef68(u32 mask);

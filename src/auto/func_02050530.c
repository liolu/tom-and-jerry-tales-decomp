/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
extern int func_020517f8();

extern void func_0205180c(int mask);

extern int data_021b0460[];

typedef unsigned int u32;

extern u32 OS_EnableInterrupts(void);

extern void OS_Halt(void);

extern void OSi_IdleThreadProc(void *arg);

/* OS_SetIrqWorkField30 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetIrqWorkField30.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_02050530(int arg0) {
    int mask;
    int old;
    mask               = func_020517f8();
    old                = data_021b0460[0xc];
    data_021b0460[0xc] = arg0;
    func_0205180c(mask);
    return old;
}

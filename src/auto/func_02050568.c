/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02050568 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_02050568.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_021b0460;
extern OSIntrMode func_020517f8(void);
extern OSIntrMode func_0205180c(OSIntrMode mode);
u32 func_02050568(void) {
    OSIntrMode interruptMode = func_020517f8();
    u32 count;

    if (data_021b0460.rescheduleCount < (u32) (0 - 1)) {
        count = data_021b0460.rescheduleCount++;
    }
    (void) func_0205180c(interruptMode);

    return count;
}

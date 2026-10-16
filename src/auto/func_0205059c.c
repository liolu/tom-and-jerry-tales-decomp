/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_021b0460;
extern u32 func_020517f8(void);
extern void func_0205180c(u32 state);

/* EnableScheduler_02002da0 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/EnableScheduler_02002da0.c (license: MIT), reused by tools/donor_match.py */
u32 func_0205059c(void) {
    u32 savedState = func_020517f8();
    u32 count      = 0;

    if (data_021b0460.rescheduleCount != 0) {
        count                         = data_021b0460.rescheduleCount;
        data_021b0460.rescheduleCount = count - 1;
    }
    func_0205180c(savedState);
    return count;
}

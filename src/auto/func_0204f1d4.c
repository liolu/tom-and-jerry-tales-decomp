/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020778bc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_spinlock.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 func_020517f8(void);
extern u32 func_0205180c(u32 irq_flag);
extern u32 func_02051824(void);
extern u32 func_02051838(u32 fiq_flag);
extern s32 func_02052194(u32 value, void *dst);
typedef struct UnkLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} UnkLockWord;
extern s32 func_0204f1d4(u16 lockID, UnkLockWord *lockp, void (*ctrlFunc)(void), BOOL disableFiq);
s32 func_0204f1d4(u16 lockID, UnkLockWord *lockp, void (*ctrlFunc)(void), BOOL disableFiq) {
    s32 lastLockFlag;
    u32 prev;

    if (disableFiq) {
        prev = func_02051824();
    } else {
        prev = func_020517f8();
    }

    lastLockFlag = func_02052194(lockID, &lockp->lockFlag);
    if (lastLockFlag == 0) {
        if (ctrlFunc) {
            ctrlFunc();
        }
        lockp->ownerID = lockID;
    }

    if (disableFiq) {
        func_02051838(prev);
    } else {
        func_0205180c(prev);
    }
    return lastLockFlag;
}

/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} OSLockWord;

typedef struct {
    u32 lockIdFlag[2];
    u32 pad[2];
    u32 sharedLock[10];
} OSLockArea;

extern void func_0204f140(int lockID, OSLockWord *lockp, void (*ctrl)(void));
extern void OS_UnlockByWord(int lockID, OSLockWord *lockp, void (*ctrl)(void));
extern void MIi_CpuClear32(u32 data, void *dest, u32 size);
extern void WaitByLoop(int count);

/* OS_InitLock: the SDK's `static BOOL isInitialized` is a function-local static (its own .bss word). */
void OS_InitLock(void) {
    static u32 isInitialized;
    OSLockWord *lockp;
    OSLockArea *area;
    volatile u16 *exmemcnt;
    s32 t;
    if (isInitialized != 0) {
        return;
    }
    isInitialized   = 1;
    lockp           = (OSLockWord *) 0x27ffff0;
    lockp->lockFlag = 0;
    func_0204f140(0x7e, (OSLockWord *) 0x27ffff0, 0);
    lockp = (OSLockWord *) 0x27ffff0;
    if (lockp->extension != 0) {
        t = 0x400;
        do {
            WaitByLoop(t);
        } while (lockp->extension != 0);
    }
    area                = (OSLockArea *) 0x27fffb0;
    area->lockIdFlag[0] = -1;
    area->lockIdFlag[1] = -1 << 16;
    MIi_CpuClear32(0, area->sharedLock, 0x28);
    exmemcnt = (volatile u16 *) 0x4000204;
    *exmemcnt |= 0x800;
    *exmemcnt |= 0x80;
    OS_UnlockByWord(0x7e, (OSLockWord *) 0x27ffff0, 0);
    func_0204f140(0x7f, (OSLockWord *) 0x27ffff0, 0);
}

// Donor: ctrl-cheeb-del_pokeheartgold lib/NitroSDK/src/ctrdg/ctrdg_module_info.c (#pragma optimization_level 2 +
// opt_propagation off; TnJ SDK lacks the 0x027FFF9B block). isInitialized = function-local static at 0x021b38e0 (needs the
// file to own that .bss word, symbol isInitialized$N local).
#include "m2c.h"

typedef struct {
    u16 subpInitialized;
    u16 lockID;
} CTRDGWork;
typedef struct {
    u32 a;
    u32 b;
} CTRDGLockByProc;
typedef struct {
    u32 a;
    u32 b;
} CTRDGRomCycle;
typedef struct {
    u16 moduleID;
    u8 exLsiID[3];
    u8 pad;
    u16 makerCode;
    u32 gameCode;
} CTRDGModuleInfo;
typedef struct {
    u8 pad0[0xac];
    u32 gameCode;
    u16 makerCode;
    u8 pad1[3];
    u8 exLsiID[3];
    u8 pad2[6];
    u16 moduleID;
} CTRDGHeader;

extern CTRDGWork CTRDGi_Work;
extern CTRDGHeader data_021b3900;
extern u8 data_021b3904[];

u32 func_0204ef3c(u32);
void CTRDGi_LockByProcessor(u16, CTRDGLockByProc *);
void CTRDGi_UnlockByProcessor(u16, CTRDGLockByProc *);
void CTRDGi_ChangeLatestAccessCycle(CTRDGRomCycle *);
void CTRDGi_RestoreAccessCycle(CTRDGRomCycle *);
void DC_InvalidateRange(void *, u32);
void func_02051b64(u32, const void *, void *, u32);
void MIi_CpuCopy32(const void *, void *, u32);
void DC_FlushAll(void);
void CTRDGi_SendtoPxi(u32);
void WaitByLoop(s32);

static inline s32 OS_EnableIrq(void) {
    u16 prep                    = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = 1;
    return prep;
}
static inline s32 OS_RestoreIrq(s32 enable) {
    u16 prep                    = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = (u16) enable;
    return prep;
}
static inline CTRDGModuleInfo *CTRDGi_GetModuleInfoAddr(void) {
    return (CTRDGModuleInfo *) 0x027FFC30;
}

void CTRDGi_InitModuleInfo(void) {
    CTRDGLockByProc lockInfo;
    CTRDGRomCycle romCycle;
    u32 lastIrqMask;
    s32 lastIme;
    CTRDGModuleInfo *info = CTRDGi_GetModuleInfoAddr();
    int priority;
    int i;
    static s32 isInitialized;

    if (isInitialized) {
        return;
    }
    {
        s32 initialized = 1;
        u16 postFlag    = *(volatile u16 *) 0x4000300;
        isInitialized   = initialized;
        if (!(postFlag & 1)) {
            return;
        }
    }
    lastIrqMask = func_0204ef3c(0x40000);
    lastIme     = OS_EnableIrq();
    CTRDGi_LockByProcessor(CTRDGi_Work.lockID, &lockInfo);
    priority = (*(volatile u16 *) 0x4000204 & 0x8000) >> 15;
    CTRDGi_ChangeLatestAccessCycle(&romCycle);
    *(volatile u16 *) 0x4000204 = (u16) (*(volatile u16 *) 0x4000204 & ~0x8000);
    DC_InvalidateRange((u8 *) &data_021b3900 + 0x80, 0x40);
    func_02051b64(1, (void *) (0x08000000 + 0x80), (void *) ((u32) &data_021b3900 + 0x80), 0x40);
    *(volatile u16 *) 0x4000204 = (u16) ((*(volatile u16 *) 0x4000204 & ~0x8000) | (priority << 15));
    CTRDGi_RestoreAccessCycle(&romCycle);
    CTRDGi_UnlockByProcessor(CTRDGi_Work.lockID, &lockInfo);
    {
        CTRDGHeader *header = &data_021b3900;
        info->moduleID      = header->moduleID;
        for (i = 0; i < 3; i++) {
            info->exLsiID[i] = header->exLsiID[i];
        }
        info->makerCode = header->makerCode;
        info->gameCode  = header->gameCode;
    }
    MIi_CpuCopy32((void *) (0xFFFF0000 + 0x20), data_021b3904, 0x9C);
    DC_FlushAll();
    CTRDGi_SendtoPxi((((u32) ((u8 *) &data_021b3900 - 0x02000000)) >> 5) << 6 | 1);
    while (CTRDGi_Work.subpInitialized != 1) {
        WaitByLoop(1);
    }
    (void) OS_RestoreIrq(lastIme);
    func_0204ef3c(lastIrqMask);
}

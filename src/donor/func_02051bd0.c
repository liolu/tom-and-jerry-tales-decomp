/* compiler: 2.0/sp1p5  */
/* MI_DmaFill32Async from projets/heroes-of-mana/src/auto/MI_DmaFill32Async.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern void func_02051d2c(s32 n);
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32 s);
extern void OSi_EnterDmaCallback(s32 n, void (*cb)(void *), void *arg);
extern void MIi_DmaSetParams_noInt(s32 n, u32 ctrl, u32 src, u32 cnt);
void func_02051bd0(s32 dmaNo, u32 dest, u32 data, u32 size, void (*callback)(void *), void *arg) {
    u32 state;
    if (size == 0) {
        if (callback != ((void *) 0)) {
            callback(arg);
        }
        return;
    }
    func_02051d2c(dmaNo);
    if (callback != ((void *) 0)) {
        OSi_EnterDmaCallback(dmaNo, callback, arg);
        state                                               = OS_DisableInterrupts();
        *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
        MIi_DmaSetParams_noInt(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0xC5000000);
        OS_RestoreInterrupts(state);
        return;
    }
    state                                               = OS_DisableInterrupts();
    *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
    MIi_DmaSetParams_noInt(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0x85000000);
    OS_RestoreInterrupts(state);
}

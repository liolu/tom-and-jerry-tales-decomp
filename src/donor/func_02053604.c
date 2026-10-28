/* compiler: 2.0/sp1p5  */
/* PXI_SetFifoRecvCallback from projets/blue-dragon-awakened-shadow/src/auto/PXI_SetFifoRecvCallback.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
extern void *FifoRecvCallbackTable[];
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32 state);
void func_02053604(u32 index, void (*callback)(void)) {
    u32 *words = (u32 *) 0x027FFC00;
    u32 state;

    state                        = OS_DisableInterrupts();
    FifoRecvCallbackTable[index] = callback;
    if (callback != ((void *) 0)) {
        words[0x388 / 4] |= (1 << index);
    } else {
        words[0x388 / 4] &= ~(1 << index);
    }
    OS_RestoreInterrupts(state);
}

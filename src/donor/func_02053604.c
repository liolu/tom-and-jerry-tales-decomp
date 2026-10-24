/* compiler: 2.0/sp1p5  */
/* PXI_SetFifoRecvCallback from projets/blue-dragon-awakened-shadow/src/auto/PXI_SetFifoRecvCallback.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
extern void *data_021b2348[];
extern u32 func_020517f8(void);
extern void func_0205180c(u32 state);
void func_02053604(u32 index, void (*callback)(void)) {
    u32 *words = (u32 *) 0x027FFC00;
    u32 state;

    state                = func_020517f8();
    data_021b2348[index] = callback;
    if (callback != ((void *) 0)) {
        words[0x388 / 4] |= (1 << index);
    } else {
        words[0x388 / 4] &= ~(1 << index);
    }
    func_0205180c(state);
}

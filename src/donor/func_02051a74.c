/* compiler: 2.0/sp1p5  */
/* MI_DmaFill32 from projets/heroes-of-mana/src/auto/MI_DmaFill32.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32 arg0);
extern void func_01ffa6c0(s32 arg0, u32 arg1, u32 arg2, u32 arg3);
void func_02051a74(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 state;
    volatile u32 *ctrl;

    if (param_4 == 0) {
        return;
    }
    ctrl = (volatile u32 *) (0x040000B0 + (((param_1 * 3) + 2) * 4));
    while (*ctrl & 0x80000000) {
    }
    state                                                 = OS_DisableInterrupts();
    *(volatile u32 *) (0x04000000 + (param_1 * 4) + 0xE0) = param_3;
    func_01ffa6c0(param_1, 0x040000E0 + (param_1 * 4), param_2, (param_4 >> 2) | 0x85000000);
    OS_RestoreInterrupts(state);
    while (*ctrl & 0x80000000) {
    }
}

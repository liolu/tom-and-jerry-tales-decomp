/* compiler: 2.0/sp1p5  */
/* OS_WaitIrq from projets/lego-star-wars-ii-the-original-trilogy/src/auto/OS_WaitIrq.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern char SDK_AUTOLOAD_DTCM_START[];
extern u8 OSi_IrqThreadQueue[];
extern s32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(s32 state);
extern void OS_SleepThread(void *queue);
void func_0204ec8c(s32 clear, u32 mask) {
    s32 state;
    u32 *flags;
    u8 *base;

    state = OS_DisableInterrupts();
    if (clear != 0) {
        base = SDK_AUTOLOAD_DTCM_START;
        *(u32 *) (base + 0x3ff8) &= ~mask;
    }
    OS_RestoreInterrupts(state);
    base = SDK_AUTOLOAD_DTCM_START;
    if ((mask & *(u32 *) (base + 0x3ff8)) == 0) {
        flags = (u32 *) (base + 0x3ff8);
        do {
            OS_SleepThread(OSi_IrqThreadQueue);
        } while ((mask & *flags) == 0);
    }
}

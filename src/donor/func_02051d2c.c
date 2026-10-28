/* compiler: 2.0/sp1p5  */
/* MI_WaitDma from projets/blue-dragon-awakened-shadow/src/auto/MI_WaitDma.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
void func_02051d2c(s32 ch) {
    u32 flags;
    volatile u32 *cnt;
    u32 *sad;
    flags = OS_DisableInterrupts();
    cnt   = (volatile u32 *) (0x4000000 + ((ch * 3 + 2) * 4 + 0xb0));
    while (*cnt & 0x80000000) {
    }
    if (ch == 0) {
        sad        = (u32 *) (0x4000000 + ch * 12 + 0xb0);
        *sad       = 0;
        *(sad + 1) = 0;
        *(sad + 2) = 0x81400001;
    }
    OS_RestoreInterrupts(flags);
}

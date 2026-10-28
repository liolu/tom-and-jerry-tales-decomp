/* compiler: 2.0/sp1p5  */
/* OS_UnlockMutex from projets/blue-dragon-awakened-shadow/src/auto/OS_UnlockMutex.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK OS_WakeupThread(void *);
extern M2C_UNK OSi_DequeueItem(s32, void *);
extern s32 OS_DisableInterrupts();
extern M2C_UNK OS_RestoreInterrupts(s32);
extern M2C_UNK OSi_ThreadInfo;
void func_02050964(void *arg0) {
    s32 temp = OS_DisableInterrupts();
    s32 d    = (*(s32 *) ((s8 *) (&OSi_ThreadInfo) + (4)));
    if ((*(s32 *) ((s8 *) (arg0) + (8))) == d) {
        s32 n                              = (*(s32 *) ((s8 *) (arg0) + (0xC))) - 1;
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = n;
        if (n == 0) {
            OSi_DequeueItem(d, arg0);
            (*(s32 *) ((s8 *) (arg0) + (8))) = 0;
            OS_WakeupThread(arg0);
        }
    }
    OS_RestoreInterrupts(temp);
}

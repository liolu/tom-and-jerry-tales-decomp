/* compiler: 2.0/sp1p5  */
/* FSi_ReleaseCommand from projets/blue-dragon-awakened-shadow/src/auto/FSi_ReleaseCommand.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK OS_WakeupThread(void *);
extern s32 OS_DisableInterrupts();
extern M2C_UNK OS_RestoreInterrupts(s32);
void func_02053814(void *arg0, s32 arg1) {
    s32 temp_r6;
    void **temp_r0;
    void *temp_r1;

    temp_r6 = OS_DisableInterrupts();
    temp_r1 = (*(void **) ((s8 *) (arg0) + (0)));
    temp_r0 = (*(void ***) ((s8 *) (arg0) + (4)));
    if (temp_r1 != ((void *) 0)) {
        (*(void ***) ((s8 *) (temp_r1) + (4))) = temp_r0;
    }
    if (temp_r0 != ((void *) 0)) {
        *temp_r0 = temp_r1;
    }
    (*(void **) ((s8 *) (arg0) + (0)))  = ((void *) 0);
    (*(void ***) ((s8 *) (arg0) + (4))) = ((void *) 0);
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) & ~0x4F);
    (*(s32 *) ((s8 *) (arg0) + (0x14))) = arg1;
    OS_WakeupThread(arg0 + 0x18);
    OS_RestoreInterrupts(temp_r6);
}

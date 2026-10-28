typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(M2C_UNK);
extern M2C_UNK OSiHeapInfo;

/* func_0201d290 from projets/livly-garden/src/auto/func_0201d290.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
s32 OS_SetCurrentHeap(s32 arg0, s32 arg1) {
    s32 *temp_r1;
    s32 temp_r0;
    s32 temp_r4;

    temp_r0  = OS_DisableInterrupts();
    temp_r1  = *((M2C_UNK *) ((s8 *) &OSiHeapInfo + (arg0 * 4)));
    temp_r4  = *temp_r1;
    *temp_r1 = arg1;
    OS_RestoreInterrupts(temp_r0);
    return temp_r4;
}


typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020517f8(void);
extern void func_0205180c(M2C_UNK);
extern M2C_UNK data_021b06e4;

/* func_0201d290 from projets/livly-garden/src/auto/func_0201d290.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
s32 func_02051170(s32 arg0, s32 arg1) {
    s32 *temp_r1;
    s32 temp_r0;
    s32 temp_r4;

    temp_r0  = func_020517f8();
    temp_r1  = *((M2C_UNK *) ((s8 *) &data_021b06e4 + (arg0 * 4)));
    temp_r4  = *temp_r1;
    *temp_r1 = arg1;
    func_0205180c(temp_r0);
    return temp_r4;
}

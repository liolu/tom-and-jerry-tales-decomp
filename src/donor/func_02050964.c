/* compiler: 2.0/sp1p5  */
/* OS_UnlockMutex from projets/blue-dragon-awakened-shadow/src/auto/OS_UnlockMutex.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02050308(void *);
extern M2C_UNK func_02050a94(s32, void *);
extern s32 func_020517f8();
extern M2C_UNK func_0205180c(s32);
extern M2C_UNK data_021b0484;
void func_02050964(void *arg0) {
    s32 temp = func_020517f8();
    s32 d    = (*(s32 *) ((s8 *) (&data_021b0484) + (4)));
    if ((*(s32 *) ((s8 *) (arg0) + (8))) == d) {
        s32 n                              = (*(s32 *) ((s8 *) (arg0) + (0xC))) - 1;
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = n;
        if (n == 0) {
            func_02050a94(d, arg0);
            (*(s32 *) ((s8 *) (arg0) + (8))) = 0;
            func_02050308(arg0);
        }
    }
    func_0205180c(temp);
}

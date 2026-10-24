/* compiler: 2.0/sp1p5  */
/* OS_TryLockMutex from projets/blue-dragon-awakened-shadow/src/auto/OS_TryLockMutex.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02050a70(s32, void *);
extern s32 func_020517f8();
extern M2C_UNK func_0205180c(s32);
extern M2C_UNK data_021b0484;
s32 func_020509fc(void *arg0) {
    s32 state;
    s32 r2;
    s32 d;
    s32 ret;

    state = func_020517f8();
    r2    = (*(s32 *) ((s8 *) (arg0) + (8)));
    d     = (*(s32 *) ((s8 *) (&data_021b0484) + (4)));
    if (r2 == 0) {
        (*(s32 *) ((s8 *) (arg0) + (8)))   = d;
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 1);
        func_02050a70(d, arg0);
        ret = 1;
    } else if (r2 != d) {
        ret = 0;
    } else {
        ret                                = 1;
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 1);
    }
    func_0205180c(state);
    return ret;
}

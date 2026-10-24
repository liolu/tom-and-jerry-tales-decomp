/* compiler: 2.0/sp1p5  */
/* func_02027c64 from projets/blue-dragon-awakened-shadow/src/auto/func_02027c64.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051f04(M2C_UNK, u32, s32);
u32 func_02046aec(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    u32 temp_r5;
    u32 diff;

    temp_r3 = (*(u32 *) ((s8 *) (arg0) + (4)));
    temp_r5 = ~(arg2 - 1) & (temp_r3 - arg1);
    if (temp_r5 < (u32) (*(u32 *) ((s8 *) (arg0) + (0)))) {
        return 0U;
    }
    diff = temp_r3 - temp_r5;
    if ((u8) (*(s32 *) ((s8 *) (arg0) + (-4))) & 1) {
        func_02051f04(0, temp_r5, diff);
    }
    (*(u32 *) ((s8 *) (arg0) + (4))) = temp_r5;
    return temp_r5;
}

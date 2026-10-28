/* compiler: 2.0/sp1p5  */

typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK MIi_CpuClear32(M2C_UNK, u32, s32);

/* func_02027c08 from projets/blue-dragon-awakened-shadow/src/auto/func_02027c08.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
s32 AllocFromHead(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r5;
    u32 temp_r3;
    u32 temp_r6;
    u32 diff;

    temp_r3 = (*(u32 *) ((s8 *) (arg0) + (0)));
    temp_r0 = arg2 - 1;
    temp_r5 = ~temp_r0 & (temp_r0 + temp_r3);
    temp_r6 = arg1 + temp_r5;
    if (temp_r6 > (u32) (*(u32 *) ((s8 *) (arg0) + (4)))) {
        return 0;
    }
    diff = temp_r6 - temp_r3;
    if ((u8) (*(s32 *) ((s8 *) (arg0) + (-4))) & 1) {
        MIi_CpuClear32(0, temp_r3, diff);
    }
    (*(u32 *) ((s8 *) (arg0) + (0))) = temp_r6;
    return temp_r5;
}

/* func_02027c64 from projets/blue-dragon-awakened-shadow/src/auto/func_02027c64.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
u32 AllocFromTail(void *arg0, s32 arg1, s32 arg2) {
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
        MIi_CpuClear32(0, temp_r5, diff);
    }
    (*(u32 *) ((s8 *) (arg0) + (4))) = temp_r5;
    return temp_r5;
}

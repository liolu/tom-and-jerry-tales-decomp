/* compiler: 2.0/sp1p5  */
/* FSi_ReadTable from projets/blue-dragon-awakened-shadow/src/auto/FSi_ReadTable.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020502b8(void *);
extern s32 func_020517f8();
extern M2C_UNK func_0205180c(s32);
s32 func_02053a50(void *arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    temp_r4                                = (*(void **) ((s8 *) (arg0) + (0)));
    (*(s32 *) ((s8 *) (temp_r4) + (0x1C))) = (s32) ((*(s32 *) ((s8 *) (temp_r4) + (0x1C))) | 0x200);
    var_r0                                 = (*(s32(**)(void *, M2C_UNK, s32, s32))((s8 *) (temp_r4) + (0x50)))(temp_r4, arg1,
                                                                                (*(s32 *) ((s8 *) (arg0) + (4))), arg2);
    switch (var_r0) {
        case 0:
        case 1:
            (*(s32 *) ((s8 *) (temp_r4) + (0x1C))) = (s32) ((*(s32 *) ((s8 *) (temp_r4) + (0x1C))) & ~0x200);
            break;
        case 6:
            temp_r5 = func_020517f8();
            if ((*(s32 *) ((s8 *) (temp_r4) + (0x1C))) & 0x200) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            if (var_r0_2 != 0) {
                do {
                    func_020502b8(temp_r4 + 0xC);
                    if ((*(s32 *) ((s8 *) (temp_r4) + (0x1C))) & 0x200) {
                        var_r0_3 = 1;
                    } else {
                        var_r0_3 = 0;
                    }
                } while (var_r0_3 != 0);
            }
            func_0205180c(temp_r5);
            var_r0 = (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (temp_r4) + (0x24)))) + (0x14)));
            break;
    }
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (4))) + arg2);
    return var_r0;
}

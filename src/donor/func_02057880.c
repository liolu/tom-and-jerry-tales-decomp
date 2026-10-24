/* compiler: 2.0/sp1p5  */
/* CARDi_RequestStreamCommandCore from projets/heroes-of-mana/src/auto/CARDi_RequestStreamCommandCore.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02000b58(s32);
extern M2C_UNK func_02050308(void *);
extern M2C_UNK func_02050370(void *);
extern M2C_UNK func_02050aec(void *, u32);
extern M2C_UNK func_02050b24(void *, u32);
extern M2C_UNK func_02050b48();
extern s32 func_020517f8();
extern M2C_UNK func_0205180c(s32);
extern M2C_UNK func_02052064(void *, void *, u32);
extern u32 func_02057b40();
extern s32 func_020583d4(void *, s32, s32);
void func_02057880(void *arg0) {
    s32 temp_r4_2;
    s32 temp_r5;
    M2C_UNK (*temp_r6_2)(s32);
    s32 temp_r10;
    u32 temp_r4;
    u32 var_r5;
    void *temp_r6;
    s32 temp_r7;
    u32 temp_r0;
    u32 var_r8;

    temp_r7  = (*(volatile s32 *) ((s8 *) (arg0) + (0x2C)));
    temp_r4  = (*(volatile u32 *) ((s8 *) (arg0) + (0x34)));
    temp_r10 = (*(volatile s32 *) ((s8 *) (arg0) + (0x30)));
    var_r5   = 0x100;
    func_02000b58(0x2000B80);
    if (temp_r7 == 0xB) {
        var_r5 = func_02057b40();
    }
    temp_r6 = arg0 + 0x120;
loop_3:
    var_r8 = (*(volatile u32 *) ((s8 *) (arg0) + (0x24)));
    if (var_r5 < var_r8) {
        var_r8 = var_r5;
    }
    (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0x14))) = var_r8;
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 0x40) {
        (*(volatile s32 *) ((s8 *) (arg0) + (0x114))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & ~0x40);
        (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0))) = 7;
    } else {
        switch (temp_r4) {
            default:
                break;
            case 0:
                func_02050aec(temp_r6, var_r8);
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0xC))) =
                    (void *) (*(void **) ((s8 *) (arg0) + (0x1C)));
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0x10))) = temp_r6;
                break;
            case 1:
            case 2:
                func_02052064((*(void **) ((s8 *) (arg0) + (0x1C))), temp_r6, var_r8);
                func_02050b24(temp_r6, var_r8);
                func_02050b48();
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0xC))) = temp_r6;
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0x10))) =
                    (void *) (*(void **) ((s8 *) (arg0) + (0x20)));
                break;
            case 3:
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0xC))) =
                    (void *) (*(void **) ((s8 *) (arg0) + (0x1C)));
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0x10))) =
                    (void *) (*(void **) ((s8 *) (arg0) + (0x20)));
                break;
        }
        if (func_020583d4(arg0, temp_r7, temp_r10) != 0) {
            if (temp_r4 == 2) {
                if (func_020583d4(arg0, 9, 1) != 0) {
                    goto block_23;
                }
            } else {
                if (temp_r4 == 0) {
                    func_02052064(temp_r6, (*(void **) ((s8 *) (arg0) + (0x20))), var_r8);
                }
            block_23:
                (*(void **) ((s8 *) (arg0) + (0x1C)))        = (void *) ((*(void **) ((s8 *) (arg0) + (0x1C))) + var_r8);
                (*(void **) ((s8 *) (arg0) + (0x20)))        = (void *) ((*(void **) ((s8 *) (arg0) + (0x20))) + var_r8);
                temp_r0                                      = (*(volatile u32 *) ((s8 *) (arg0) + (0x24))) - var_r8;
                (*(volatile u32 *) ((s8 *) (arg0) + (0x24))) = temp_r0;
                if (temp_r0 != 0) {
                    goto loop_3;
                }
            }
        }
    }
    temp_r6_2                                     = (*(M2C_UNK(**)(s32))((s8 *) (arg0) + (0x38)));
    temp_r5                                       = (*(volatile s32 *) ((s8 *) (arg0) + (0x3C)));
    temp_r4_2                                     = func_020517f8();
    (*(volatile s32 *) ((s8 *) (arg0) + (0x114))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & ~0x4C);
    func_02050308(arg0 + 0x10C);
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 0x10) {
        func_02050370(arg0 + 0x44);
    }
    func_0205180c(temp_r4_2);
    if (temp_r6_2 == ((void *) 0)) {
        return;
    }
    temp_r6_2(temp_r5);
}

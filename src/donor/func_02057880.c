/* compiler: 2.0/sp1p5  */
/* CARDi_RequestStreamCommandCore from projets/heroes-of-mana/src/auto/CARDi_RequestStreamCommandCore.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK OSi_ReferSymbol(s32);
extern M2C_UNK OS_WakeupThread(void *);
extern M2C_UNK OS_WakeupThreadDirect(void *);
extern M2C_UNK DC_InvalidateRange(void *, u32);
extern M2C_UNK DC_FlushRange(void *, u32);
extern M2C_UNK DC_WaitWriteBufferEmpty();
extern s32 OS_DisableInterrupts();
extern M2C_UNK OS_RestoreInterrupts(s32);
extern M2C_UNK MI_CpuCopy8(void *, void *, u32);
extern u32 CARD_GetBackupSectorSize();
extern s32 CARDi_Request(void *, s32, s32);
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
    OSi_ReferSymbol(0x2000B80);
    if (temp_r7 == 0xB) {
        var_r5 = CARD_GetBackupSectorSize();
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
                DC_InvalidateRange(temp_r6, var_r8);
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0xC))) =
                    (void *) (*(void **) ((s8 *) (arg0) + (0x1C)));
                (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (0x10))) = temp_r6;
                break;
            case 1:
            case 2:
                MI_CpuCopy8((*(void **) ((s8 *) (arg0) + (0x1C))), temp_r6, var_r8);
                DC_FlushRange(temp_r6, var_r8);
                DC_WaitWriteBufferEmpty();
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
        if (CARDi_Request(arg0, temp_r7, temp_r10) != 0) {
            if (temp_r4 == 2) {
                if (CARDi_Request(arg0, 9, 1) != 0) {
                    goto block_23;
                }
            } else {
                if (temp_r4 == 0) {
                    MI_CpuCopy8(temp_r6, (*(void **) ((s8 *) (arg0) + (0x20))), var_r8);
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
    temp_r4_2                                     = OS_DisableInterrupts();
    (*(volatile s32 *) ((s8 *) (arg0) + (0x114))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & ~0x4C);
    OS_WakeupThread(arg0 + 0x10C);
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x114))) & 0x10) {
        OS_WakeupThreadDirect(arg0 + 0x44);
    }
    OS_RestoreInterrupts(temp_r4_2);
    if (temp_r6_2 == ((void *) 0)) {
        return;
    }
    temp_r6_2(temp_r5);
}

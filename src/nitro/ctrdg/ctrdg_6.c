#include "m2c.h"

M2C_UNK OS_UnLockCartridge();
M2C_UNK OS_RestoreInterrupts(s32);
M2C_UNK WaitByLoop(M2C_UNK);
s32 func_02053674(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK OS_SetDPermissionsForProtectionRegion(M2C_UNK, M2C_UNK);
s32 OS_DisableInterrupts();
s32 CTRDG_IsOptionCartridge();
extern s32 CTRDGi_EnableFlag;

void CTRDGi_UnlockByProcessor(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        OS_UnLockCartridge(arg0);
    }
    OS_RestoreInterrupts(M2C_FIELD(arg1, s32 *, 4));
}

void CTRDGi_SendtoPxi(M2C_UNK arg0) {
    if (func_02053674(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_02053674(0xD, arg0, 0) != 0);
}

void CTRDG_Enable(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4           = OS_DisableInterrupts();
    CTRDGi_EnableFlag = arg0;
    if (CTRDG_IsOptionCartridge() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        OS_SetDPermissionsForProtectionRegion(0xF000, var_r1);
    }
    OS_RestoreInterrupts(temp_r4);
}

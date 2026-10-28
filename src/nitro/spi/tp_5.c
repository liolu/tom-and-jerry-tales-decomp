#include "m2c.h"

s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
s32 func_02053674(M2C_UNK, s32, M2C_UNK);
extern M2C_UNK data_021b2450;

void TP_RequestAutoSamplingStopAsync(void) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = OS_DisableInterrupts();
    if (func_02053674(6, 0x03000200, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        OS_RestoreInterrupts(temp_r4);
        M2C_FIELD(&data_021b2450, u16 *, 0x38) = (u16) (M2C_FIELD(&data_021b2450, u16 *, 0x38) | 4);
        if (M2C_FIELD(&data_021b2450, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4) == NULL) {
            return;
        }
        M2C_FIELD(&data_021b2450, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4)(2, 4, 0);
        return;
    }
    M2C_FIELD(&data_021b2450, u16 *, 0x3A) = (u16) (M2C_FIELD(&data_021b2450, u16 *, 0x3A) | 4);
    M2C_FIELD(&data_021b2450, u16 *, 0x38) = (u16) (M2C_FIELD(&data_021b2450, u16 *, 0x38) & ~4);
    OS_RestoreInterrupts(temp_r4);
}

void TP_RequestSetStabilityAsync(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = OS_DisableInterrupts();
    if (func_02053674(6, arg1 | 0x03000300, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        OS_RestoreInterrupts(temp_r4);
        M2C_FIELD(&data_021b2450, u16 *, 0x38) = (u16) (M2C_FIELD(&data_021b2450, u16 *, 0x38) | 8);
        if (M2C_FIELD(&data_021b2450, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4) == NULL) {
            return;
        }
        M2C_FIELD(&data_021b2450, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4)(3, 4, 0);
        return;
    }
    M2C_FIELD(&data_021b2450, u16 *, 0x3A) = (u16) (M2C_FIELD(&data_021b2450, u16 *, 0x3A) | 8);
    M2C_FIELD(&data_021b2450, u16 *, 0x38) = (u16) (M2C_FIELD(&data_021b2450, u16 *, 0x38) & ~8);
    OS_RestoreInterrupts(temp_r4);
}

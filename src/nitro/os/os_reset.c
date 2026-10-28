#include "m2c.h"

M2C_UNK PXI_Init();
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);
s32 func_02053650(M2C_UNK, M2C_UNK);
extern M2C_UNK OSi_IsResetOccurred;
extern M2C_UNK OSi_CommonCallback;

void OS_InitReset(void) {
    if (M2C_FIELD(&OSi_IsResetOccurred, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&OSi_IsResetOccurred, u16 *, 2) = 1U;
    PXI_Init();
    do {

    } while (func_02053650(0xC, 1) == 0);
    func_02053604(0xC, &OSi_CommonCallback);
}

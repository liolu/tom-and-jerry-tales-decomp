#include "m2c.h"

M2C_UNK func_0204ee24(M2C_UNK, M2C_UNK *);
M2C_UNK func_0204ef68(M2C_UNK);
M2C_UNK OSi_SetTimerReserved(M2C_UNK);
extern M2C_UNK OSi_UseTick;
extern M2C_UNK func_02051624;

void OS_InitTick(void) {
    if (M2C_FIELD(&OSi_UseTick, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&OSi_UseTick, u16 *, 0) = 1U;
    OSi_SetTimerReserved(0);
    M2C_FIELD(&OSi_UseTick, s32 *, 8)         = 0;
    M2C_FIELD(&OSi_UseTick, s32 *, 0xC)       = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_0204ee24(8, &func_02051624);
    func_0204ef68(8);
    M2C_FIELD(&OSi_UseTick, s32 *, 4) = 0;
}

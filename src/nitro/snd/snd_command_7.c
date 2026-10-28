#include "m2c.h"

M2C_UNK OS_SpinWait(M2C_UNK);
s32 IsCommandAvailable();
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);
s32 func_02053650(M2C_UNK, M2C_UNK);
extern M2C_UNK PxiFifoCallback;
s32 func_02053674(M2C_UNK, M2C_UNK, M2C_UNK);

void InitPXI(void) {
    func_02053604(7, &PxiFifoCallback);
    if (IsCommandAvailable() == 0) {
        return;
    }
    if (func_02053650(7, 1) != 0) {
        return;
    }
    do {
        OS_SpinWait(0x64);
    } while (func_02053650(7, 1) == 0);
}

void RequestCommandProc(void) {
    do {

    } while (func_02053674(7, 0, 0) < 0);
}

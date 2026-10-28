#include "m2c.h"

M2C_UNK OS_Terminate();
M2C_UNK CTRDGi_SendtoPxi(M2C_UNK);
extern M2C_UNK data_021b38e0;

void CTRDG_TerminateForPulledOut(void) {
    CTRDGi_SendtoPxi(2);
    OS_Terminate();
}

void CTRDGi_CallbackForSetPhi(void) {
    M2C_FIELD(&data_021b38e0, s32 *, 4) = 0;
}

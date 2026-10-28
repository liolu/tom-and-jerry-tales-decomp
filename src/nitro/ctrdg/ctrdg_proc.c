#include "m2c.h"

M2C_UNK PXI_Init();
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);
s32 func_02053650(M2C_UNK, M2C_UNK);
M2C_UNK CTRDGi_InitCommon();
M2C_UNK CTRDG_Enable(M2C_UNK);
M2C_UNK CTRDGi_InitModuleInfo();
M2C_UNK CTRDGi_InitTaskThread(M2C_UNK *);
extern M2C_UNK data_021b38e0;
extern M2C_UNK data_021b39c0;
extern M2C_UNK CTRDGi_CallbackForInitModuleInfo;
extern M2C_UNK CTRDGi_PulledOutCallback;
extern M2C_UNK CTRDGi_CallbackForSetPhi;

void CTRDG_Init(void) {
    if (M2C_FIELD(&data_021b38e0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_021b38e0, s32 *, 8) = 1;
    CTRDGi_InitCommon();
    M2C_FIELD(&data_021b38e0, s32 *, 0xC) = 0;
    PXI_Init();
    do {

    } while (func_02053650(0xD, 1) == 0);
    func_02053604(0xD, &CTRDGi_CallbackForInitModuleInfo);
    CTRDGi_InitModuleInfo();
    func_02053604(0xD, NULL);
    func_02053604(0xD, &CTRDGi_PulledOutCallback);
    M2C_FIELD(&data_021b38e0, s32 *, 0x18) = 0;
    CTRDGi_InitTaskThread(&data_021b39c0);
    func_02053604(0x11, &CTRDGi_CallbackForSetPhi);
    CTRDG_Enable(0);
}

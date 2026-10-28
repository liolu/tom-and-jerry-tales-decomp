#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);
s16 func_0204f32c();
extern M2C_UNK CTRDGi_EnableFlag;
extern M2C_UNK CTRDGi_Work;
s32 CTRDGi_IsAgbCartridgeAtInit();
s32 CTRDG_IsExisting();

void CTRDGi_InitCommon(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &CTRDGi_Work, 0x05000001);
    M2C_FIELD(&CTRDGi_EnableFlag, s16 *, 6) = func_0204f32c();
}

s32 CTRDG_IsOptionCartridge(void) {
    if ((CTRDG_IsExisting() != 0) && (CTRDGi_IsAgbCartridgeAtInit() == 0)) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

M2C_UNK MIi_CpuCopy16(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK data_02087410;

void func_0201c88c(void) {
    u8 sp0[16];
    u16 temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_02087410, void **, 0x30), u16 *, 0x1DE);
    MIi_CpuCopy16(M2C_FIELD(&data_02087410, void **, 0x30) + 0x1CE, sp0, 0x10);
    MIi_CpuCopy16(sp0, M2C_FIELD(&data_02087410, void **, 0x30) + 0x1D0, 0x10);
    M2C_FIELD(M2C_FIELD(&data_02087410, void **, 0x30), u16 *, 0x1CE) = temp_r4;
}

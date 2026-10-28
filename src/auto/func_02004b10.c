#include "m2c.h"

M2C_UNK func_02012e28(void *);

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02004b10(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r3;

    func_02012e28(M2C_FIELD(arg0, void **, 4));
    temp_r0                          = M2C_FIELD(arg0, void **, 4);
    temp_r3                          = arg0 + 0xAC;
    temp_r0_2                        = temp_r0 + 0xC;
    *(M2C_S12 *) ((s8 *) arg0 + 172) = *(M2C_S12 *) ((s8 *) temp_r0 + 12);

    M2C_FIELD(arg0, u16 *, 0xEA) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x18);
}

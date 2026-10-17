#include "m2c.h"

s32 func_02031610(s32);                             /* extern */
extern M2C_UNK data_0208876c;
extern M2C_UNK data_0208a360;

void func_02032fdc(s32 arg0) {
    s32 temp_r3;
    s32 temp_r4;
    void *temp_r5;

    temp_r3 = (arg0 * 0x68) + (s32) &data_0208a360;
    if (M2C_FIELD(temp_r3, s32 *, 8) == 1) {
        return;
    }
    temp_r4 = (M2C_FIELD(temp_r3, u16 *, 4) * 0x2C) + (s32) &data_0208876c;
    temp_r5 = M2C_FIELD(temp_r3, void **, 0x18);
    if (temp_r5 == NULL) {
        return;
    }
    M2C_FIELD(temp_r4, s32 *, 4) =
        (s32) (M2C_FIELD(temp_r4, s32 *, 4) -
               ((s32) (((s32) M2C_FIELD(temp_r5, s32 *, 4) >> 0xC) *
                       ((8 << ((s32) (M2C_FIELD(temp_r4, s32 *, 0) << 8) >> 0x18)) * func_02031610(temp_r4))) >>
                4));
}

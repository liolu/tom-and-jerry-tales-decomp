#include "m2c.h"

M2C_UNK func_0203fa64(s32);                         /* extern */
M2C_UNK func_020499ac(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02049a18(M2C_UNK *);                       /* extern */
s32 func_02049a50(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0206db50;
extern M2C_UNK data_020ba3fc;

void func_0203fc88(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02049a18(&data_020ba3fc);
    temp_r0 = func_02049a50(&data_020ba3fc);
    if (temp_r0 == 0) {
        return;
    }
    if (temp_r4 < (s32) (temp_r0 - 1)) {
        return;
    }
    func_020499ac(&data_020ba3fc, 0);
    func_0203fa64(M2C_FIELD(&data_0206db50, s32 *, 0x28));
}

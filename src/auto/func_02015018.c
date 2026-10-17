#include "m2c.h"

M2C_UNK func_02014ff0(s32);                         /* extern */
extern M2C_UNK data_0208705c;
extern M2C_UNK data_0208706c;

void func_02015018(void) {
    s16 var_r5;
    s32 var_r4;
    void *temp_r6;

    var_r5  = 0;
    var_r4  = 0;
    temp_r6 = (M2C_UNK *) ((s8 *) &data_0208706c + (M2C_FIELD(&data_0208705c, u8 *, 1) * 8));
loop_1:
    if (var_r5 == M2C_FIELD(temp_r6, s16 *, 0)) {
        return;
    }
    func_02014ff0(M2C_FIELD(temp_r6, s32 *, 4) + var_r4);
    var_r5 += 1;
    var_r4 += 0x6C;
    if ((s32) var_r5 >= 0x4B) {
        return;
    }
    goto loop_1;
}

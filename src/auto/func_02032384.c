#include "m2c.h"

M2C_UNK func_02032464();
M2C_UNK OS_Terminate();

void func_02032384(void *arg0) {
    u16 var_r6;
    void *temp_r1;

    if (arg0 == NULL) {
        OS_Terminate();
    }
    var_r6 = 0;
    do {
        temp_r1 = arg0 + (var_r6 * 4);
        if (M2C_FIELD(temp_r1, s32 *, 8) != 0) {
            M2C_FIELD(temp_r1, s32 *, 8) = 0;
            func_02032464();
        }
        var_r6 += 1;
    } while ((u32) var_r6 < 4U);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0xFFF000FF);
}

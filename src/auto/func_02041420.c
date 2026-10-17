#include "m2c.h"

s32 (*func_02041384())(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */

s32 func_02041420(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 (*temp_r0)(M2C_UNK, M2C_UNK, M2C_UNK);

    temp_r0 = func_02041384();
    if (temp_r0 == NULL) {
        return 0;
    }
    return temp_r0(arg1, arg2, arg3);
}

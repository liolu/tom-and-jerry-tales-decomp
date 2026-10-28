#include "m2c.h"

void *func_02015fb4();
M2C_UNK OS_Terminate();

s32 func_02016018(void) {
    void *temp_r0;

    temp_r0 = func_02015fb4();
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 0x54);
    }
    OS_Terminate();
    return 0;
}

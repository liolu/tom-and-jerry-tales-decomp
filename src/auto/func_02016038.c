#include "m2c.h"

void *func_02015fb4();
M2C_UNK OS_Terminate();

u8 func_02016038(void) {
    void *temp_r0;

    temp_r0 = func_02015fb4();
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, u8 *, 0x2E);
    }
    OS_Terminate();
    return 0U;
}

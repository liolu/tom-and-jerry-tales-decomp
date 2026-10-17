#include "m2c.h"

void *func_02048464();                              /* extern */

u8 func_0203fcd8(void) {
    void *temp_r0;

    temp_r0 = func_02048464();
    if (temp_r0 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r0, u8 *, 6);
}

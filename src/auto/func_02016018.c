#include "m2c.h"

void *func_02015fb4();                              /* extern */
M2C_UNK func_02051a48();                            /* extern */

s32 func_02016018(void) {
    void *temp_r0;

    temp_r0 = func_02015fb4();
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 0x54);
    }
    func_02051a48();
    return 0;
}

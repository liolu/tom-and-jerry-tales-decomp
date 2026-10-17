#include "m2c.h"

M2C_UNK func_02052468(u8);                          /* extern */

void func_02047150(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    func_02052468(M2C_FIELD(temp_r0, u8 *, 0x3C));
}

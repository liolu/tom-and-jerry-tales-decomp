#include "m2c.h"

M2C_UNK func_02052538(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02052af0(M2C_UNK);                     /* extern */
M2C_UNK func_02052c50(s32);                         /* extern */
s32 func_02052cbc();                                /* extern */

void func_02047d28(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02052538(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02052cbc();
    func_02052af0(1);
    func_02052c50(temp_r4);
}

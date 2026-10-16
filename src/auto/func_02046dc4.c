#include "m2c.h"

M2C_UNK func_02052538(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02052af0(M2C_UNK);                     /* extern */
M2C_UNK func_02052c50(s32);                         /* extern */
s32 func_02052cbc();                                /* extern */
M2C_UNK func_02047f74();                            /* extern */

void func_02046dc4(void) {
    s32 temp_r4;

    func_02047f74();
    func_02052538(0, 0, 0, 0);
    temp_r4 = func_02052cbc();
    func_02052af0(1);
    func_02052c50(temp_r4);
}

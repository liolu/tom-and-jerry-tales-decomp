#include "m2c.h"

M2C_UNK func_02052538(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02052af0(M2C_UNK);                     /* extern */
M2C_UNK func_02052c50(s32);                         /* extern */
s32 func_02052cbc();                                /* extern */
M2C_UNK func_02056a80(void *);                      /* extern */
M2C_UNK func_02056a98(void *);                      /* extern */
M2C_UNK func_02047c38(void *);                      /* extern */

void func_02047bc4(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02052538(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02056a80(arg0 + 8);
        func_02056a98(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_02052cbc();
        func_02052af0(1);
        func_02052c50(temp_r5);
    }
    func_02047c38(arg0);
}

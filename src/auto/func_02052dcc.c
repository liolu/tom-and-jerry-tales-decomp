#include "m2c.h"

s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */
M2C_UNK func_02052f80(M2C_UNK);                     /* extern */

void func_02052dcc(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020517f8();
    func_02052f80(arg1);
    func_0205180c(temp_r4);
}

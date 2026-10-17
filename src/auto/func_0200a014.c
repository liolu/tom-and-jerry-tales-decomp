#include "m2c.h"

s32 *func_0203f600();                               /* extern */
M2C_UNK func_020489ac(s32);                         /* extern */
M2C_UNK func_02048a70(M2C_UNK, s32);                /* extern */

void func_0200a014(M2C_UNK arg0) {
    s32 *temp_r0;

    temp_r0 = func_0203f600();
    func_020489ac(*temp_r0);
    func_02048a70(arg0, *temp_r0);
}

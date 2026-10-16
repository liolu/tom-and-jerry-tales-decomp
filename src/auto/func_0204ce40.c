#include "m2c.h"

M2C_UNK func_0204c304(u16);                         /* extern */
extern u16 data_021b03a4;

u16 func_0204ce40(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_021b03a4 |= temp_r4;
    func_0204c304(temp_r4);
    return temp_r4;
}

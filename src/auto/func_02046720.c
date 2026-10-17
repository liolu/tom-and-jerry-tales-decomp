#include "m2c.h"

M2C_UNK func_02063920();                            /* extern */
extern M2C_UNK data_0206dd64;

void *func_02046720(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0206dd64;
    M2C_FIELD(arg0, s32 *, 0xA04)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA08)  = 0;
    func_02063920(arg0);
    return arg0;
}

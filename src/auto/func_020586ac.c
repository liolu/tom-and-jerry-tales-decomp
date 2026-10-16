#include "m2c.h"

s32 func_02050788(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_0205082c(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_02050aec(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_021b2e28;

u16 *func_020586ac(void) {
    u16 *sp0;

    if (func_02050788(&data_021b2e28, &sp0, 0) == 0) {
        return NULL;
    }
    func_02050aec(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_0205082c(&data_021b2e28, sp0, 1);
    return NULL;
}

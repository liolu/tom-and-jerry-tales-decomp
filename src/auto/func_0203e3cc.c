#include "m2c.h"

s32 func_0203d080(s32);                             /* extern */
s32 func_0203df68(s32);                             /* extern */

s32 func_0203e3cc(void *arg0) {
    if (func_0203df68(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x20);
    }
    return func_0203d080(M2C_FIELD(arg0, s32 *, 0));
}

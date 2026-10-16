#include "m2c.h"

M2C_UNK func_02050b08(s32, M2C_UNK);                /* extern */
M2C_UNK func_02052824();                            /* extern */
M2C_UNK func_02052838();                            /* extern */

void func_02053488(s32 arg0, s32 arg1, s32 arg2) {
    func_02052824();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02050b08(arg0 + 0x3C + (arg1 * 4), 4);
    func_02052838();
}

#include "m2c.h"

M2C_UNK func_02050aec(s32 *, M2C_UNK);              /* extern */
extern s32 *data_021b2340;

s32 func_02052ff0(void) {
    func_02050aec(data_021b2340, 4);
    return *data_021b2340;
}

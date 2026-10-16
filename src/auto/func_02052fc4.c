#include "m2c.h"

M2C_UNK func_02050aec(void *, M2C_UNK);             /* extern */
extern void *data_021b2340;

s32 func_02052fc4(void) {
    func_02050aec(data_021b2340 + 4, 4);
    return M2C_FIELD(data_021b2340, s32 *, 4);
}

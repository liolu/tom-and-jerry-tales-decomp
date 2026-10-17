#include "m2c.h"

M2C_UNK func_020499ac(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020ba3e0;
extern M2C_UNK data_020ba3e8;
extern M2C_UNK data_020ba3ec;
extern M2C_UNK data_020ba3f0;
extern M2C_UNK data_020ba3fc;

void func_0203f948(void) {
    if (M2C_FIELD(&data_020ba3e0, s32 *, 4) == 0) {
        return;
    }
    func_020499ac(&data_020ba3fc, 0);
    func_020499ac(&data_020ba3e8, 0);
    func_020499ac(&data_020ba3ec, 0);
    func_020499ac(&data_020ba3f0, 0);
}

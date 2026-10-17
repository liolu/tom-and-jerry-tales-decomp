#include "m2c.h"

extern M2C_UNK data_0206cf08;
extern M2C_UNK data_020884d4;

u16 func_02030878(void) {
    return *((u16 *) ((s8 *) &data_020884d4 + (M2C_FIELD(&data_0206cf08, u16 *, 4) * 8)));
}

#include "m2c.h"

extern M2C_UNK wmInitialized;

s32 WMi_GetSystemWork(void) {
    return M2C_FIELD(&wmInitialized, s32 *, 4);
}

#include "m2c.h"

extern M2C_UNK gGXState;

u16 GX_GetBankForTex(void) {
    return M2C_FIELD(&gGXState, u16 *, 8);
}

u16 GX_GetBankForTexPltt(void) {
    return M2C_FIELD(&gGXState, u16 *, 0xA);
}

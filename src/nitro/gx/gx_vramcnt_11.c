#include "m2c.h"

M2C_UNK GX_GetSizeOfX_(u16);
extern M2C_UNK gGXState;

void GX_GetSizeOfOBJ(void) {
    GX_GetSizeOfX_(M2C_FIELD(&gGXState, u16 *, 4));
}

void GX_GetSizeOfSubOBJ(void) {
    GX_GetSizeOfX_(M2C_FIELD(&gGXState, u16 *, 0x14));
}

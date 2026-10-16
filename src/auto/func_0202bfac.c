#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020880ec;

s32 func_0202bfac(void) {
    return (s32) M2C_FIELD(&data_020880ec, u8 *, 3);
}

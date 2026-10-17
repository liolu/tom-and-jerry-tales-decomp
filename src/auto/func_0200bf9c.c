#include "m2c.h"

extern s32 data_02086d7c;

void func_0200bf9c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 2) {
        data_02086d7c = M2C_FIELD(arg0, s32 *, 4);
    }
}

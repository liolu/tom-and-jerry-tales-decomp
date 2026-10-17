#include "m2c.h"

void func_02036380(void *arg0) {
    s32 var_r3;
    void *var_r0;

    var_r0 = arg0;
    var_r3 = 0;
    do {
        var_r3 += 1;
        M2C_FIELD(var_r0, s32 *, 0x50) = 0;
        var_r0 += 0xA14;
    } while (var_r3 < 3);
}

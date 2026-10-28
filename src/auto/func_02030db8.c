#include "m2c.h"

M2C_UNK func_02030ecc(void *);
s32 OS_AllocFromHeap(M2C_UNK, M2C_UNK, s32);
M2C_UNK OS_Terminate();

void func_02030db8(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 & 3) {
        do {
            var_r4 += 1;
        } while (var_r4 & 3);
    }
    temp_r0                   = OS_AllocFromHeap(0, -1, var_r4);
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (temp_r0 == 0) {
        OS_Terminate();
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((M2C_FIELD(arg0, s32 *, 0) + var_r4) - 1);
    func_02030ecc(arg0);
}

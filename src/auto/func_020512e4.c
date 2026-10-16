#include "engine.h"
#include "m2c.h"

M2C_UNK func_020517f8(void);
void func_0205180c(M2C_UNK);

extern M2C_UNK data_021b06e4;

s32 func_020512e4(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r1_2;
    s32 var_r5;
    u32 temp_r1_3;
    u32 var_r4;
    void *temp_r1;
    void *var_r2;

    var_r5  = arg1;
    var_r4  = 0;
    temp_r0 = func_020517f8();
    temp_r1 = *((M2C_UNK *) ((s8 *) &data_021b06e4 + (arg0 * 4)));
    if (var_r5 < 0) {
        var_r5 = M2C_FIELD(temp_r1, s32 *, 0);
    }
    var_r2 = M2C_FIELD(((var_r5 * 0xC) + M2C_FIELD(temp_r1, s32 *, 0x10)), void **, 4);
    if (var_r2 != NULL) {
        do {
            temp_r1_2 = M2C_FIELD(var_r2, s32 *, 8);
            var_r2    = M2C_FIELD(var_r2, void **, 4);
            temp_r1_3 = temp_r1_2 - 0x20;
            if (temp_r1_3 > var_r4) {
                var_r4 = temp_r1_3;
            }
        } while (var_r2 != NULL);
    }
    func_0205180c(temp_r0);
    return (s32) var_r4;
}

#include "m2c.h"

M2C_UNK func_02056048();
s32 PM_SetBackLightAsync(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *);
extern M2C_UNK PMi_DummyCallback;

s32 PM_SetBackLight(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = PM_SetBackLightAsync(arg0, arg1, &PMi_DummyCallback, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02056048();
    return sp0;
}

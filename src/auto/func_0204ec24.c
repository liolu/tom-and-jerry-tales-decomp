#include "engine.h"
#include "m2c.h"

void func_0204cb20(M2C_UNK);
void func_02051d2c(M2C_UNK);

extern s32 data_0206de68;
extern M2C_UNK data_021b03dc;

void func_0204ec24(void) {
    if (data_0206de68 != -1) {
        func_02051d2c(data_0206de68);
    }
    func_0204cb20(M2C_FIELD(&data_021b03dc, s32 *, 0xC));
    M2C_FIELD(&data_021b03dc, s32 *, 0xC) = 0;
    M2C_FIELD(&data_021b03dc, s32 *, 8)   = 0;
}

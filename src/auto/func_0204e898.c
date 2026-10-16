#include "engine.h"
#include "m2c.h"

void func_0204c79c(M2C_UNK);
void func_02051d2c(M2C_UNK);

extern s32 data_0206de68;
extern M2C_UNK data_021b03c0;

void func_0204e898(void) {
    if (data_0206de68 != -1) {
        func_02051d2c(data_0206de68);
    }
    func_0204c79c(M2C_FIELD(&data_021b03c0, s32 *, 0x14));
    M2C_FIELD(&data_021b03c0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021b03c0, s32 *, 0x10) = 0;
    M2C_FIELD(&data_021b03c0, s32 *, 0xC)  = 0;
}

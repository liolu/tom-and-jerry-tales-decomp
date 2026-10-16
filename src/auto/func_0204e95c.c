#include "engine.h"
#include "m2c.h"

void func_0204cd40(M2C_UNK);
void func_02051d2c(M2C_UNK);

extern s32 data_0206de68;
extern s32 data_021b03c0;

void func_0204e95c(void) {
    if (data_0206de68 != -1) {
        func_02051d2c(data_0206de68);
    }
    func_0204cd40(data_021b03c0);
    data_021b03c0 = 0;
}

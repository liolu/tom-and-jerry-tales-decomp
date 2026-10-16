#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048678(M2C_UNK);
void func_0204ada4(M2C_UNK, M2C_UNK);
void func_0204ae18(M2C_UNK);
void func_0204ae28(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204ae60(M2C_UNK);
void func_0204ae70(M2C_UNK, M2C_UNK);
void func_0204ae98(void);
void func_0204ae9c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204aeb8(void);

void func_0204ad24(s32 arg0, s32 arg1) {
    if (func_02048678(arg1) == 0) {
        M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = func_0204ada4;
        M2C_FIELD(arg0, void (**)(s32), 0x164)                = func_0204ae18;
        M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_0204ae28;
        M2C_FIELD(arg0, void (**)(s32), 0x16C)                = func_0204ae60;
        return;
    }
    M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = func_0204ae70;
    M2C_FIELD(arg0, void (**)(s32), 0x164)                = (void (*)(s32)) func_0204ae98;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = func_0204ae9c;
    M2C_FIELD(arg0, void (**)(s32), 0x16C)                = (void (*)(s32)) func_0204aeb8;
}

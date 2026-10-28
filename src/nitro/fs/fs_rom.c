#include "m2c.h"

M2C_UNK func_02054bb0(M2C_UNK, M2C_UNK);
s32 CARD_IsPulledOut();

void FSi_OnRomReadDone(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (CARD_IsPulledOut() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_02054bb0(arg0, var_r1);
}

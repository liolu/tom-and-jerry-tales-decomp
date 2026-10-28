#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);
s32 func_02053674(M2C_UNK, M2C_UNK, M2C_UNK);

void Card_PushRemovalTagWord(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02053674(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_02053674(0xE, arg0, 0) != 0);
}

#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_0204f1d4(); /* extern */

void func_0204f0f4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_0204f1d4() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_0204f1d4(arg0, arg1, arg2, arg3) > 0);
}

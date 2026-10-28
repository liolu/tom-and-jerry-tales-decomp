#include "m2c.h"

M2C_UNK WaitByLoop();
s32 OSi_DoTryLockByWord();

void func_0204f0f4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (OSi_DoTryLockByWord() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (OSi_DoTryLockByWord(arg0, arg1, arg2, arg3) > 0);
}

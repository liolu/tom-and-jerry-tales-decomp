#include "m2c.h"

M2C_UNK func_02000e94();
M2C_UNK OS_Terminate();
M2C_UNK PM_ForceToPowerOff();
M2C_UNK Card_HaltAfterRemoval();

void func_020011f4(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        PM_ForceToPowerOff();
    }
    func_02000e94();
    Card_HaltAfterRemoval();
    OS_Terminate();
}

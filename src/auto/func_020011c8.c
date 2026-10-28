#include "m2c.h"

M2C_UNK func_02000e94();
M2C_UNK PM_ForceToPowerOff();

s32 func_020011c8(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        PM_ForceToPowerOff();
    }
    func_02000e94();
    return 1;
}

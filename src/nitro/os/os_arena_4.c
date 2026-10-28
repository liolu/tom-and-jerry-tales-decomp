#include "m2c.h"

s32 OS_GetConsoleType();
extern M2C_UNK OSi_Initialized;

s32 OS_GetInitArenaLo(u32 arg0) {
    switch (arg0) {
        case 0:
            return 0x21B4440;
        case 2:
            if ((M2C_FIELD(&OSi_Initialized, s32 *, 4) == 0) || ((OS_GetConsoleType() & 3) == 1)) {
                return 0;
            }
            return 0x023E0000;
        case 3:
            return 0x1FFA7C0;
        case 4:
            return 0x27E00A0;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
        case 1:
            return 0;
    }
}

void OS_SetArenaHi(s32 arg0, s32 arg1) {
    ((s32 *) (0x027FF000 + 0xDC4))[arg0] = arg1;
}

void OS_SetArenaLo(s32 arg0, s32 arg1) {
    ((s32 *) (0x027FF000 + 0xDA0))[arg0] = arg1;
}

void OS_EnableMainExArena(void) {
    M2C_FIELD(&OSi_Initialized, s32 *, 4) = 1;
}

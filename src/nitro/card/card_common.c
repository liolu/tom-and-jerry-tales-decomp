#include "m2c.h"

extern s32 data_021b2520;
M2C_UNK OS_Terminate();
s32 CARD_IsEnabled();

s32 CARD_IsEnabled(void) {
    return data_021b2520;
}

void CARD_CheckEnabled(void) {
    if (CARD_IsEnabled() != 0) {
        return;
    }
    OS_Terminate();
}

void CARD_Enable(s32 arg0) {
    data_021b2520 = arg0;
}

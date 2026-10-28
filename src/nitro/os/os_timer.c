#include "m2c.h"

extern u16 data_021b0794;

void OSi_SetTimerReserved(s32 arg0) {
    data_021b0794 |= 1 << arg0;
}

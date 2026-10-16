#include "m2c.h"

extern s16 data_0206de64;
extern s16 data_021b03a0;

void func_0204c174(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_0206de64       = 0;
    data_021b03a0       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}

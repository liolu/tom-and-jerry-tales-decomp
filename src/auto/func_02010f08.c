#include "m2c.h"

extern u8 data_02063f74[];

void func_02010f08(void) {
    u16 buf[4];
    u8 i;
    u8 j;
    u8 idx;
    for (i = 0; i < 13; i++) {
        idx = data_02063f74[i];
        for (j = 0; j < 4; j++) {
            buf[j] = ((u16 *) 0x5000400)[idx + j];
        }
        for (j = 0; j < 4; j++) {
            ((u16 *) 0x5000400)[idx + (j + 1) % 4] = buf[j];
        }
    }
}

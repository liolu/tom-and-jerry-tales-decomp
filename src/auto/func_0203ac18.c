#include "m2c.h"
extern u16 data_020ac15c;
extern u8 data_020aecfc[];
s32 func_0203a970(void *);
u16 func_0203ac18(void) {
    u16 i;
    u16 sum;
    sum = 0;
    i   = 0;
    if (i < data_020ac15c) {
        do {
            sum += (u16) func_0203a970(data_020aecfc + (s16) i * 0xBC);
            i++;
        } while (i < data_020ac15c);
    }
    return sum;
}

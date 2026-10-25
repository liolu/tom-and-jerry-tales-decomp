#include "m2c.h"

s32 func_020592b0(void *, void *);
extern u8 data_020ac15c[];
extern u8 data_020ac17c[];

s32 func_02039e28(void *arg0) {
    s32 i;
    u8 *p;
    i = 0;
    if ((s32) * (u16 *) (data_020ac15c + 2) > 0) {
        p = data_020ac17c;
        do {
            if (func_020592b0(p + 0xC, arg0) == 0) {
                return i;
            }
            i++;
            p += 0x74;
        } while (i < *(u16 *) (data_020ac15c + 2));
    }
    return -1;
}

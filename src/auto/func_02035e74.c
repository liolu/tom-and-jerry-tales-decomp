#include "m2c.h"

void func_02035e74(u8 *arg0, u8 *arg1) {
    s16 sp0;
    u16 *q              = (u16 *) &sp0;
    *(s32 *) (arg1 + 0) = *(s16 *) (arg0 + 0);
    *(s32 *) (arg1 + 4) = *(s16 *) (arg0 + 2);
    *(s32 *) (arg1 + 8) = *(s16 *) (arg0 + 4);
    *q                  = arg0[6] | ((u32) (arg0[0xA] << 0x1C) >> 0x14);
    if (*q & 0x800) {
        *q = *q | 0xF000;
    }
    *(s16 *) (arg1 + 0xC) = sp0 * 2;
    *q                    = arg0[7] | ((arg0[0xA] & 0xF0) * 0x10);
    if (*q & 0x800) {
        *q = *q | 0xF000;
    }
    *(s16 *) (arg1 + 0xE) = sp0 * 2;
    *q                    = arg0[8] | ((u32) (arg0[0xB] << 0x1C) >> 0x14);
    if (*q & 0x800) {
        *q = *q | 0xF000;
    }
    *(s16 *) (arg1 + 0x10) = sp0 * 2;
    *q                     = arg0[9] | ((arg0[0xB] & 0xF0) * 0x10);
    if (*q & 0x800) {
        *q = *q | 0xF000;
    }
    *(s16 *) (arg1 + 0x12) = sp0 * 2;
}

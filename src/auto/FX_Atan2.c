#include "m2c.h"
extern s16 FX_AtanTable_[];
extern s32 FX_Div(s32, s32);
s16 FX_Atan2(s32 y, s32 x) {
    s32 num;
    s32 base;
    s32 q;
    if (y > 0) {
        if (x > 0) {
            if (x > y) {
                num  = y;
                base = 0;
                y    = 1;
            } else if (x < y) {
                num  = x;
                x    = y;
                base = 0x1922;
                y    = 0;
            } else {
                return 0xC91;
            }
        } else if (x < 0) {
            x = -x;
            if (x < y) {
                num  = x;
                x    = y;
                base = 0x1922;
                y    = 1;
            } else if (x > y) {
                num  = y;
                base = 0x3244;
                y    = 0;
            } else {
                return 0x25B3;
            }
        } else {
            return 0x1922;
        }
    } else if (y < 0) {
        y = -y;
        if (x < 0) {
            x = -x;
            if (x > y) {
                num  = y;
                base = -0x3244;
                y    = 1;
            } else if (x < y) {
                num  = x;
                x    = y;
                base = -0x1922;
                y    = 0;
            } else {
                return -0x25B3;
            }
        } else if (x > 0) {
            if (x < y) {
                num  = x;
                x    = y;
                base = -0x1922;
                y    = 1;
            } else if (x > y) {
                num  = y;
                base = 0;
                y    = 0;
            } else {
                return -0xC91;
            }
        } else {
            return -0x1922;
        }
    } else {
        if (x >= 0) {
            return 0;
        }
        return 0x3244;
    }
    if (x == 0) {
        return 0;
    }
    if (y) {
        q = FX_Div(num, x);
        return base + FX_AtanTable_[q >> 5];
    }
    q = FX_Div(num, x);
    return base - FX_AtanTable_[q >> 5];
}

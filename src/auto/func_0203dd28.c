#include "m2c.h"
typedef struct {
    u16 lo : 13;
    u16 f : 1;
    u16 hi : 2;
} Cnt;
s32 func_0203dd28(u32 a, s32 b) {
    switch (a) {
        case 0:
        case 1:
        case 2:
        case 3:
            if (a == 0) {
                Cnt t = *(Cnt *) 0x04000008;
                if (t.f == 1) {
                    return (b << 9) | 0x4000;
                }
                return b << 9;
            }
            if (a == 1) {
                Cnt t = *(Cnt *) 0x0400000A;
                if (t.f == 1) {
                    return (b << 9) | 0x6000;
                }
                return (b << 9) | 0x2000;
            }
            return ((a - 4) << 13) | (b << 9);
        case 4:
        case 5:
        case 6:
        case 7:
            if (a == 4) {
                Cnt t = *(Cnt *) 0x04001008;
                if (t.f == 1) {
                    return (b << 9) | 0x4000;
                }
                return b << 9;
            }
            if (a == 5) {
                Cnt t = *(Cnt *) 0x0400100A;
                if (t.f == 1) {
                    return (b << 9) | 0x6000;
                }
                return (b << 9) | 0x2000;
            }
            return ((a - 4) << 13) | (b << 9);
        default:
            return -1;
    }
}

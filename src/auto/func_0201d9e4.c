#include "m2c.h"
typedef struct {
    u8 pad[0x54];
    u32 f;
} S;
extern S data_0206e6d4;
s32 func_0201d9e4(s32 a) {
    switch (a) {
        case 1:
            data_0206e6d4.f |= 0x400000;
            break;
        case 2:
            data_0206e6d4.f |= 0x800000;
            break;
        case 3:
            data_0206e6d4.f |= 0x1000000;
            break;
        default:
            break;
    }
    return a;
}

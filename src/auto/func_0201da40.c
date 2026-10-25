#include "m2c.h"
typedef struct {
    u8 pad[0x54];
    u32 f;
} T;
extern T data_0206e6d4;
u32 func_0201da40(s32 a) {
    if (a == 1) {
        data_0206e6d4.f |= 0x2000000;
    }
    return a;
}

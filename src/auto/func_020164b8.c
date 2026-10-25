#include "m2c.h"
typedef struct {
    u32 a;
    u32 b;
} D;
extern s32 func_0203ec9c(s32, s32, D *);
s32 func_020164b8(void) {
    D d;
    if (func_0203ec9c(0x1F8, 8, &d) != 0) {
        return -1;
    }
    if (d.a == 0xDEADC0DE && d.b == 0x029A6666) {
        return 0;
    }
    return 1;
}

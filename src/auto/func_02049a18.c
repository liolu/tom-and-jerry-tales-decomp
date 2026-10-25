#include "m2c.h"
typedef struct {
    u8 p0[0xC4];
    u16 fc4;
    u8 p1[0x96];
    u32 f15c;
} P;
extern s32 func_02062ec4(u64, u16);
s32 func_02049a18(P **arg0) {
    P *p = *arg0;
    if (p == NULL) {
        return 0;
    }
    return func_02062ec4((u64) p->f15c * 1000ULL, p->fc4);
}

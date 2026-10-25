#include "m2c.h"

typedef struct {
    u16 w0;
    u16 pad2;
    s32 pad4;
    u32 r8;
    u32 padC[2];
    u32 r14;
    u32 r18;
    u32 r1c;
    u32 r20;
    u32 r24;
    u32 pad28;
    u32 r2c;
    u32 r30;
} St;
extern St data_0208872c;
extern u32 data_0208873c[];

s32 func_02031bf8(u32 n, u32 *p1, u32 *p2) {
    s32 k;
    u32 t;
    u32 u;
    if (data_0208872c.r14 + n <= data_0208872c.r18) {
        *p1               = data_0208872c.r14;
        data_0208872c.r14 = data_0208872c.r14 + n;
        k                 = 0;
    } else if (data_0208872c.w0 >= 3 && data_0208872c.r2c + n <= data_0208872c.r30) {
        *p1               = data_0208872c.r2c;
        data_0208872c.r2c = data_0208872c.r2c + n;
        k                 = 2;
    } else {
        return 0;
    }
    *p2 = data_0208872c.r1c + ((*p1 - data_0208873c[k * 3]) >> 1);
    if (k == 2) {
        *p2 += 0x10000;
    }
    t = *p2 + (n >> 1);
    if (t <= data_0208872c.r24) {
        data_0208872c.r20 = t;
        u                 = data_0208872c.r8 + (n >> 1);
        data_0208872c.r8  = u;
    } else {
        return 0;
    }
    data_0208872c.r8 = u + n;
    return 1;
}

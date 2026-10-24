#include "m2c.h"

extern u8 data_021afbcc[];
extern void func_0204a1e4(void);
u8 *func_0204852c(s32 i);
void *func_02048824(s32 heap, s32 size, void *cb, void *ud, s32 x);
void func_02049f00(u8 *p);

s32 func_02049848(s32 heap) {
    s32 i;
    s32 sz;
    u8 *p = data_021afbcc;
    for (i = 0; i < 4; i++, p += 0x170) {
        u8 *info = func_0204852c(i);
        if (info != 0) {
            s32 k;
            u8 n;
            p[0x124] = *info;
            k        = 0;
            if ((s32) *info > 0) {
                do {
                    p[0x126 + k] = info[k + 1];
                    k++;
                } while (k < *info);
            }
            if (heap != 0) {
                void *r;
                n  = p[0x124];
                sz = n << 11;
                r  = func_02048824(heap, sz, func_0204a1e4, p, 0);
                if (r == 0) {
                    return 0;
                }
                func_02049f00(p);
                *(void **) (p + 0x12C) = r;
                *(s32 *) (p + 0x130)   = sz;
            }
        }
    }
    return 1;
}

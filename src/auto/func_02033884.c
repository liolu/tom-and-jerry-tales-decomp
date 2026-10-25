#include "m2c.h"
extern s32 func_0203016c(s32, s32);
extern void func_02033f58(u8 *, u8 *, s32);
void func_02033884(u8 *a, u8 *b) {
    u8 n = func_0203016c(b[0xc], b[0xd]);
    if (n == 0) {
        return;
    }
    do {
        u8 *p;
        u32 cnt;
        u32 i;
        cnt = b[0xd];
        i   = 0;
        if (i < cnt) {
            p = a;
            do {
                if (*(s32 *) (p + 0x2c) == 0) {
                    break;
                }
                i++;
                p += 0x60;
            } while (i < cnt);
        }
        if (i == cnt) {
            i = func_0203016c(0, cnt - 1);
        }
        func_02033f58(a, b, i);
        n = n - 1;
    } while (n != 0);
}

#include "m2c.h"
void func_01ffa5ec(s32, s32, s32, s32);
void func_02051e94(s32, s32, u32, s32);
void func_01ffa724(s32 ch, s32 src, u32 len) {
    volatile u32 *ctrl;
    u32 n;
    if (len == 0) {
        return;
    }
    func_02051e94(ch, src, len, 0);
    ctrl = (volatile u32 *) (0x040000B0 + ((ch * 3 + 2) << 2));
    while (*ctrl & 0x80000000) {
    }
    if (len != 0) {
        do {
            if (len > 0x1D8) {
                n = 0x1D8;
            } else {
                n = len;
            }
            func_01ffa5ec(ch, src, 0x04000400, 0x84400000 | (n >> 2));
            len -= n;
            src += n;
        } while (len != 0);
    }
    while (*ctrl & 0x80000000) {
    }
}

#include "m2c.h"

u32 func_0202274c(void *, s32, s32);
void func_0200a0f8(s32);
s32 func_0201d3e0(u8);
u32 func_0201d548(u8);
void func_02025da4(u8);
void func_02026350(u8);
void func_02026878(s32);
extern u8 data_0206b918;
extern u8 data_0206e6d4[];
extern u8 data_020877d0[];
extern u8 data_0208786c[];

void func_02025c84(void) {
    u32 r;
    u32 k;

    r = func_0202274c(data_0208786c, 0, 1);
    if (!(r & 0x1000000)) {
        return;
    }
    k = r & 0xff;
    if (k == 0x12) {
        if (func_0201d548(data_0206b918) > 1 || (((u32) (data_0206e6d4[0x5f] << 27) >> 31) == 0 && data_020877d0[2] != 0)) {
            if (data_020877d0[0x11] != 0 || data_020877d0[2] != 0) {
                func_0200a0f8(1);
                func_02025da4(data_0206b918);
                return;
            }
        }
    }
    if (k == 0xb) {
        if (data_0206e6d4[0x50] != 0) {
            if (func_0201d3e0(data_0206b918) != 0 && data_020877d0[0x11] != 0) {
                func_0200a0f8(10);
                func_02026350(data_0206b918);
                return;
            }
        }
    }
    if (k != 0x13) {
        return;
    }
    if (data_020877d0[0x18] == 0) {
        return;
    }
    func_0200a0f8(1);
    func_02026878(*(s32 *) (data_020877d0 + 0x20));
}

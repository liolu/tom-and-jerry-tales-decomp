#include "m2c.h"
void func_02003658(u8 *, s32, u8 *);
void func_020299e4(u16, s32, s32, s32);
void func_020343a4(s32, s32);
s32 func_02035788(u8 *);
void func_02035ab0(u8 *, u8 *, s32);
void func_020463a0(void);
extern s32 data_0206dd38;
extern u8 data_0206e668;
extern s32 data_0206e9f8;
extern u8 data_0206fcac[];
extern u32 data_02088438;

void func_02003e84(void) {
    s32 i;
    u8 *p;
    s32 ip;

    func_020463a0();
    i = 0;
    p = data_0206fcac;
    do {
        if (p[8] != 0) {
            if (*(u16 *) (p + 0x1698) == 0 && p[0xA] != 0) {
                if (data_0206e668 != 0) {
                    func_02035ab0(p + 0x104, p + 0x154, data_0206dd38 << (data_02088438 >> 2));
                } else {
                    func_02035ab0(p + 0x104, p + 0x154, data_0206dd38);
                }
                func_02003658(p, 0, p + 0xA0);
            }
            ip = func_02035788(p + 0x104) << 0xC;
            func_020299e4(i, ip >> 0xC, *(s32 *) (p + 0x28), (ip - data_0206dd38) >> 0xC);
            if (*(u16 *) (p + 0x1698) != 0) {
                *(u16 *) (p + 0x1698) -= 1;
            }
        }
        p += 0x1864;
        i++;
    } while (i < 0xF);
    func_020343a4(1, data_0206e9f8 + 0x50);
}

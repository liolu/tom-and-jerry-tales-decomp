#include "m2c.h"
typedef struct {
    u8 p[0x14];
    u8 q[0xb8];
    s32 f_cc;
    u16 f_d0;
    u16 pad;
    s32 f_d4, f_d8, f_dc, f_e0;
} E;
extern E data_020a0288[];
extern void func_02031450(void *, s32, s32);
void func_0203525c(s32 idx) {
    E *e = &data_020a0288[idx];
    s32 a, b, c, d;
    *(volatile s32 *) 0x4000444 = 0;
    *(volatile s32 *) 0x4000440 = 1;
    c                           = e->f_dc;
    b                           = e->f_d8;
    a                           = e->f_d4;
    *(volatile s32 *) 0x4000470 = a;
    *(volatile s32 *) 0x4000470 = b;
    *(volatile s32 *) 0x4000470 = c;
    d                           = e->f_e0;
    *(volatile s32 *) 0x400046c = d;
    *(volatile s32 *) 0x400046c = d;
    *(volatile s32 *) 0x400046c = d;
    func_02031450((u8 *) e + 0x14, e->f_cc, e->f_d0);
    *(volatile s32 *) 0x4000440 = 2;
    *(volatile s32 *) 0x4000448 = 1;
}

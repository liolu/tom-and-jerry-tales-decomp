#include "m2c.h"

u32 func_0205134c(void);
s32 func_020517f8(void);
void func_0205180c(s32);
void func_02057d78(void);
void func_02050aec(u32, s32);
void func_02050b08(u32, s32);
void func_02050b48(void);
void func_02050b54(u32, s32);
void func_0204ee24(s32, void (*)(void));
void func_0204efc8(s32);
void func_0204ef68(s32);
void func_01ff8000(void);
void func_02057dcc(void);

typedef struct D {
    u8 pad[0x1c];
    u32 f1c;
    u32 f20;
    s32 f24;
    u32 f28;
} D;
extern D data_021b25a0;

s32 func_02057e9c(u32 *arg0) {
    s32 r4;
    s32 sv;
    s32 r1b;
    s32 r5;
    s32 r6;
    s32 r7;
    u32 r8;
    D *d;
    s32 r2;
    u32 t0;
    u32 t3;
    u32 r9;
    s32 r1;
    d  = &data_021b25a0;
    r5 = 0;
    r8 = d->f20;
    r6 = 0;
    r7 = 0;
    r1 = 0;
    r9 = r8 & 0x1F;
    r4 = d->f24;
    if (r9 == 0 && d->f28 <= 3) {
        r1 = 1;
    }
    if (r1 != 0) {
        t0  = func_0205134c();
        r1b = 1;
        r2  = 0;
        t3  = r8 + r4;
        if (t3 > (u32) &func_01ff8000 && r8 < 0x02000000U) {
            r2 = 1;
        }
        if (r2 == 0 && (t0 >= t3 || t0 + 0x4000 <= r8)) {
            r1b = 0;
        }
        if (r1b == 0) {
            r7 = 1;
        }
    }
    if (r7 != 0 && !((d->f1c | r4) & 0x1FF)) {
        r6 = 1;
    }
    if (r6 != 0 && r4 != 0) {
        r5 = 1;
    }
    arg0[1] = (*(u32 *) 0x027FFE60 & ~0x07000000) | 0xA1000000;
    if (r5 != 0) {
        sv = func_020517f8();
        func_02050b54(r8, r4);
        if (r9 != 0) {
            r8 -= r9;
            func_02050b08(r8, 0x20);
            func_02050b08(r8 + r4, 0x20);
            r4 += 0x20;
        }
        func_02050aec(r8, r4);
        func_02050b48();
        func_0204ee24(0x80000, func_02057dcc);
        func_0204efc8(0x80000);
        func_0204ef68(0x80000);
        func_0205180c(sv);
        func_02057d78();
    }
    return r5;
}

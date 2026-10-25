#include "m2c.h"

typedef struct {
    u8 p[0x55];
    u8 fl;
    u8 q[2];
} E;
typedef struct {
    u8 p0[0x2e];
    u8 f2e;
    u8 p1[0x4c - 0x2f];
    u8 n;
    u8 p2[3];
    E *e;
    u8 p3[0x58 - 0x54];
    u8 f58;
} S;
typedef struct {
    u8 p[0x25];
    u8 a;
    u8 b;
    s8 c;
} G;
extern G data_020880c0;
extern void func_0201db7c(int);

s32 func_02015ecc(S *arg0) {
    u8 i;
    u8 a;
    u8 b;
    E *e;
    u8 n;
    n = arg0->n;
    a = 0;
    e = arg0->e;
    b = a;
    if (n == 0) {
        return 3;
    }
    for (i = 0; i < n; i++) {
        u8 fl = e[i].fl;
        if ((fl & 1) == 1) {
            a++;
        } else if ((fl & 2) == 2) {
            b++;
        }
    }
    if (a >= arg0->f58) {
        func_0201db7c(data_020880c0.a << 12);
    } else if (b + a >= arg0->f58) {
        func_0201db7c(data_020880c0.b << 12);
    } else if (arg0->f2e == 0) {
        func_0201db7c(data_020880c0.c << 12);
    }
    return (b + a >= arg0->f58) ? 2 : 1;
}

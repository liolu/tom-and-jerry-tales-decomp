#include "m2c.h"

typedef struct {
    u8 p0[0x58];
    s32 f58;
    u8 p1[0x08];
    u32 f64;
    u8 p2[0x84];
    s32 fec;
    s32 ff0;
    s32 ff4;
} O;

extern void func_0204b918(void *, void *, void *);
extern s32 data_020692ec;

void func_02006074(O *o) {
    s32 lim;
    s32 neg;
    lim = (s32) (((long long) o->f58 * 0xf33 + 0x800) >> 12);
    if (*(s32 *) ((u8 *) o + 0x17c0) != 0) {
        if (o->ff0 < 0) {
            o->ff0 = 0;
        }
    } else if (((((s32) (o->f64 << 28)) >> 31) == 0) && *(u16 *) ((u8 *) o + 0x1698) == 0) {
        o->ff0 += -0x266;
    }
    neg = -lim;
    if (o->fec < neg) {
        o->fec = neg;
    } else if (o->fec > lim) {
        o->fec = lim;
    }
    if (o->ff0 < neg) {
        o->ff0 = neg;
    }
    if (o->ff4 < neg) {
        o->ff4 = neg;
    } else if (o->ff4 > lim) {
        o->ff4 = lim;
    }
    if (data_020692ec == 0) {
        o->ff0 = 0;
    }
    if (*(u16 *) ((u8 *) o + 0x1698) == 0) {
        func_0204b918((u8 *) o + 0xac, (u8 *) o + 0xec, (u8 *) o + 0xac);
    }
}

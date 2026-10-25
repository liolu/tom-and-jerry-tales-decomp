#include "m2c.h"

typedef struct {
    s16 id;
    u8 p0[4];
    s16 s6;
    u8 p1[0x24];
    s32 f2c, f30, f34, f38, f3c, f40, f44, f48, f4c;
    u8 p2[8];
    u32 f58, f5c, f60, f64, f68;
    s16 s6c;
    u8 p3[0x4a];
    s32 fb8;
} E;

extern void func_020096fc(void *, void *);
extern void func_02039e84(u16, u16, void *);
extern s16 func_0203afd8(void *, void *);
extern void func_0204b480(void *);
extern s32 data_0206d4c0;
extern u16 data_020ac15c;
extern E data_020aecfc[];

s32 func_0203ae70(void *arg0, s32 arg1, void *arg2) {
    E *e;
    u16 i;
    s32 idx;
    u16 n;

    n   = data_020ac15c;
    idx = n;
    for (i = 0; n >= i;) {
        if (data_020aecfc[i].id == -1) {
            idx = i;
            break;
        }
        i++;
    }
    e = &data_020aecfc[idx];
    if (idx == n) {
        data_020ac15c++;
    }
    e->id  = func_0203afd8(arg0, arg2);
    e->f58 = (e->f58 | 0x80) & ~1;
    if (e->id < 0) {
        e->f58 = e->f58 & ~0x40;
    } else {
        e->f58 = (e->f58 & ~0x40) | ((arg1 & 1) << 6);
    }
    e->f2c = e->f30 = e->f34 = 0;
    e->f38 = e->f3c = e->f40 = 0x1000;
    e->f4c                   = 0;
    e->f48                   = 0;
    e->f44                   = 0;
    e->s6                    = 0;
    func_0204b480((u8 *) e + 8);
    e->f58 &= ~0x200;
    e->f68 = 0;
    e->f64 = 0;
    e->f60 = 0;
    e->s6c = 0;
    e->f5c &= ~3;
    if (e->fb8 == 0) {
        func_020096fc(e, arg2);
    }
    func_02039e84((u16) idx, e->id, arg2);
    data_0206d4c0 = 1;
    return idx;
}

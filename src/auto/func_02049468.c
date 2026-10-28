#include "m2c.h"
typedef struct {
    u8 pad0[4];
    u16 f4;
    u8 pad1[2];
    u8 f8;
    u8 f9;
} Info;
extern Info *func_020482d4(s32);
extern s32 StartSeq(s32, s32, s32, s32, Info *, s32);
s32 func_02049468(s32 a, s32 b, s32 c, s32 d, s32 e) {
    Info *info = func_020482d4(e);
    if (info == 0) {
        return 0;
    }
    if (d < 0) {
        d = info->f8;
    }
    if (c < 0) {
        c = info->f4;
    }
    if (b < 0) {
        b = info->f9;
    }
    return StartSeq(a, b, c, d, info, e);
}

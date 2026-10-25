#include "m2c.h"
s32 func_0201490c(u8, s32);
s32 func_02014da0(s32);
extern s32 data_02087048[];
s32 func_02014cf0(u32 arg0) {
    s32 t = func_02014da0(0);
    s32 r = t * 0x64 + data_02087048[3];
    func_0201490c(arg0, r);
    ((s32 *) data_02087048[1])[t] = r;
    if (t == *(s16 *) data_02087048) {
        *(s16 *) data_02087048 = *(s16 *) data_02087048 + 1;
    }
    return r;
}

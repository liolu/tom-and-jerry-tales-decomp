#include "m2c.h"
extern s16 data_02064348[];
extern s32 data_020a414c[];
s32 func_0204b7c8(s32);
s32 func_0204bc90(s32, s32);
s32 func_0204b77c(s32, s16);

void func_01ffa258(void) {
    s32 i;
    s32 t;
    for (i = 0; i < 0x1001; i++) {
        t                        = func_0204bc90(func_0204b7c8(0x1000 - (s32) (((long long) i * i + 0x800) >> 12)), i);
        data_020a414c[i * 2]     = t;
        data_020a414c[i * 2 + 1] = func_0204b77c(0x1000, *(s16 *) ((u8 *) data_02064348 + (t >> 4) * 4));
    }
}

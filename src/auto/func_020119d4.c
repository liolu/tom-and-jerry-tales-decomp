#include "m2c.h"
extern s32 data_0206e6d4[];
extern s32 data_0206acc8[];
void func_020119d4(s32 a) {
    data_0206acc8[5] = (s32) (((s64) a * data_0206e6d4[0x21] + 0x800) >> 12);
}

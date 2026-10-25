#include "m2c.h"
typedef struct {
    u8 pad[0x84];
    s32 k;
} G;
extern G data_0206e6d4;
extern s32 data_0206acc8;
void func_020119a4(s32 a) {
    data_0206acc8 = (s32) (((s64) a * data_0206e6d4.k + 0x800) >> 12);
}

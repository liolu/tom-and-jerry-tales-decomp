#include "m2c.h"
extern s16 func_0203ae70(s32, s32, s32);
extern s16 data_020ac154[4];
extern u32 data_020a414c[];
s16 *func_02039dfc(s32 a, s32 b, s32 c, s32 d) {
    data_020ac154[0] = func_0203ae70(a, b, d);
    data_020ac154[3] = 0;
    return (s16 *) &data_020a414c[8194];
}

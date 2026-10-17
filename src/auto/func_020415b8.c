#include "m2c.h"

extern M2C_UNK data_021a7234;
extern M2C_UNK data_021a7244;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_020415b8(void *arg0) {
    s32 temp_ip;
    s32 temp_r3;

    temp_ip                               = M2C_FIELD(&data_021a7234, s32 *, 0xC) + 1;
    temp_r3                               = (temp_ip * 0xC) + (s32) &data_021a7244;
    M2C_FIELD(&data_021a7234, s32 *, 0xC) = temp_ip;
    *(M2C_S12 *) ((s8 *) temp_r3 + 0)     = *(M2C_S12 *) ((s8 *) arg0 + 0);
}

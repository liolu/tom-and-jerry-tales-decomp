#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_0200e2d8(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3                         = arg1 + 0x10;
    *(M2C_S12 *) ((s8 *) arg1 + 16) = *(M2C_S12 *) ((s8 *) arg0 + 0);
}

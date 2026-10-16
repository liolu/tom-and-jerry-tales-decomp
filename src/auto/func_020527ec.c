#include "m2c.h"

M2C_UNK func_020508c8(M2C_UNK *);                   /* extern */
M2C_UNK func_0205284c();                            /* extern */
M2C_UNK func_02052f00();                            /* extern */
extern s32 data_021b07d8;
extern M2C_UNK data_021b07dc;

void func_020527ec(void) {
    if (data_021b07d8 != 0) {
        return;
    }
    data_021b07d8 = 1;
    func_020508c8(&data_021b07dc);
    func_0205284c();
    func_02052f00();
}

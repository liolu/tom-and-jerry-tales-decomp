#include "m2c.h"

M2C_UNK func_020500ac(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02050370(void *);                      /* extern */
s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */
M2C_UNK func_02059088(M2C_UNK *);                   /* extern */
extern void *data_021b3aa8;
extern M2C_UNK data_021b3aac;
extern M2C_UNK data_021b3ed0;
extern M2C_UNK func_0205909c;

void func_02058ffc(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020517f8();
    if (data_021b3aa8 == NULL) {
        data_021b3aa8 = arg0;
        func_02059088(arg0 + 0xC4);
        func_02059088(&data_021b3aac);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020500ac(arg0, &func_0205909c, arg0, &data_021b3ed0, 0x400, 0x14);
        func_02050370(arg0);
    }
    func_0205180c(temp_r4);
}

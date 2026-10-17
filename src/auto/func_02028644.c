#include "m2c.h"

s32 func_01ff8000(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_0204c1b0();                            /* extern */
M2C_UNK func_02051868();                            /* extern */
M2C_UNK func_02054c5c(M2C_UNK *);                   /* extern */
s32 func_0205518c(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_020551a8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0205bff0(s32, M2C_UNK *);              /* extern */
extern s32 data_0206c450;
extern M2C_UNK data_0206c464;
extern M2C_UNK data_0206e6a4;
extern M2C_UNK data_02087e30;
extern M2C_UNK data_02087e48;

void func_02028644(void) {
    u8 sp14[128];
    u8 sp0[20];

    func_02051868();
    M2C_FIELD(&data_02087e30, s32 *, 4) = 0;
    M2C_FIELD(&data_02087e30, s32 *, 0) = 0;
    data_0206c450                       = -1;
    func_02054c5c(&data_02087e48);
    func_020551a8(&data_02087e48, &data_0206c464);
    M2C_FIELD(&data_02087e30, s32 *, 8) = func_01ff8000(&data_0206e6a4, 0x4000);
    M2C_FIELD(&data_02087e30, s32 *, 0) = 0;
loop_1:
    if (func_0205518c(&data_02087e48, sp0) != 0) {
        func_0205bff0(M2C_FIELD(&data_02087e30, s32 *, 8) + (M2C_FIELD(&data_02087e30, s32 *, 0) << 6), sp14);
        M2C_FIELD(&data_02087e30, s32 *, 0) = (s32) (M2C_FIELD(&data_02087e30, s32 *, 0) + 1);
        goto loop_1;
    }
    *(s32 *) 0x04001000 |= 0x10000;
    func_0204c1b0();
}

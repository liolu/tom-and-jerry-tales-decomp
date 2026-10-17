#include "m2c.h"

M2C_UNK func_0203075c();                            /* extern */
M2C_UNK func_020308cc();            /* extern */
M2C_UNK func_02051a48();                            /* extern */
extern M2C_UNK data_0206cf08;
extern M2C_UNK data_02088450;

void func_02030238(s32 arg0, s16 arg1) {
    switch (arg0) {                                 /* irregular */
        case 0:
            func_020308cc(0, 1);
            M2C_FIELD(&data_0206cf08, s16 *, 4) = 1;
            break;
        case 1:
            func_020308cc(1);
            M2C_FIELD(&data_0206cf08, s16 *, 4) = arg1;
            break;
        case 2:
            func_020308cc(0, 1);
            M2C_FIELD(&data_0206cf08, s16 *, 4) = 0;
            func_0203075c();
            break;
        default:
            func_02051a48();
            break;
    }
    M2C_FIELD(&data_02088450, s32 *, 0x24) = 0;
    M2C_FIELD(&data_02088450, s32 *, 0x1C) = 0;
}

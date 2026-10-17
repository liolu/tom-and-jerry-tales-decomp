#include "m2c.h"

M2C_UNK func_02051a48();                            /* extern */
extern s32 data_0206e9f8;

void func_02044978(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            *arg3 = M2C_FIELD(arg0, s32 *, 0) + 0x7C;
            return;
        case 1:
            *arg3 = M2C_FIELD(arg0, s32 *, 0) + 8;
            return;
        case 2:
            *arg3 = data_0206e9f8 + 8;
            return;
        default:
            func_02051a48();
            return;
    }
}

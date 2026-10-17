#include "m2c.h"

M2C_UNK func_0202c048(u16, s32);                    /* extern */
extern M2C_UNK data_0206e6f4;

void func_0202cc54(s32 arg0, s32 arg1) {
    u16 var_r0;
    void *temp_r1;

    temp_r1 = (M2C_UNK *) ((s8 *) &data_0206e6f4 + (arg1 * 8));
    var_r0  = 0;
    switch (arg0) {                                 /* irregular */
        case 4:
            var_r0 = M2C_FIELD(temp_r1, u16 *, 4);
            break;
        case 3:
            var_r0 = M2C_FIELD(temp_r1, u16 *, 2);
            break;
    }
    func_0202c048(var_r0, arg0);
}

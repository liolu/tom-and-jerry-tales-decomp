#include "m2c.h"

M2C_UNK func_0202c048(u16);
extern M2C_UNK data_020880ec;

void func_0202bff4(s32 arg0) {
    switch (arg0) {
        case 1:
            func_0202c048(M2C_FIELD(&data_020880ec, u16 *, 6));
            return;
        case 2:
            func_0202c048(M2C_FIELD(&data_020880ec, u16 *, 8));
            return;
        case 3:
            func_0202c048(M2C_FIELD(&data_020880ec, u16 *, 0xA));
            return;
    }
}

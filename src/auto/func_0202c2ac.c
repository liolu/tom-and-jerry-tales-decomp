#include "m2c.h"

extern M2C_UNK data_0206e6d4;
extern M2C_UNK data_0206e6f4;
extern M2C_UNK data_020880ec;

s32 func_0202c2ac(s32 arg0) {
    u16 temp_r1_2;
    u16 temp_r1_3;
    u16 temp_r1_4;
    void *temp_r1;

    temp_r1 = (M2C_UNK *) ((s8 *) &data_0206e6f4 + (M2C_FIELD(&data_0206e6d4, u8 *, 0x18) * 8));
    switch (arg0) {
        case 2:
            temp_r1_2 = M2C_FIELD(temp_r1, u16 *, 0);
            if (((u32) temp_r1_2 <= (u32) M2C_FIELD(&data_020880ec, u16 *, 0xA)) && (temp_r1_2 != 0)) {
                return 3;
            }
            if (((u32) temp_r1_2 <= (u32) M2C_FIELD(&data_020880ec, u16 *, 8)) && (temp_r1_2 != 0)) {
                return 2;
            }
            if (((u32) temp_r1_2 <= (u32) M2C_FIELD(&data_020880ec, u16 *, 6)) && (temp_r1_2 != 0)) {
                return 1;
            }
            return 0;
        case 3:
            temp_r1_3 = M2C_FIELD(temp_r1, u16 *, 2);
            if (((u32) temp_r1_3 >= (u32) M2C_FIELD(&data_020880ec, u16 *, 0xA)) && (temp_r1_3 != 0)) {
                return 3;
            }
            if (((u32) temp_r1_3 >= (u32) M2C_FIELD(&data_020880ec, u16 *, 8)) && (temp_r1_3 != 0)) {
                return 2;
            }
            if (((u32) temp_r1_3 >= (u32) M2C_FIELD(&data_020880ec, u16 *, 6)) && (temp_r1_3 != 0)) {
                return 1;
            }
            return 0;
        case 4:
            temp_r1_4 = M2C_FIELD(temp_r1, u16 *, 4);
            if (((u32) temp_r1_4 >= (u32) M2C_FIELD(&data_020880ec, u16 *, 0xA)) && (temp_r1_4 != 0)) {
                return 3;
            }
            if (((u32) temp_r1_4 >= (u32) M2C_FIELD(&data_020880ec, u16 *, 8)) && (temp_r1_4 != 0)) {
                return 2;
            }
            if (((u32) temp_r1_4 >= (u32) M2C_FIELD(&data_020880ec, u16 *, 6)) && (temp_r1_4 != 0)) {
                return 1;
            }
            return 0;
        default:
            return 0;
    }
}

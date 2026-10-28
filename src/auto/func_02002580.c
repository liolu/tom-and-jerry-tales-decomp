#include "m2c.h"

s32 func_020306c0(M2C_UNK);
extern M2C_UNK data_0206e9e8;

void func_02002580(void) {
    s32 temp_r1;
    s32 temp_r1_2;

    if (func_020306c0(7) != 0) {
        M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) =
            (s32) (M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) +
                   M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0xC8));
        temp_r1 = M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0xB0);
        if ((s32) M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) > temp_r1) {
            M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) = temp_r1;
        }
        return;
    }
    if (func_020306c0(6) == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) =
        (s32) (M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) -
               M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0xC8));
    temp_r1_2 = M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0xAC);
    if ((s32) M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) < temp_r1_2) {
        M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x7C) = temp_r1_2;
    }
}

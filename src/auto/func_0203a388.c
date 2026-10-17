#include "m2c.h"

M2C_UNK func_02033df8(u16);                         /* extern */
M2C_UNK func_02037ff0(void *);                      /* extern */
M2C_UNK func_0203b32c(u16);                         /* extern */
extern M2C_UNK data_020ac15c;
extern M2C_UNK data_020aecfc;

void func_0203a388(s32 arg0) {
    s32 temp_r4;
    u16 *var_r5;
    u16 *var_r5_2;
    void *temp_r5;
    void *var_r6;

    temp_r4 = (arg0 * 0xBC) + (s32) &data_020aecfc;
    var_r5  = M2C_FIELD(temp_r4, u16 **, 0xB0);
    if (var_r5 != NULL) {
        M2C_FIELD(&data_020ac15c, u16 **, 0xC) = var_r5;
        if (M2C_FIELD(var_r5, s32 *, 0x10) != 0) {
            do {
                func_02033df8(M2C_FIELD(var_r5, u16 *, 0));
                var_r5 = M2C_FIELD(var_r5, u16 **, 0x10);
            } while (M2C_FIELD(var_r5, s32 *, 0x10) != 0);
        }
        func_02033df8(*var_r5);
        M2C_FIELD(temp_r4, u16 **, 0xB0) = NULL;
    }
    var_r5_2 = M2C_FIELD(temp_r4, u16 **, 0xB4);
    if (var_r5_2 != NULL) {
        M2C_FIELD(&data_020ac15c, u16 **, 0x18) = var_r5_2;
        if (M2C_FIELD(var_r5_2, s32 *, 0x20) != 0) {
            do {
                func_0203b32c(M2C_FIELD(var_r5_2, u16 *, 0));
                var_r5_2 = M2C_FIELD(var_r5_2, u16 **, 0x20);
            } while (M2C_FIELD(var_r5_2, s32 *, 0x20) != 0);
        }
        func_0203b32c(*var_r5_2);
        M2C_FIELD(temp_r4, u16 **, 0xB4) = NULL;
    }
    var_r6 = M2C_FIELD(temp_r4, void **, 0xA8);
    if (var_r6 != NULL) {
        temp_r5                                  = M2C_FIELD(&data_020ac15c, void **, 0x1C);
        M2C_FIELD(&data_020ac15c, void **, 0x1C) = var_r6;
        if (M2C_FIELD(var_r6, s32 *, 0x38) != 0) {
            do {
                func_02037ff0(var_r6);
                var_r6 = M2C_FIELD(var_r6, void **, 0x38);
            } while (M2C_FIELD(var_r6, s32 *, 0x38) != 0);
        }
        func_02037ff0(var_r6);
        M2C_FIELD(var_r6, void **, 0x38)  = temp_r5;
        M2C_FIELD(temp_r4, void **, 0xA8) = NULL;
    }
    M2C_FIELD(temp_r4, s32 *, 0x58) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x58) & ~0x40);
    M2C_FIELD(temp_r4, s16 *, 0)    = -1;
    M2C_FIELD(temp_r4, s16 *, 2)    = -1;
    M2C_FIELD(temp_r4, s32 *, 0x58) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x58) & ~0x100);
}

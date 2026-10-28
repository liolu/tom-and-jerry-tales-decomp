#include "m2c.h"

M2C_UNK func_02005c50(s32, M2C_UNK);
extern s32 data_02069c08[];
extern M2C_UNK data_0206e6d4;

void func_02005d38(void) {
    u32 temp_r0;
    s32 var_r0;
    u8 var_r4;

    var_r4 = 0x13;
    do {
        temp_r0 = var_r4 - 0x13;
        switch (temp_r0) {
            case 0:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x1F) >> 0x1F);
                break;
            case 1:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x1E) >> 0x1F);
                break;
            case 2:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x1D) >> 0x1F);
                break;
            case 3:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x1C) >> 0x1F);
                break;
            case 4:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x1B) >> 0x1F);
                break;
            case 5:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x1A) >> 0x1F);
                break;
            case 6:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x19) >> 0x1F);
                break;
            case 7:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x18) >> 0x1F);
                break;
            case 8:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x99) << 0x1C) >> 0x1F);
                break;
            case 9:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x17) >> 0x1F);
                break;
            case 10:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x16) >> 0x1F);
                break;
            case 11:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x99) << 0x1E) >> 0x1F);
                break;
            case 12:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x15) >> 0x1F);
                break;
            case 13:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x14) >> 0x1F);
                break;
            case 14:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x99) << 0x1F) >> 0x1F);
                break;
            case 15:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x99) << 0x1D) >> 0x1F);
                break;
            case 16:
                var_r0 = (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x94) << 0x13) >> 0x1F);
                break;
            case 17:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x98) << 0x1E) >> 0x1F);
                break;
            case 18:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x98) << 0x1D) >> 0x1F);
                break;
            case 19:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x98) << 0x1C) >> 0x1F);
                break;
            case 20:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x98) << 0x1B) >> 0x1F);
                break;
            case 21:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x98) << 0x1A) >> 0x1F);
                break;
            case 22:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x98) << 0x19) >> 0x1F);
                break;
            case 23:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x98) << 0x18) >> 0x1F);
                break;
            case 24:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x99) << 0x1B) >> 0x1F);
                break;
            case 25:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x59) << 0x1A) >> 0x1F);
                break;
            case 26:
                var_r0 = ((u32) (M2C_FIELD(&data_0206e6d4, u8 *, 0x99) << 0x19) >> 0x1F);
                break;
            default:
                var_r0 = 0;
                break;
        }
        if (var_r0 != 0) {
            func_02005c50(data_02069c08[var_r4], 2);
        }
        var_r4 += 1;
    } while ((u32) var_r4 <= 0x2DU);
}

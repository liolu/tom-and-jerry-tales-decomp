#include "m2c.h"

M2C_UNK func_02004e38(M2C_UNK *, s32);
M2C_UNK func_0200a0f8(M2C_UNK);
extern M2C_UNK data_0206a2dc;
extern M2C_UNK data_0206e6d4;
extern M2C_UNK data_020aecfc;

void func_02005730(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(&data_0206e6d4, s32 *, 0xB0) != 0) {
        return;
    }
    temp_r4 = (arg0 * 0xBC) + (s32) &data_020aecfc;
    if (((u32) (M2C_FIELD(temp_r4, s32 *, 0x58) << 0x19) >> 0x1F) != 0) {
        func_0200a0f8(0xF);
        M2C_FIELD(&data_0206e6d4, u16 *, 0x7C) = (u16) (M2C_FIELD(&data_0206e6d4, u16 *, 0x7C) + 0x14);
        func_02004e38(&data_0206a2dc, arg0);
        func_02004e38(&data_0206a2dc, arg0);
    }
    M2C_FIELD(temp_r4, s32 *, 0x58) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x58) & ~0x40);
}

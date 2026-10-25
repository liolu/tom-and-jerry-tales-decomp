#include "m2c.h"

M2C_UNK func_020219d8(M2C_UNK);                     /* extern */
M2C_UNK func_02030f40(M2C_UNK *, s32 *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0203cd2c();                            /* extern */
M2C_UNK func_0203cd5c(s32);                         /* extern */
M2C_UNK func_0203cf6c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0203cff0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0203d498(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0203de64(M2C_UNK);                     /* extern */
M2C_UNK func_0203de74(M2C_UNK);                     /* extern */
M2C_UNK func_0203de84(M2C_UNK);                     /* extern */
M2C_UNK func_0203de98(s32);                         /* extern */
extern M2C_UNK data_0206b830;
extern M2C_UNK data_0206b848;
extern s32 data_0206e690;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
extern M2C_UNK data_020b8b44;
extern M2C_UNK data_020b8b6c;

void func_02021e38(void) {
    func_020219d8(0);
    *(u16 *) 0x04000304 &= ~0x8000;
    {
        s32 *b = (s32 *) 0x04000000;
        *b &= ~0x1F00;
        b[0x400] &= ~0x1F00;
    }
    func_02030f40(&data_0206b830, &data_0206e690, &data_0206e6a4, &data_0206e698);
    func_0203cd2c();
    func_0203cf6c(0, 4, 0, 0, 0xC, 0, 0, 0);
    func_0203cff0(1, 5, 0, 1, 0xD, 2, 1);
    func_0203cff0(2, 1, 0, 1, 0x1F, 0, 1);
    func_0203cd5c(M2C_FIELD(&data_020b8b44, s32 *, 0));
    func_0203cd5c(M2C_FIELD(&data_020b8b44, s32 *, 0x28));
    func_0203cd5c(M2C_FIELD(&data_020b8b44, s32 *, 0x50));
    func_0203de64(0);
    func_0203de98(data_0206e690);
    func_0203de84(0);
    func_0203de74(0);
    func_0203d498(&data_0206b848, &data_0206e698, 0, 1, &data_020b8b6c);
}

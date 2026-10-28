#include "m2c.h"

M2C_UNK func_02003d94();
M2C_UNK func_02004ac4();
M2C_UNK func_0203179c(M2C_UNK *);
M2C_UNK func_02032604(M2C_UNK *);
M2C_UNK func_02033200(M2C_UNK *, M2C_UNK *);
M2C_UNK func_02033ad0(M2C_UNK *, M2C_UNK *);
M2C_UNK func_0203a4a8(M2C_UNK *, M2C_UNK *);
M2C_UNK func_0204089c(M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK func_02042944();
extern M2C_UNK data_0206cd1c;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
extern s32 data_0206ea14;

void func_0202ddfc(void) {
    func_02042944();
    func_02003d94();
    func_0204089c(&data_0206cd1c, &data_0206e6a4, &data_0206e698);
    data_0206ea14 = 0;
    func_02004ac4();
    M2C_FIELD((void *) 0x040004C8, s32 *, 0) = 0x2D8B6127;
    M2C_FIELD((void *) 0x040004C8, s32 *, 4) = 0x7FFF;
    M2C_FIELD((void *) 0x040004C8, s32 *, 0) = 0x6D8B62D8;
    M2C_FIELD((void *) 0x040004C8, s32 *, 4) = 0x40006318;
    M2C_FIELD((void *) 0x040004C8, s32 *, 0) = -0x52749ED9;
    M2C_FIELD((void *) 0x040004C8, s32 *, 4) = 0x80000000;
    M2C_FIELD((void *) 0x040004C8, s32 *, 0) = -0x12749ED9;
    M2C_FIELD((void *) 0x040004C8, s32 *, 4) = 0xC0000000;
    func_0203a4a8(&data_0206e698, &data_0206e6a4);
    func_02033200(&data_0206e698, &data_0206e698);
    func_02033ad0(&data_0206e698, &data_0206e6a4);
    func_02032604(&data_0206e698);
    func_0203179c(&data_0206e698);
}

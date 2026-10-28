#include "m2c.h"

M2C_UNK func_020314d0();
M2C_UNK func_0203179c(M2C_UNK *);
M2C_UNK func_0203253c();
M2C_UNK func_02032604(M2C_UNK *);
M2C_UNK func_020330b4();
M2C_UNK func_02033200(M2C_UNK *, M2C_UNK *);
M2C_UNK func_0203a294();
M2C_UNK func_0203cc68(M2C_UNK, M2C_UNK);
M2C_UNK func_0203ccc8(M2C_UNK, M2C_UNK);
M2C_UNK func_0204089c(s32, M2C_UNK *, M2C_UNK *);
M2C_UNK func_02051868();
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
extern M2C_UNK data_02086d90;

void func_0200c7d4(void) {
    func_020314d0();
    func_0203253c();
    func_0203a294();
    func_020330b4();
    func_0203ccc8(0, 0);
    func_0204089c(M2C_FIELD(&data_02086d90, volatile s32 *, 0xC), &data_0206e6a4, &data_0206e698);
    func_02033200(&data_0206e698, &data_0206e698);
    func_02032604(&data_0206e698);
    func_0203179c(&data_0206e698);
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 0) = 0x2D8B6127;
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 4) = 0x7C00;
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 0) = 0x6D8B62D8;
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 4) = 0x40006318;
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 0) = -0x52749ED9;
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 4) = 0x80000000;
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 0) = -0x12749ED9;
    M2C_FIELD((void *) 0x040004C8, volatile s32 *, 4) = 0xC0000000;
    func_02051868();
    func_0203cc68(0, 0);
}

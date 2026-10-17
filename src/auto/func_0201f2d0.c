#include "m2c.h"

M2C_UNK func_02003d94();                            /* extern */
M2C_UNK func_02004ac4();                            /* extern */
M2C_UNK func_0200a0a0(u8);                          /* extern */
M2C_UNK func_0200a388(M2C_UNK);                     /* extern */
M2C_UNK func_0203179c(M2C_UNK *);                   /* extern */
M2C_UNK func_02032604(M2C_UNK *);                   /* extern */
M2C_UNK func_02033200(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02033ad0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0203a4a8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0204089c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02042944();                            /* extern */
extern s32 data_020692ec;
extern M2C_UNK data_0206b2cc;
extern M2C_UNK data_0206b2dc;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
extern s32 data_0206ea14;
extern M2C_UNK data_020875a8;

void func_0201f2d0(void) {
    func_02042944();
    func_02003d94();
    if ((u32) (data_020692ec - 2) <= 2U) {
        func_0204089c(&data_0206b2cc, &data_0206e6a4, &data_0206e698);
    } else {
        func_0204089c(&data_0206b2dc, &data_0206e6a4, &data_0206e698);
    }
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
    if (data_020692ec == 1) {
        func_0200a0a0(M2C_FIELD(&data_020875a8, u8 *, 5));
        return;
    }
    func_0200a388(1);
}

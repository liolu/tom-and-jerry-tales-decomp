/* compiler: 2.0/sp1p5 -pragma "opt_propagation off" */
#include "m2c.h"

M2C_UNK func_0200cf00();                            /* extern */
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
M2C_UNK G3X_SetClearColor(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0206a834;
extern M2C_UNK data_0206a84c;
extern M2C_UNK data_0206a868;
extern s32 data_0206e690;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
extern s32 data_02086db4;
extern s32 data_020b8b44;
extern M2C_UNK data_020b8b6c;

void func_0200d854(void) {
    func_020219d8(0);
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0xE000);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0xE000);
    G3X_SetClearColor(0, 0x1F, 0x7FFF, 0x3F, 0);
    *(u16 *) 0x04000060                      = (*(u16 *) 0x04000060 & ~0x3000) | 0x10;
    M2C_FIELD((void *) 0x04000000, s32 *, 0) = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00);
    *(s32 *) 0x04001000                      = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1100;
    func_02030f40(&data_0206a834, &data_0206e690, &data_0206e6a4, &data_0206e698);
    func_02030f40(&data_0206a84c, &data_02086db4, &data_0206e6a4, &data_0206e698);
    func_0203cd2c();
    func_0203cf6c(0, 4, 0, 0, 0xC, 0, 0, 0);
    func_0203cff0(1, 5, 0, 1, 0xD, 2, 1);
    func_0203cff0(2, 1, 0, 1, 0x1F, 0, 1);
    func_0203cd5c(data_020b8b44);
    func_0203de64(0);
    func_0203de98(data_0206e690);
    func_0203de84(0);
    func_0203de74(0);
    {
        void *a = &data_0206a868;
        func_0203d498(a, &data_0206e698, 0, 1, &data_020b8b6c);
    }
    func_0200cf00();
}

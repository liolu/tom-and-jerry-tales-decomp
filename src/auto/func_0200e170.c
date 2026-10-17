#include "m2c.h"

M2C_UNK func_020414d8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0204153c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0206a8c4;
extern M2C_UNK data_0206a8cc;
extern M2C_UNK data_0206a8d0;
extern M2C_UNK data_0206a8d8;
extern M2C_UNK data_0206a8e0;
extern M2C_UNK data_0206a8e8;
extern M2C_UNK data_0206a8f0;
extern s32 data_02086e14;
extern M2C_UNK func_0200e2b0;
extern M2C_UNK func_0200e2d8;
extern M2C_UNK func_0200e2e8;
extern M2C_UNK func_0200e2f8;
extern M2C_UNK func_0200e3b4;
extern M2C_UNK func_0200e6e0;
extern M2C_UNK func_0200e718;
extern M2C_UNK func_0200e760;
extern M2C_UNK func_0200e798;
extern M2C_UNK func_02046454;
extern M2C_UNK func_020464b4;
extern M2C_UNK func_020464d4;

void func_0200e170(void) {
    data_02086e14 = 0;
    func_0204153c(&data_0206a8c4, &data_0206a8cc, &func_0200e2d8);
    func_0204153c(&data_0206a8c4, &data_0206a8d0, &func_0200e2e8);
    func_0204153c(&data_0206a8c4, &data_0206a8d8, &func_0200e2b0);
    func_0204153c(&data_0206a8c4, &data_0206a8e0, &func_0200e2b0);
    func_0204153c(&data_0206a8c4, &data_0206a8e8, &func_020464b4);
    func_0204153c(&data_0206a8d8, &data_0206a8f0, &func_0200e2f8);
    func_0204153c(&data_0206a8e0, &data_0206a8f0, &func_0200e3b4);
    func_0204153c(&data_0206a8e8, &data_0206a8f0, &func_020464d4);
    func_0204153c(&data_0206a8cc, &data_0206a8f0, &func_0200e2b0);
    func_0204153c(&data_0206a8d0, &data_0206a8f0, &func_0200e2b0);
    func_020414d8(&data_0206a8cc, &func_0200e760);
    func_020414d8(&data_0206a8d0, &func_0200e798);
    func_020414d8(&data_0206a8d8, &func_0200e6e0);
    func_020414d8(&data_0206a8e0, &func_0200e718);
    func_020414d8(&data_0206a8e8, &func_02046454);
}

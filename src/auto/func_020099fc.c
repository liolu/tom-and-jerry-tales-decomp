#include "m2c.h"

M2C_UNK func_0203a274(M2C_UNK *);                   /* extern */
M2C_UNK func_0203a284(M2C_UNK *);                   /* extern */
M2C_UNK func_020414d8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0204153c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0206a334;
extern M2C_UNK data_0206a33c;
extern M2C_UNK data_0206a344;
extern M2C_UNK data_02086b28;
extern M2C_UNK func_02009aa8;
extern M2C_UNK func_02009acc;
extern M2C_UNK func_02009c78;
extern M2C_UNK func_02009c8c;
extern M2C_UNK func_02009d80;

void func_020099fc(void) {
    func_020414d8(&data_0206a334, &func_02009c78);
    func_0204153c(&data_0206a334, &data_0206a33c, &func_02009c8c);
    func_0204153c(&data_0206a334, &data_0206a33c, &func_02009c8c);
    func_0204153c(&data_0206a344, &data_0206a33c, &func_02009d80);
    func_0203a274(&func_02009acc);
    func_0203a284(&func_02009aa8);
    M2C_FIELD(&data_02086b28, s32 *, 4)    = 0x1000;
    M2C_FIELD(&data_02086b28, s32 *, 8)    = 0x1000;
    M2C_FIELD(&data_02086b28, s32 *, 0xC)  = 0x2000;
    M2C_FIELD(&data_02086b28, s32 *, 0x10) = 0x2000;
    M2C_FIELD(&data_02086b28, s32 *, 0x14) = 0x3000;
    M2C_FIELD(&data_02086b28, s32 *, 0x18) = 0x3000;
    M2C_FIELD(&data_02086b28, s32 *, 0x1C) = 0x4000;
    M2C_FIELD(&data_02086b28, s32 *, 0x20) = 0x4000;
}

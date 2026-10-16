#include "m2c.h"

M2C_UNK func_020527ec();                            /* extern */
M2C_UNK func_02056a50(M2C_UNK *);                   /* extern */
M2C_UNK func_02056a68(M2C_UNK *);                   /* extern */
M2C_UNK func_02046f04();                            /* extern */
M2C_UNK func_020471b4();                            /* extern */
M2C_UNK func_02047de4();                            /* extern */
extern M2C_UNK data_021ac140;
extern M2C_UNK data_021ac150;
extern M2C_UNK data_021ac15c;
extern M2C_UNK func_02046dc4;
extern M2C_UNK func_02046dfc;

void func_02046d00(void) {
    if (M2C_FIELD(&data_021ac140, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_021ac140, s32 *, 0xC) = 1;
    func_020527ec();
    M2C_FIELD(&data_021ac140, M2C_UNK **, 0x10) = &func_02046dc4;
    M2C_FIELD(&data_021ac140, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_021ac140, M2C_UNK **, 0x1C) = &func_02046dfc;
    M2C_FIELD(&data_021ac140, s32 *, 0x20)      = 0;
    func_02056a50(&data_021ac150);
    func_02056a68(&data_021ac15c);
    func_02046f04();
    func_02047de4();
    func_020471b4();
    M2C_FIELD(&data_021ac140, s8 *, 0)  = -1;
    M2C_FIELD(&data_021ac140, s32 *, 4) = 1;
}

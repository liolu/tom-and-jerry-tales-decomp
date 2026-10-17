#include "m2c.h"

M2C_UNK func_0203179c(M2C_UNK *);                   /* extern */
M2C_UNK func_02032604(M2C_UNK *);                   /* extern */
M2C_UNK func_02033200(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02033ad0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0203a4a8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0204089c(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0206c4c0;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;

void func_02028d68(void) {
    func_0204089c(&data_0206c4c0, &data_0206e6a4, &data_0206e698);
    func_0203a4a8(&data_0206e698, &data_0206e6a4);
    func_02033200(&data_0206e698, &data_0206e698);
    func_02033ad0(&data_0206e698, &data_0206e6a4);
    func_02032604(&data_0206e698);
    func_0203179c(&data_0206e698);
}

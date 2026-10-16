#include "m2c.h"

M2C_UNK func_020534f8();                            /* extern */
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02053650(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020589cc();                            /* extern */
M2C_UNK func_02058c9c(M2C_UNK);                     /* extern */
M2C_UNK func_02058d98();                            /* extern */
M2C_UNK func_02058ffc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021b38e0;
extern M2C_UNK data_021b39c0;
extern M2C_UNK func_02058f4c;
extern M2C_UNK func_02058f78;
extern M2C_UNK func_02058fe8;

void func_02058ce4(void) {
    if (M2C_FIELD(&data_021b38e0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_021b38e0, s32 *, 8) = 1;
    func_020589cc();
    M2C_FIELD(&data_021b38e0, s32 *, 0xC) = 0;
    func_020534f8();
    do {

    } while (func_02053650(0xD, 1) == 0);
    func_02053604(0xD, &func_02058f4c);
    func_02058d98();
    func_02053604(0xD, NULL);
    func_02053604(0xD, &func_02058f78);
    M2C_FIELD(&data_021b38e0, s32 *, 0x18) = 0;
    func_02058ffc(&data_021b39c0);
    func_02053604(0x11, &func_02058fe8);
    func_02058c9c(0);
}

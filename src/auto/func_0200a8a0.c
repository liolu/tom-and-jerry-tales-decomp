#include "m2c.h"

M2C_UNK func_020015f0();                            /* extern */
M2C_UNK func_02016e04();                            /* extern */
M2C_UNK func_020219d8(M2C_UNK);                     /* extern */
M2C_UNK func_020314d0();                            /* extern */
M2C_UNK func_020321ec();                            /* extern */
M2C_UNK func_0203253c();                            /* extern */
M2C_UNK func_02032bc8();                            /* extern */
M2C_UNK func_020330b4();                            /* extern */
M2C_UNK func_02033910(M2C_UNK *);                   /* extern */
M2C_UNK func_020352dc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0203a294();                            /* extern */
M2C_UNK func_0203b96c(M2C_UNK);                     /* extern */
M2C_UNK func_0203b980(M2C_UNK);                     /* extern */
M2C_UNK func_0203cd2c();                            /* extern */
M2C_UNK func_0203feb4(M2C_UNK *);                   /* extern */
M2C_UNK func_0203ff6c(M2C_UNK *);                   /* extern */
void *func_020401e8();                              /* extern */
M2C_UNK func_0204d600(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0204d760();                            /* extern */
extern M2C_UNK data_02063f84;
extern M2C_UNK data_02063fac;
extern M2C_UNK data_0206a394;
extern M2C_UNK data_0206a3a4;
extern M2C_UNK data_0206a3b0;
extern M2C_UNK data_0206e6a4;
extern M2C_UNK data_02086d08;

void func_0200a8a0(void) {
    void *temp_r4;

    func_020219d8(3);
    func_0204d600(0x04000050, 0x10, 1, 0xB, 4);
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00) | 0x1100);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0x1F00);
    func_0204d760();
    func_020314d0();
    func_020321ec();
    func_0203253c();
    func_0203a294();
    func_02032bc8();
    func_020330b4();
    func_020352dc(1, 0x3F, 1, 0x1F);
    func_02033910(&data_0206e6a4);
    func_0203b96c(0);
    func_0203b980(0);
    func_0203b96c(1);
    func_0203b980(0);
    M2C_FIELD(&data_02086d08, s32 *, 0x20) = 1;
    func_020015f0();
    func_0203cd2c();
    func_02016e04();
    func_0203ff6c(&data_02063fac);
    func_0203ff6c(&data_02063f84);
    func_0203feb4(&data_0206a394);
    temp_r4 = func_020401e8();
    func_0203feb4(&data_0206a3a4);
    M2C_FIELD(func_020401e8(), s32 *, 0x1C) = (s32) M2C_FIELD(temp_r4, s32 *, 0x18);
    func_0203feb4(&data_0206a3b0);
    M2C_FIELD(func_020401e8(), s32 *, 0x1C) = (s32) M2C_FIELD(temp_r4, s32 *, 0x18);
}

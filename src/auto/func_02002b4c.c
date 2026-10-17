#include "m2c.h"

extern M2C_UNK data_0206e9e8;
extern void *data_0206ea14;

void func_02002b4c(void) {
    M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x80) = (s32) M2C_FIELD(data_0206ea14, s32 *, 0xA0);
    M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x74) =
        (s32) M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x80);
}

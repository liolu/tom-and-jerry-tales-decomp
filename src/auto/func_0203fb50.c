#include "m2c.h"

M2C_UNK func_020499ac(M2C_UNK *, M2C_UNK);
s32 func_02049a18(M2C_UNK *);
extern M2C_UNK data_0206db50;
extern M2C_UNK data_020ba3e8;
extern M2C_UNK data_020ba3ec;
extern M2C_UNK data_020ba3f0;
extern M2C_UNK data_020ba3fc;

void func_0203fb50(void) {
    M2C_FIELD(&data_0206db50, s32 *, 0x18) = func_02049a18(&data_020ba3fc);
    M2C_FIELD(&data_0206db50, s32 *, 0x14) = func_02049a18(&data_020ba3e8);
    M2C_FIELD(&data_0206db50, s32 *, 0x10) = func_02049a18(&data_020ba3ec);
    M2C_FIELD(&data_0206db50, s32 *, 0xC)  = func_02049a18(&data_020ba3f0);
    func_020499ac(&data_020ba3fc, 0);
    func_020499ac(&data_020ba3e8, 0);
    func_020499ac(&data_020ba3ec, 0);
    func_020499ac(&data_020ba3f0, 0);
}

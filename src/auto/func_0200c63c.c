#include "m2c.h"

M2C_UNK func_020016a4();
M2C_UNK func_0200c7d4();
M2C_UNK func_0200c898(u16);
M2C_UNK func_020222b8(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020306c0(M2C_UNK);
s32 func_020306fc(M2C_UNK);
M2C_UNK func_0203ac18();
s32 func_0203adbc();
M2C_UNK func_0203adf8(s32, u16, M2C_UNK);
M2C_UNK func_0203ff1c(s32, M2C_UNK, M2C_UNK *);
M2C_UNK func_02040094(s32);
void *func_02040228();
M2C_UNK func_0204f490(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern u16 data_0206a554;
extern M2C_UNK data_0206a598;
extern M2C_UNK data_02086d90;
extern M2C_UNK data_02086da4;

void func_0200c63c(void) {
    void *temp_r4;

    temp_r4 = func_02040228();
    if (func_020306fc(3) != 0) {
        func_0204f490(&data_02086da4, &data_0206a598, 1);
        func_0203ff1c(M2C_FIELD(temp_r4, s32 *, 0x1C), 2, &data_02086da4);
        func_02040094(M2C_FIELD(temp_r4, s32 *, 0x18));
    }
    func_020016a4();
    if (M2C_FIELD(&data_02086d90, s32 *, 0x10) != 0) {
        func_0200c7d4();
        func_0200c898(data_0206a554);
        M2C_FIELD(&data_02086d90, s32 *, 0x10) = 0;
        func_020222b8(0, 8, 3);
    }
    if ((func_020306fc(9) != 0) && ((u32) data_0206a554 > 1U)) {
        data_0206a554 -= 1;
        func_0200c898(data_0206a554);
    }
    if ((func_020306fc(8) != 0) && ((s32) data_0206a554 < (s32) (func_0203adbc() - 1))) {
        data_0206a554 += 1;
        func_0200c898(data_0206a554);
    }
    if (func_020306c0(4) != 0) {
        M2C_FIELD(&data_02086d90, u16 *, 0) = (u16) (M2C_FIELD(&data_02086d90, u16 *, 0) + 0x100);
    }
    if (func_020306c0(5) != 0) {
        M2C_FIELD(&data_02086d90, u16 *, 0) = (u16) (M2C_FIELD(&data_02086d90, u16 *, 0) - 0x100);
    }
    func_0203adf8(M2C_FIELD(&data_02086d90, s32 *, 8), M2C_FIELD(&data_02086d90, u16 *, 0), 0);
    func_0203ac18();
}

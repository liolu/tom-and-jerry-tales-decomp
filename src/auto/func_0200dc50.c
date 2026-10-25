/* compiler: 2.0/sp1p5 -O1 */
#include "m2c.h"

M2C_UNK func_020015f0();                            /* extern */
M2C_UNK func_0200160c();                            /* extern */
M2C_UNK func_02001654(M2C_UNK);                     /* extern */
M2C_UNK func_020219d8(M2C_UNK);                     /* extern */
M2C_UNK func_02030f40(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020314d0();                            /* extern */
M2C_UNK func_020321ec();                            /* extern */
M2C_UNK func_0203253c();                            /* extern */
M2C_UNK func_02032bc8();                            /* extern */
M2C_UNK func_020330b4();                            /* extern */
M2C_UNK func_020352dc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0203a294();                            /* extern */
M2C_UNK func_0203c700(M2C_UNK *, M2C_UNK *, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0203cd2c();                            /* extern */
M2C_UNK func_0203cd5c(s32);                         /* extern */
M2C_UNK func_0203cf6c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0203de64(M2C_UNK);                     /* extern */
M2C_UNK func_0203de74(M2C_UNK);                     /* extern */
M2C_UNK func_0203de84(M2C_UNK);                     /* extern */
M2C_UNK func_0203de98(s32);                         /* extern */
extern M2C_UNK data_0206a890;
extern M2C_UNK data_0206a8a8;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
typedef struct {
    s32 a;
    s16 b;
    s16 c;
    s32 d;
    s32 e;
} Q;
extern Q data_02086dfc;
extern M2C_UNK data_02086e08;
extern s32 data_020b8b44;

void func_0200dc50(void) {
    func_0200160c();
    func_02001654(3);
    func_020219d8(4);
    func_020314d0();
    func_020321ec();
    func_0203253c();
    func_0203a294();
    func_02032bc8();
    func_020330b4();
    func_020352dc(1, 0x3F, 1, 0x1F);
    data_02086dfc.d = 1;
    func_020015f0();
    func_02030f40(&data_0206a890, &data_02086e08, &data_0206e6a4, &data_0206e698);
    func_0203c700(&data_0206a8a8, &data_0206e698, 0xD, 1, 1, 1, 1);
    func_0203cd2c();
    func_0203cf6c(0, 4, 0, 0, 0xC, 0, 0, 0);
    func_0203cd5c(data_020b8b44);
    func_0203de64(0);
    func_0203de98(data_02086dfc.e);
    func_0203de84(0);
    func_0203de74(0);
    data_02086dfc.b = 0;
}

/* compiler: 2.0/sp1p5 -O1 */
#include "m2c.h"

M2C_UNK func_020015f0();
M2C_UNK func_0200160c();
M2C_UNK func_02001654(M2C_UNK);
M2C_UNK func_02016e04();
M2C_UNK func_020219d8(M2C_UNK);
M2C_UNK func_02030f40(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK func_020314d0();
M2C_UNK func_020321ec();
M2C_UNK func_0203253c();
M2C_UNK func_02032bc8();
M2C_UNK func_020330b4();
M2C_UNK func_02033910(M2C_UNK *);
M2C_UNK func_020352dc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0203a294();
M2C_UNK func_0203cd2c();
M2C_UNK func_0203cd5c(s32);
M2C_UNK func_0203cf6c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_0203cff0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32);
M2C_UNK func_0203d498(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, void *);
M2C_UNK func_0203de64(M2C_UNK);
M2C_UNK func_0203de74(M2C_UNK);
M2C_UNK func_0203de84(M2C_UNK);
M2C_UNK func_0203de98(s32);
extern M2C_UNK data_0206c528;
extern M2C_UNK data_0206c540;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_0206e6a4;
extern M2C_UNK data_02087e98;
extern M2C_UNK data_02087ea0;
extern s32 data_020b8b44[];

void func_02028f80(void) {
    func_0200160c();
    func_02001654(6);
    func_020219d8(4);
    {
        s32 *b = (s32 *) 0x04000000;
        s32 v  = *b;
        s32 *q = (s32 *) 0x04001000;
        v &= ~0xE000;
        *b = v;
        *q &= ~0xE000;
        *b = (*b & ~0x1F00) | 0x300;
    }
    func_020314d0();
    func_020321ec();
    func_0203253c();
    func_0203a294();
    func_02032bc8();
    func_020330b4();
    func_020352dc(1, 0x3F, 1, 0x1F);
    func_02033910(&data_0206e6a4);
    M2C_FIELD(&data_02087e98, s32 *, 4) = 1;
    func_020015f0();
    func_02030f40(&data_0206c528, &data_02087ea0, &data_0206e6a4, &data_0206e698);
    func_0203cd2c();
    func_0203cf6c(1, 4, 0, 0, 0xC, 0, 0, 0);
    func_0203cff0(0, 1, 0, 1, 0xC, 0, 1);
    {
        void *a = &data_0206c540;
        void *e = data_020b8b44;
        void *c = &data_0206e698;
        func_0203d498(a, c, 0, 1, e);
    }
    func_0203cd5c(data_020b8b44[0]);
    func_0203cd5c(data_020b8b44[10]);
    func_0203de64(1);
    func_0203de98(M2C_FIELD(&data_02087e98, s32 *, 8));
    func_0203de84(0);
    func_0203de74(0);
    func_02016e04();
}

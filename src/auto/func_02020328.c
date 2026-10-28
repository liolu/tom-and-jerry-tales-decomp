#include "m2c.h"

s32 func_020204b8(s32, u8, u8, u8, s32, s32);
s32 func_0202bff4(M2C_UNK, s32);
s32 func_0202c048(u16, s32);
M2C_UNK func_0203d740(M2C_UNK *, u8, u8, s32, s32, s32, M2C_UNK *);
M2C_UNK func_0204f490(M2C_UNK *, M2C_UNK *, s32);
extern s32 data_020692ec;
extern M2C_UNK data_0206b25c;
extern M2C_UNK data_0206b26c;
extern M2C_UNK data_0206b27c;
extern M2C_UNK data_0206b704;
extern s32 data_0206e690;
extern M2C_UNK data_020875a8;
extern M2C_UNK data_0208770c;
extern M2C_UNK data_0208772c;
extern M2C_UNK data_0208774c;
extern M2C_UNK data_020b8b6c;

u8 func_02020328(void) {
    u8 var_r0;

    func_0204f490(&data_0208774c, &data_0206b704, func_0202bff4(3, data_020692ec));
    func_0204f490(&data_0208772c, &data_0206b704, func_0202bff4(2, data_020692ec));
    func_0204f490(&data_0208770c, &data_0206b704, func_0202bff4(1, data_020692ec));
    func_0203d740(&data_0208774c, M2C_FIELD(&data_0206b25c, u8 *, 9), M2C_FIELD(&data_0206b26c, u8 *, 9), data_0206e690, 0, 0,
                  &data_020b8b6c);
    func_0203d740(&data_0208772c, M2C_FIELD(&data_0206b25c, u8 *, 0xA), M2C_FIELD(&data_0206b26c, u8 *, 0xA), data_0206e690, 0,
                  0, &data_020b8b6c);
    func_0203d740(&data_0208770c, M2C_FIELD(&data_0206b25c, u8 *, 0xB), M2C_FIELD(&data_0206b26c, u8 *, 0xB), data_0206e690, 0,
                  0, &data_020b8b6c);
    if (func_020204b8(func_0202c048((u16) M2C_FIELD(&data_020875a8, s32 *, 0x3C), data_020692ec),
                      M2C_FIELD(&data_0206b25c, u8 *, 0xC), M2C_FIELD(&data_0206b26c, u8 *, 0xC),
                      M2C_FIELD(&data_0206b27c, u8 *, 9), 0, 1) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}

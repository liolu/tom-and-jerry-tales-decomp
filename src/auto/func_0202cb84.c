/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020163d4();
extern M2C_UNK data_0206e6d4;

void func_0202cb84(void) {
    M2C_FIELD(&data_0206e6d4, s32 *, 0x54) = (s32) M2C_FIELD(&data_0206e6d4, s32 *, 0x94);
    M2C_FIELD(&data_0206e6d4, s32 *, 0x58) = (s32) M2C_FIELD(&data_0206e6d4, s32 *, 0x98);
    func_020163d4();
}

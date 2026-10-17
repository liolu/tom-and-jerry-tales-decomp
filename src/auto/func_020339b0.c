#include "m2c.h"

s32 func_0203382c(M2C_UNK);                         /* extern */
s32 func_0205bfd4();                                /* extern */
M2C_UNK func_0205bff0(s32, M2C_UNK);                /* extern */
extern u16 data_0208ecd4;
extern M2C_UNK data_0208ece4;
extern M2C_UNK data_0208ed9c;

s32 func_020339b0(M2C_UNK arg0) {
    s32 temp_r0_2;
    u16 temp_r0;

    if (func_0205bfd4() == 0) {
        return -1;
    }
    temp_r0_2 = func_0203382c(arg0);
    if (temp_r0_2 >= 0) {
        return temp_r0_2;
    }
    func_0205bff0((data_0208ecd4 * 0xBC) + (s32) &data_0208ece4 + 0xA4, arg0);
    temp_r0                                                   = data_0208ecd4;
    *((M2C_UNK *) ((s8 *) &data_0208ed9c + (temp_r0 * 0xBC))) = 1;
    data_0208ecd4                                             = temp_r0 + 1;
    return (s32) temp_r0;
}

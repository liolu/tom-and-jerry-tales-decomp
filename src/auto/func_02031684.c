#include "m2c.h"
s32 func_02032180(u16);
void func_02051a48(void);
extern u8 data_0208876c[];
extern u8 data_02088774[];
extern u8 data_0208877c[];
s32 func_02031684(s32 arg0, u32 arg1) {
    s32 off = arg0 * 0x2C;
    if ((s8) * (s32 *) (data_0208876c + off) == 7) {
        func_02051a48();
    }
    if (arg1 >= *(u16 *) (data_0208877c + off)) {
        func_02051a48();
    }
    return arg1 * func_02032180(*(u16 *) (data_0208877c + 2 + off)) + *(s32 *) (data_02088774 + off);
}

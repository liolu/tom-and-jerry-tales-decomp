#include "m2c.h"
extern u8 data_02087808[];
extern u8 data_0208780c[];
void func_02051ee8(void *, void *, s32);
void func_02027730(s32 arg0) {
    u8 *pal = (u8 *) 0x05000200;
    if (arg0 == 0) {
        func_02051ee8(data_02087808, pal + 2 + 0x100, 8);
        return;
    }
    func_02051ee8(data_0208780c, pal + 2 + 0x100, 4);
    func_02051ee8(data_02087808, pal + 6 + 0x100, 4);
}

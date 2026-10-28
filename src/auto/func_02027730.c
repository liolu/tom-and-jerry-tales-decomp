#include "m2c.h"
extern u8 data_02087808[];
extern u8 data_0208780c[];
void MIi_CpuCopy16(void *, void *, s32);
void func_02027730(s32 arg0) {
    u8 *pal = (u8 *) 0x05000200;
    if (arg0 == 0) {
        MIi_CpuCopy16(data_02087808, pal + 2 + 0x100, 8);
        return;
    }
    MIi_CpuCopy16(data_0208780c, pal + 2 + 0x100, 4);
    MIi_CpuCopy16(data_02087808, pal + 6 + 0x100, 4);
}

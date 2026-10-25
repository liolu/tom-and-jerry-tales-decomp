#include "m2c.h"
extern u8 data_0208706c[];
extern u8 data_0208705c[];
u8 *func_02015fb4(u32 arg0) {
    u8 i    = 0;
    s32 off = data_0208705c[1] * 8;
    u8 n    = *(s16 *) (data_0208706c + off);
    if (n != 0) {
        do {
            u8 *e = *(u8 **) ((u8 *) data_0208706c + off + 4) + i * 0x6C;
            if (*(u16 *) (e + 0xC) == arg0) {
                return e;
            }
            i++;
        } while (i < n);
    }
    return 0;
}

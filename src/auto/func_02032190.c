#include "m2c.h"

s32 STD_CompareString(void *, void *);
extern u8 data_0208872c[];
extern u8 data_0208876c[];

s32 func_02032190(void *arg0) {
    s32 i;
    u8 *p;
    i = 0;
    if ((s32) * (u16 *) (data_0208872c + 2) > 0) {
        p = data_0208876c;
        do {
            if (STD_CompareString(p + 0x1C, arg0) == 0) {
                return i;
            }
            i++;
            p += 0x2C;
        } while (i < *(u16 *) (data_0208872c + 2));
    }
    return -1;
}

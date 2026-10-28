#include "m2c.h"
s32 STD_CompareString(void *, void *);
extern u16 data_0208e190;
extern u8 data_0208e194[];
s32 func_02033058(void *arg0) {
    s32 i = 0;
    u8 *p;
    if ((s32) data_0208e190 > 0) {
        p = data_0208e194;
        do {
            if (STD_CompareString(p + 8, arg0) == 0) {
                return i;
            }
            i++;
            p += 24;
        } while (i < (s32) data_0208e190);
    }
    return -1;
}

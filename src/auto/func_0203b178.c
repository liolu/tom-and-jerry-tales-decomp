#include "m2c.h"
extern u8 data_020b8144[];
extern u8 data_020b8140[];
s32 STD_CompareString(void *, void *);
s32 func_0203b178(void *arg0) {
    s32 i;
    u8 *p;
    i = 0;
    if ((s32) * (u16 *) (data_020b8140 + 2) > 0) {
        p = data_020b8144;
        do {
            if (STD_CompareString(p + 0x1c, arg0) == 0) {
                return i;
            }
            i++;
            p += 0x2c;
        } while (i < (s32) * (u16 *) (data_020b8140 + 2));
    }
    return -1;
}

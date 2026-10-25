#include "m2c.h"
extern s32 func_0203b160(void);
extern s32 func_0203f33c(void);
extern u16 data_020b7fe0;
extern u32 data_020b8028[];
void func_02009df0(u16 *a) {
    s32 v;
    switch (a[1]) {
        case 0:
            if (func_0203b160() == 0) {
                v = 0;
            } else {
                v = func_0203f33c();
            }
            data_020b8028[(u16) v] = 1;
            data_020b7fe0          = 0;
            return;
        case 15:
            data_020b7fe0++;
            return;
        default:
            data_020b7fe0++;
            return;
    }
}

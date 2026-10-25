#include "m2c.h"
extern u16 data_020a0284;
extern void func_0203525c(u16);
void func_02035208(s32 arg0) {
    u16 i;
    for (i = 0; i < data_020a0284; i++) {
        func_0203525c(i);
    }
    if (arg0 != 0) {
        data_020a0284 = 0;
    }
}

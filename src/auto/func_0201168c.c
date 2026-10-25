#include "m2c.h"
void func_0203c24c(u16, s32, s32);
void func_0201168c(s32 a, u32 n) {
    u16 i = 0;
    if (n == 0) {
        return;
    }
    do {
        func_0203c24c((u16) (a + i), 0xFF, 0);
        i++;
    } while (n > i);
}

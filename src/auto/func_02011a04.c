#include "m2c.h"
typedef struct {
    u8 pad[0x84];
    s32 f84;
} T;
typedef struct {
    u8 pad[0x10];
    s32 f10;
} U;
extern U data_0206acc8;
extern T data_0206e6d4;
void func_02011a04(s32 arg0) {
    data_0206acc8.f10 = (s32) (((s64) arg0 * data_0206e6d4.f84 + 0x800) >> 12);
}

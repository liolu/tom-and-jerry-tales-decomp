#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    u8 *p;
} G;
extern G data_0206e9e8;
void func_020029fc(void) {
    s32 *a = (s32 *) (data_0206e9e8.p + 0x2C);
    a[0]   = 0;
    a[1]   = 0;
    a[2]   = 0x5000;
    {
        s32 *b = (s32 *) (data_0206e9e8.p + 0x68);
        b[0]   = 0;
        b[1]   = 0;
        b[2]   = 0;
    }
    {
        s32 *c = (s32 *) (data_0206e9e8.p + 0x14);
        c[0]   = 0;
        c[1]   = 0x1000;
        c[2]   = 0;
    }
    *(s32 *) (data_0206e9e8.p + 0xA4) = 0x23A;
    *(s32 *) (data_0206e9e8.p + 0xA8) = 0xFD8;
    *(s32 *) (data_0206e9e8.p + 0xAC) = 0x28;
    *(s32 *) (data_0206e9e8.p + 0xB0) = 0x9C4000;
    *(s32 *) (data_0206e9e8.p + 0xCC) = 0x2B8;
}

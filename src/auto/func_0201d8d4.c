#include "m2c.h"

typedef struct {
    u8 pad[0x54];
    u32 f;
} S;
extern S data_0206e6d4;

s32 func_0201d8d4(u32 n) {
    S *p;
    switch (n) {
        case 1:
            p = &data_0206e6d4;
            p->f |= 0x2000;
            break;
        case 2:
            p = &data_0206e6d4;
            p->f |= 0x4000;
            break;
        case 3:
            p = &data_0206e6d4;
            p->f |= 0x8000;
            break;
        case 4:
            p = &data_0206e6d4;
            p->f |= 0x10000;
            break;
    }
}

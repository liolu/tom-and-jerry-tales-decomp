#include "m2c.h"
typedef struct {
    u8 pad[0x54];
    u32 f;
} D;
extern D data_0206e6d4;
s32 func_0201d948(s32 a) {
    switch (a) {
        case 1:
            data_0206e6d4.f |= 0x20000;
            break;
        case 2:
            data_0206e6d4.f |= 0x40000;
            break;
        case 3:
            data_0206e6d4.f |= 0x80000;
            break;
    }
}

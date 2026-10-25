#include "m2c.h"
extern u32 data_0206e6d4[];
s32 func_0201d9a4(s32 a) {
    switch (a) {
        case 1:
            data_0206e6d4[0x15] |= 0x100000;
            break;
        case 2:
            data_0206e6d4[0x15] |= 0x200000;
            break;
    }
    return a;
}

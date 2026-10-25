#include "m2c.h"

typedef struct S {
    u8 pad[0x54];
    u32 f0 : 26;
    u32 c2 : 1;
    u32 c1 : 1;
    u32 c3 : 1;
    u32 c4 : 1;
    u32 rest : 2;
} S;
extern S data_0206e6d4;

u8 func_0201d7e4(u32 arg0) {
    switch (arg0) {
        case 0:
            return 1;
        case 2:
            return data_0206e6d4.c2;
        case 1:
            return data_0206e6d4.c1;
        case 3:
            return data_0206e6d4.c3;
        case 4:
            return data_0206e6d4.c4;
    }
    return 0;
}

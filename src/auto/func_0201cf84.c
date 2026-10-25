#include "m2c.h"

typedef struct {
    u8 pad[0x1f];
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
    u8 b3 : 1;
    u8 b4 : 1;
    u8 b5 : 1;
    u8 b6 : 1;
    u8 b7 : 1;
} S;
extern S data_0206e6d4;

u32 func_0201cf84(u32 arg0) {
    switch (arg0) {
        case 1:
            return data_0206e6d4.b0;
        case 0:
            return data_0206e6d4.b1;
        case 2:
            return data_0206e6d4.b2;
        case 3:
            return data_0206e6d4.b4;
        case 5:
            return data_0206e6d4.b3;
        case 4:
            return data_0206e6d4.b5;
        case 6:
            return 1;
    }
    return 0;
}

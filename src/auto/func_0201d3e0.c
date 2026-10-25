#include "m2c.h"

typedef struct {
    u8 pad[0x54];
    u32 f;
    u8 g;
} D;
extern D data_0206e6d4;

u8 func_0201d3e0(u32 n) {
    u8 r = 0;
    switch (n) {
        case 0:
            r = 5 - (((data_0206e6d4.f << 0x12) >> 0x1F) + ((data_0206e6d4.f << 0x11) >> 0x1F) +
                     ((data_0206e6d4.f << 0x10) >> 0x1F) + ((data_0206e6d4.f << 0xF) >> 0x1F));
            break;
        case 1:
            r = 4 -
                (((data_0206e6d4.f << 0xE) >> 0x1F) + ((data_0206e6d4.f << 0xD) >> 0x1F) + ((data_0206e6d4.f << 0xC) >> 0x1F));
            break;
        case 2:
            r = 3 - (((data_0206e6d4.f << 0xB) >> 0x1F) + ((data_0206e6d4.f << 0xA) >> 0x1F));
            break;
        case 3:
            r = 4 - (((data_0206e6d4.f << 9) >> 0x1F) + ((data_0206e6d4.f << 8) >> 0x1F) + ((data_0206e6d4.f << 7) >> 0x1F));
            break;
        case 4:
            r = 2 - ((data_0206e6d4.f << 6) >> 0x1F);
            break;
        case 7:
            r = 5 - (((data_0206e6d4.f << 5) >> 0x1F) + ((data_0206e6d4.f << 4) >> 0x1F) + ((data_0206e6d4.f << 3) >> 0x1F) +
                     ((data_0206e6d4.f << 2) >> 0x1F));
            break;
        case 8:
            r = 3 - (((u32) (data_0206e6d4.g << 0x1F) >> 0x1F) + ((data_0206e6d4.f << 1) >> 0x1F));
            break;
    }
    return r - 1;
}

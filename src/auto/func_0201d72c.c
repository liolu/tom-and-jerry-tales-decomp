#include "m2c.h"

typedef struct {
    u8 pad[0x54];
    u32 f;
} S;
extern S data_0206e6d4;

u8 func_0201d72c(u32 arg0) {
    switch (arg0) {
        case 0:
            return 1;
        case 1:
            return (u8) ((u32) (data_0206e6d4.f << 9) >> 0x1F);
        case 2:
            return (u8) ((u32) (data_0206e6d4.f << 8) >> 0x1F);
        case 3:
            return (u8) ((u32) (data_0206e6d4.f << 7) >> 0x1F);
    }
    return 0;
}

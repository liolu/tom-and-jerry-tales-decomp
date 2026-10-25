#include "m2c.h"

void func_02004e38(void *, void *);
extern void (*data_02069a94[])(void *, void *, u32);
extern void (*data_02069a74[])(void);
extern u8 data_0206a208[];
extern u8 data_0206a268[];
extern u8 data_0206a278[];
extern u8 data_0206a280[];
extern u8 *data_0206ea14;
extern u8 data_02086a88[];

void func_02004cd0(u32 id, void *a, void *b) {
    u8 idx;
    if (id >= 0x5D) {
        return;
    }
    if (data_02069a94[id] != 0) {
        data_02069a94[id](a, b, id);
    }
    idx = data_0206a208[id];
    if (*(u16 *) (data_0206ea14 + 0x1860) == 0 && *(u16 *) (data_02086a88 + 0x10) == 0) {
        if (data_02069a74[idx] == 0) {
            return;
        }
        switch (id) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
            case 7:
            case 8:
            case 9:
                break;
            default:
                break;
            case 5:
                func_02004e38(data_0206a268, a);
                break;
            case 11:
                func_02004e38(data_0206a278, a);
                break;
            case 10:
                func_02004e38(data_0206a280, a);
                break;
        }
        *(u16 *) (data_02086a88 + 0x10) = 0x3E;
        data_02069a74[idx]();
    }
}

#include "m2c.h"

typedef struct T {
    u8 pad[6];
    u16 t6;
    u16 t8;
    u16 ta;
} T;

extern T data_020880ec;

s32 func_0202c1e4(u32 arg0, u32 arg1) {
    switch (arg1) {
        case 2:
            if (arg0 <= data_020880ec.ta && arg0 != 0) {
                return 3;
            }
            if (arg0 <= data_020880ec.t8 && arg0 != 0) {
                return 2;
            }
            if (arg0 <= data_020880ec.t6 && arg0 != 0) {
                return 1;
            }
            return 0;
        case 3:
        case 4:
            if (arg0 >= data_020880ec.ta) {
                return 3;
            }
            if (arg0 >= data_020880ec.t8) {
                return 2;
            }
            if (arg0 >= data_020880ec.t6) {
                return 1;
            }
            return 0;
        case 1:
            return 0;
    }
    return 0;
}

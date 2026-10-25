#include "m2c.h"

void func_02051a48(void);

s32 func_02031610(s32 *arg0) {
    if (arg0 == NULL) {
        func_02051a48();
    }
    switch ((s8) *arg0) {
        case 2:
        case 5:
            return 2;
        case 3:
            return 4;
        case 1:
        case 4:
        case 6:
            return 8;
        case 7:
            return 0x10;
    }
    func_02051a48();
    return 0;
}

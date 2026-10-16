#include "m2c.h"

s32 func_02058a2c();                                /* extern */
s32 func_02058a44();                                /* extern */

s32 func_02058a04(void) {
    if ((func_02058a44() != 0) && (func_02058a2c() == 0)) {
        return 1;
    }
    return 0;
}

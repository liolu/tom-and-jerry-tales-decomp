#include "m2c.h"

s32 func_02052d38();                                /* extern */
s32 func_02052d74();                                /* extern */

s32 func_02052db0(void) {
    s32 temp_r4;

    temp_r4 = func_02052d38();
    return (0x100 - temp_r4) - func_02052d74();
}

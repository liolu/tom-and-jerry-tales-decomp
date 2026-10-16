#include "m2c.h"

s32 func_02052920(M2C_UNK);                         /* extern */
M2C_UNK func_02052af0(M2C_UNK);                     /* extern */
s32 func_02052db0();                                /* extern */
M2C_UNK func_02052e50();                            /* extern */
s32 func_02052e78();                                /* extern */
s32 func_02052ec0();                                /* extern */

s32 func_02052a30(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02052ec0() == 0) {
        return 0;
    }
    temp_r0_3 = func_02052e78();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02052db0() > 0) {
        do {

        } while (func_02052920(0) != 0);
        temp_r0_2 = func_02052e78();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02052af0(1);
block_12:
    func_02052e50();
    do {
        func_02052920(1);
        temp_r0 = func_02052e78();
    } while (temp_r0 == 0);
    return temp_r0;
}

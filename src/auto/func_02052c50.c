#include "m2c.h"

s32 func_02052920();                         /* extern */
s32 func_02052ce8();                         /* extern */
M2C_UNK func_02052e50();                            /* extern */

void func_02052c50(M2C_UNK arg0) {
    if (func_02052ce8() != 0) {
        return;
    }
    do {

    } while (func_02052920(0) != 0);
    if (func_02052ce8(arg0) != 0) {
        return;
    }
    func_02052e50();
    if (func_02052ce8(arg0) != 0) {
        return;
    }
    do {
        func_02052920(1);
    } while (func_02052ce8(arg0) == 0);
}

#include "m2c.h"

s32 func_02050d4c(M2C_UNK);                         /* extern */
s32 func_02050e30(M2C_UNK);                         /* extern */
M2C_UNK func_02050ed8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02050eec(M2C_UNK, s32);                /* extern */
extern s32 data_021b06dc;

void func_02050bb4(void) {
    if (data_021b06dc != 0) {
        return;
    }
    data_021b06dc = 1;
    func_02050ed8(0, func_02050d4c(0));
    func_02050eec(0, func_02050e30(0));
    func_02050eec(2, 0);
    func_02050ed8(2, 0);
    func_02050ed8(3, func_02050d4c(3));
    func_02050eec(3, func_02050e30(3));
    func_02050ed8(4, func_02050d4c(4));
    func_02050eec(4, func_02050e30(4));
    func_02050ed8(5, func_02050d4c(5));
    func_02050eec(5, func_02050e30(5));
    func_02050ed8(6, func_02050d4c(6));
    func_02050eec(6, func_02050e30(6));
}

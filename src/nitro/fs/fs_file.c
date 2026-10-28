#include "m2c.h"

M2C_UNK func_020552d4();
extern s32 is_init;

void FS_Init(s32 arg0) {
    if (is_init != 0) {
        return;
    }
    is_init = 1;
    func_020552d4(arg0);
}

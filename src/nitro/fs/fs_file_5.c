#include "m2c.h"

M2C_UNK func_02054738(void *, M2C_UNK);
s32 func_02054c84(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 func_02055144(M2C_UNK, M2C_UNK *);

void FS_ReadDir(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_02054738(arg0, 3);
}

s32 FS_FindDir(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[12];

    if (func_02054c84(arg0, arg1, 0, sp0) == 0) {
        return 0;
    }
    return func_02055144(arg0, sp0);
}

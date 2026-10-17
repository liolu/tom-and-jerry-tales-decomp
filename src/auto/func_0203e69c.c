#include "m2c.h"

M2C_UNK func_0203cf2c(s32, s32);                    /* extern */
M2C_UNK func_0203d098(void *);                      /* extern */
M2C_UNK func_0203e034(s32, s32);                    /* extern */
M2C_UNK func_0203e038(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203e0c4(s32, s32, s32);               /* extern */
M2C_UNK func_0203e12c(void *);                      /* extern */
M2C_UNK func_0203e3f4(void *);                      /* extern */

void func_0203e69c(void *arg0, M2C_UNK arg1) {
    func_0203e034(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0));
    func_0203e0c4(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    func_0203e038(arg0, arg1);
    func_0203e12c(arg0);
    func_0203d098(arg0);
    func_0203e3f4(arg0);
    func_0203cf2c(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x10));
}

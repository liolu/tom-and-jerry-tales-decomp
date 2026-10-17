#include "m2c.h"

void *func_0203a58c(s16);                           /* extern */
void *func_0203a95c(s16);                           /* extern */
M2C_UNK func_0203b098(void *, M2C_UNK);             /* extern */

void func_02041ab8(void *arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;
    void *temp_r5;

    temp_r5 = func_0203a95c(M2C_FIELD(arg0, s16 *, 0));
    temp_r0 = func_0203a58c(M2C_FIELD(arg0, s16 *, 2));
    func_0203b098(temp_r0, arg2);
    M2C_FIELD(temp_r0, s32 *, 8)    = (s32) (M2C_FIELD(temp_r0, s32 *, 8) & ~1);
    M2C_FIELD(temp_r5, s32 *, 0x54) = (s32) M2C_FIELD(temp_r0, s32 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 6)       = (u16) (M2C_FIELD(arg0, u16 *, 6) + 1);
    M2C_FIELD(temp_r5, s32 *, 0x54) = (s32) M2C_FIELD(temp_r0, s32 *, 0x1C);
}

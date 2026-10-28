#include "m2c.h"

M2C_UNK SND_SetTrackVolume(u8, M2C_UNK, s16);
extern M2C_UNK data_020686c0;

void func_02047108(void **arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    SND_SetTrackVolume(M2C_FIELD(temp_r0, u8 *, 0x3C), arg1, *((u16 *) ((s8 *) &data_020686c0 + (arg2 * 2))));
}

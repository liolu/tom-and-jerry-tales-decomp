#include "m2c.h"

M2C_UNK SND_SetTrackPan(u8);

void func_02047134(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    SND_SetTrackPan(M2C_FIELD(temp_r0, u8 *, 0x3C));
}

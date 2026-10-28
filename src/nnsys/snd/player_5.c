#include "m2c.h"

M2C_UNK SND_SetPlayerChannelPriority(u8);

void NNS_SndPlayerSetInitialVolume(void **arg0, s8 arg1) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x40) = arg1;
    }
}

void NNS_SndPlayerSetChannelPriority(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    SND_SetPlayerChannelPriority(M2C_FIELD(temp_r0, u8 *, 0x3C));
}

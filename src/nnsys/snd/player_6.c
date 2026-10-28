#include "m2c.h"

void NNS_SndPlayerSetSeqNo(void **arg0, s16 arg1) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == NULL) {
        return;
    }
    M2C_FIELD(temp_r3, s16 *, 0x34) = 1;
    M2C_FIELD(*arg0, s16 *, 0x38)   = arg1;
}

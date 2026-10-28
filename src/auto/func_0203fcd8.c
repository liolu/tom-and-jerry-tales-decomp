#include "m2c.h"

void *NNS_SndArcGetStrmInfo();

u8 func_0203fcd8(void) {
    void *temp_r0;

    temp_r0 = NNS_SndArcGetStrmInfo();
    if (temp_r0 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r0, u8 *, 6);
}

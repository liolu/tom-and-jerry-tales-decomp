#include "m2c.h"

s32 NNS_SndArcStrmPrepare();
M2C_UNK NNS_SndArcStrmStartPrepared(M2C_UNK);

s32 NNS_SndArcStrmStart(M2C_UNK arg0) {
    if (NNS_SndArcStrmPrepare() == 0) {
        return 0;
    }
    NNS_SndArcStrmStartPrepared(arg0);
    return 1;
}

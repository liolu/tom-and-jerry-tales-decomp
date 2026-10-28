#include "m2c.h"

s32 NNS_SndPlayerCountPlayingSeqBySeqNo();
extern M2C_UNK data_020ba3e0;

s32 func_0203f660(s32 arg0) {
    if (M2C_FIELD(&data_020ba3e0, s32 *, 4) == 0) {
        return 0;
    }
    return NNS_SndPlayerCountPlayingSeqBySeqNo(arg0);
}

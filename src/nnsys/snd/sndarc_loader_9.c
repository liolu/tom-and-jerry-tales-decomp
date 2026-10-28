#include "m2c.h"

M2C_UNK SND_InvalidateSeqData(s32, s32);
M2C_UNK DisposeCallback(s32, M2C_UNK, M2C_UNK);

void SeqDisposeCallback(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    DisposeCallback(arg0, arg2, arg3);
    SND_InvalidateSeqData(arg0, arg0 + arg1);
}

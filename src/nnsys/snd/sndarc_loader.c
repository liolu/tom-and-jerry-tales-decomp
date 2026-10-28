#include "m2c.h"

s32 NNSi_SndArcLoadSeq(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 NNSi_SndArcLoadSeqArc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 NNSi_SndArcLoadBank(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

s32 NNS_SndArcLoadSeq(M2C_UNK arg0, M2C_UNK arg1) {
    if (NNSi_SndArcLoadSeq(arg0, 0xFF, arg1, 1, 0) == 0) {
        return 1;
    }
    return 0;
}

s32 NNS_SndArcLoadSeqArc(M2C_UNK arg0, M2C_UNK arg1) {
    if (NNSi_SndArcLoadSeqArc(arg0, 0xFF, arg1, 1, 0) == 0) {
        return 1;
    }
    return 0;
}

s32 NNS_SndArcLoadBank(M2C_UNK arg0, M2C_UNK arg1) {
    if (NNSi_SndArcLoadBank(arg0, 0xFF, arg1, 1, 0) == 0) {
        return 1;
    }
    return 0;
}

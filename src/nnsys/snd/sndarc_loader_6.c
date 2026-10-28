#include "m2c.h"

s32 NNS_SndArcGetCurrent();
s32 NNS_SndArcGetFileAddress();
M2C_UNK NNS_SndArcSetFileAddress(M2C_UNK, s32);
s32 NNSi_SndArcLoadFile(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32);
extern M2C_UNK SeqDisposeCallback;
extern M2C_UNK BankDisposeCallback;
extern M2C_UNK WaveArcDisposeCallback;

s32 LoadSeq(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = NNS_SndArcGetFileAddress();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = NNS_SndArcGetCurrent();
        }
        var_r4 = NNSi_SndArcLoadFile(arg0, &SeqDisposeCallback, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            NNS_SndArcSetFileAddress(arg0, var_r4);
        }
    }
    return var_r4;
}

s32 LoadSeqArc(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = NNS_SndArcGetFileAddress();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = NNS_SndArcGetCurrent();
        }
        var_r4 = NNSi_SndArcLoadFile(arg0, &SeqDisposeCallback, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            NNS_SndArcSetFileAddress(arg0, var_r4);
        }
    }
    return var_r4;
}

s32 LoadBank(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = NNS_SndArcGetFileAddress();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = NNS_SndArcGetCurrent();
        }
        var_r4 = NNSi_SndArcLoadFile(arg0, &BankDisposeCallback, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            NNS_SndArcSetFileAddress(arg0, var_r4);
        }
    }
    return var_r4;
}

s32 LoadWaveArc(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = NNS_SndArcGetFileAddress();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = NNS_SndArcGetCurrent();
        }
        var_r4 = NNSi_SndArcLoadFile(arg0, &WaveArcDisposeCallback, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            NNS_SndArcSetFileAddress(arg0, var_r4);
        }
    }
    return var_r4;
}

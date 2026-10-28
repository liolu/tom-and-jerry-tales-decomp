#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021ae9ac;
s32 NNS_FndGetNextListObject(void *, s32);
extern M2C_UNK sPrioList;

void NNS_SndHandleReleaseSeq(s32 **arg0) {
    s32 *temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 != NULL) {
        *temp_r2 = 0;
        *arg0    = NULL;
    }
}

u16 NNS_SndPlayerCountPlayingSeqByPlayerNo(s32 arg0) {
    return *((u16 *) ((s8 *) &data_021ae9ac + (arg0 * 0x24)));
}

s32 NNS_SndPlayerCountPlayingSeqBySeqNo(s32 arg0) {
    s32 var_r1;
    s32 var_r5;

    var_r5 = 0;
    var_r1 = NNS_FndGetNextListObject(&sPrioList, 0);
    if (var_r1 != 0) {
        do {
            if ((M2C_FIELD(var_r1, u16 *, 0x34) == 1) && (M2C_FIELD(var_r1, u16 *, 0x38) == arg0)) {
                var_r5 += 1;
            }
            var_r1 = NNS_FndGetNextListObject(&sPrioList, var_r1);
        } while (var_r1 != 0);
    }
    return var_r5;
}

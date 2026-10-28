#include "m2c.h"

M2C_UNK NNS_FndRemoveListObject(M2C_UNK *, void *);
M2C_UNK NNS_SndFreeAlarm(s32);
extern M2C_UNK sStrmList;

void ShutdownStrm(void *arg0) {
    NNS_SndFreeAlarm(M2C_FIELD(arg0, s32 *, 0x40));
    NNS_FndRemoveListObject(&sStrmList, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}

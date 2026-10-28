#include "m2c.h"

M2C_UNK NNS_SndStrmStop(void *);
M2C_UNK func_02049f98(void *);
M2C_UNK OS_LockMutex(M2C_UNK *);
M2C_UNK func_02050964(M2C_UNK *);
extern M2C_UNK data_021af530;
extern M2C_UNK data_021afba8;

void func_02049f00(void *arg0) {
    OS_LockMutex(&data_021afba8);
    if (M2C_FIELD(&data_021af530, s32 *, 4) != 0) {
        OS_LockMutex(M2C_FIELD(&data_021af530, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        NNS_SndStrmStop(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_02049f98(arg0);
    func_02050964(&data_021afba8);
    if (M2C_FIELD(&data_021af530, s32 *, 4) == 0) {
        return;
    }
    func_02050964(M2C_FIELD(&data_021af530, s32 *, 4) + 0x4C8);
}

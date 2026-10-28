#include "m2c.h"

M2C_UNK NNSi_FndInitHeapHead(void *, s32, s32, M2C_UNK, s32);

void *InitFrameHeap(void *arg0, M2C_UNK arg1, s32 arg2) {
    NNSi_FndInitHeapHead(arg0, 0x46524D48, arg0 + 0x30, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}

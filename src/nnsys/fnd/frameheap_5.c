#include "engine.h"
#include "m2c.h"

M2C_UNK NNSi_FndFinalizeHeap();
M2C_UNK AllocFromHead(M2C_UNK, M2C_UNK, M2C_UNK);
void AllocFromTail(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK FreeHead();
M2C_UNK FreeTail(M2C_UNK);

void NNS_FndDestroyFrmHeap(void) {
    NNSi_FndFinalizeHeap();
}

void NNS_FndAllocFromFrmHeapEx(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    temp_r1 = (var_r1 + 3) & ~3;
    temp_r0 = arg0 + 0x24;
    if (arg2 >= 0) {
        AllocFromHead(temp_r0, temp_r1, arg2);
        return;
    }
    AllocFromTail(temp_r0, temp_r1, 0 - arg2);
}

void NNS_FndFreeToFrmHeap(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        FreeHead();
    }
    if (!(arg1 & 2)) {
        return;
    }
    FreeTail(arg0);
}

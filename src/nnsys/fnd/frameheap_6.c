#include "m2c.h"

void *AllocFromHead(void *, M2C_UNK, M2C_UNK);

s32 NNS_FndRecordStateForFrmHeap(void *arg0, s32 arg1) {
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_r0 = AllocFromHead(arg0 + 0x24, 0x10, 4);
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 0)     = arg1;
    M2C_FIELD(temp_r0, s32 *, 4)     = temp_r4;
    M2C_FIELD(temp_r0, s32 *, 8)     = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_r0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x2C);
    M2C_FIELD(arg0, void **, 0x2C)   = temp_r0;
    return 1;
}

s32 NNS_FndFreeByStateToFrmHeap(void *arg0, s32 arg1) {
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 0x2C);
    if ((arg1 != 0) && (var_r3 != NULL)) {
    loop_4:
        if (M2C_FIELD(var_r3, s32 *, 0) != arg1) {
            var_r3 = M2C_FIELD(var_r3, void **, 0xC);
            if (var_r3 != NULL) {
                goto loop_4;
            }
        }
    }
    if (var_r3 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24)   = (s32) M2C_FIELD(var_r3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x28)   = (s32) M2C_FIELD(var_r3, s32 *, 8);
    M2C_FIELD(arg0, void **, 0x2C) = (void *) M2C_FIELD(var_r3, void **, 0xC);
    return 1;
}

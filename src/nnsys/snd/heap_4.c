#include "engine.h"
#include "m2c.h"

void NNS_FndRemoveListObject(M2C_UNK, M2C_UNK);
M2C_UNK NNS_FndGetPrevListObject(M2C_UNK, M2C_UNK);
M2C_UNK NNS_FndRecordStateForFrmHeap(M2C_UNK, M2C_UNK);
void NNS_FndFreeByStateToFrmHeap(M2C_UNK, M2C_UNK);
void NNS_SndHeapClear(M2C_UNK);
M2C_UNK NewSection(M2C_UNK);
void EraseSync(void);
u32 func_02046c28(s32, M2C_UNK);
M2C_UNK NNS_FndInitList(M2C_UNK, M2C_UNK);

void NNS_SndHeapLoadState(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 temp_r0;
    s32 var_r7;
    s32 var_r8;

    var_r8 = 0;
    var_r7 = 0;
    if (arg1 == 0) {
        NNS_SndHeapClear(arg0);
        return;
    }
    if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC)) {
        do {
            temp_r0 = NNS_FndGetPrevListObject(arg0 + 4, 0);
            var_r8  = NNS_FndGetPrevListObject(temp_r0, var_r8);
            if (var_r8 != 0) {
                do {
                    temp_ip = M2C_FIELD(var_r8, M2C_UNK(**)(s32, s32, s32, s32), 0xC);
                    if (temp_ip != NULL) {
                        temp_ip(var_r8 + 0x20, M2C_FIELD(var_r8, s32 *, 8), M2C_FIELD(var_r8, s32 *, 0x10),
                                M2C_FIELD(var_r8, s32 *, 0x14));
                        var_r7 = 1;
                    }
                    var_r8 = NNS_FndGetPrevListObject(temp_r0, var_r8);
                } while (var_r8 != 0);
            }
            NNS_FndRemoveListObject(arg0 + 4, temp_r0);
        } while (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC));
    }
    NNS_FndFreeByStateToFrmHeap(M2C_FIELD(arg0, s32 *, 0), arg1);
    if (var_r7 != 0) {
        EraseSync();
    }
    NNS_FndRecordStateForFrmHeap(M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u16 *, 0xC));
    NewSection(arg0);
}

s32 NNS_SndHeapGetFreeSize(s32 *arg0) {
    u32 temp_r0;

    temp_r0 = func_02046c28(*arg0, 0x20);
    if (temp_r0 < 0x20U) {
        return 0;
    }
    return (temp_r0 - 0x20) & ~0x1F;
}

void InitHeapSection(M2C_UNK arg0) {
    NNS_FndInitList(arg0, 0);
}

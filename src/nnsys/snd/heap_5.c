#include "m2c.h"

M2C_UNK NNS_FndInitList(s32, M2C_UNK);
s32 NewSection(s32 *);
M2C_UNK NNS_FndAppendListObject(void *, s32);
s32 NNS_FndAllocFromFrmHeapEx(s32, M2C_UNK, M2C_UNK);
M2C_UNK InitHeapSection();
M2C_UNK func_02052af0(M2C_UNK);
M2C_UNK SND_WaitForCommandProc(s32);
s32 SND_GetCurrentCommandTag();

s32 InitHeap(s32 *arg0, s32 arg1) {
    NNS_FndInitList(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (NewSection(arg0) != 0) {
        return 1;
    }
    return 0;
}

s32 NewSection(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = NNS_FndAllocFromFrmHeapEx(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    InitHeapSection();
    NNS_FndAppendListObject(((s8 *) arg0 + 4), temp_r0);
    return 1;
}

void EraseSync(void) {
    s32 temp_r4;

    temp_r4 = SND_GetCurrentCommandTag();
    func_02052af0(1);
    SND_WaitForCommandProc(temp_r4);
}

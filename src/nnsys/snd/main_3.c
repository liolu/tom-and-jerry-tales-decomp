#include "m2c.h"

M2C_UNK SND_Init();
M2C_UNK PM_PrependPreSleepCallback(M2C_UNK *);
M2C_UNK PM_AppendPostSleepCallback(M2C_UNK *);
M2C_UNK NNSi_SndInitResourceMgr();
M2C_UNK NNSi_SndPlayerInit();
M2C_UNK NNSi_SndCaptureInit();
extern M2C_UNK sCurDriverInfo;
extern M2C_UNK sPreSleepCallback;
extern M2C_UNK sPostSleepCallback;
extern M2C_UNK BeginSleep;
extern M2C_UNK func_02046dfc;
s32 SND_RecvCommandReply(M2C_UNK);
M2C_UNK func_02052af0(M2C_UNK);
M2C_UNK NNSi_SndPlayerMain();
M2C_UNK NNSi_SndCaptureMain();
M2C_UNK NNSi_SndArcStrmMain();
M2C_UNK SND_SetMasterVolume();

void NNS_SndInit(void) {
    if (M2C_FIELD(&sCurDriverInfo, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&sCurDriverInfo, s32 *, 0xC) = 1;
    SND_Init();
    M2C_FIELD(&sCurDriverInfo, M2C_UNK **, 0x10) = &BeginSleep;
    M2C_FIELD(&sCurDriverInfo, s32 *, 0x14)      = 0;
    M2C_FIELD(&sCurDriverInfo, M2C_UNK **, 0x1C) = &func_02046dfc;
    M2C_FIELD(&sCurDriverInfo, s32 *, 0x20)      = 0;
    PM_PrependPreSleepCallback(&sPreSleepCallback);
    PM_AppendPostSleepCallback(&sPostSleepCallback);
    NNSi_SndInitResourceMgr();
    NNSi_SndCaptureInit();
    NNSi_SndPlayerInit();
    M2C_FIELD(&sCurDriverInfo, s8 *, 0)  = -1;
    M2C_FIELD(&sCurDriverInfo, s32 *, 4) = 1;
}

void NNS_SndMain(void) {
    do {

    } while (SND_RecvCommandReply(0) != 0);
    NNSi_SndPlayerMain();
    NNSi_SndCaptureMain();
    NNSi_SndArcStrmMain();
    func_02052af0(0);
}

void NNS_SndSetMasterVolume(void) {
    SND_SetMasterVolume();
}

#include "m2c.h"

M2C_UNK NNSi_SndFaderInit(void *);
M2C_UNK NNSi_SndFaderSet(void *, M2C_UNK, M2C_UNK);
M2C_UNK NNS_FndInsertListObject();
void *NNS_FndGetNextListObject();
extern M2C_UNK sPrioList;
M2C_UNK SND_StopSeq(u8);
M2C_UNK SND_SetPlayerVolume(u8, s32);
M2C_UNK ShutdownPlayer(void *);

void InitPlayer(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2F)  = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41)  = 0x7F;
    NNSi_SndFaderInit(arg0 + 0x1C);
    NNSi_SndFaderSet(arg0 + 0x1C, 0x7F00, 1);
}

void InsertPlayerList(s32 arg0, void *arg1) {
    void *var_r1;

    var_r1 = NNS_FndGetNextListObject(arg0, 0);
    if (var_r1 != NULL) {
    loop_1:
        if ((u32) M2C_FIELD(arg1, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = NNS_FndGetNextListObject(arg0);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    NNS_FndInsertListObject(arg0, var_r1, arg1);
    M2C_FIELD(arg1, s32 *, 4) = arg0;
}

void InsertPrioList(void *arg0) {
    void *var_r1;

    var_r1 = NNS_FndGetNextListObject(&sPrioList, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = NNS_FndGetNextListObject(&sPrioList);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    NNS_FndInsertListObject(&sPrioList, var_r1, arg0);
}

void ForceStopSeq(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        SND_SetPlayerVolume(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    SND_StopSeq(M2C_FIELD(arg0, u8 *, 0x3C));
    ShutdownPlayer(arg0);
}

#include "engine.h"
#include "m2c.h"

M2C_UNK NNS_SndArcGetFileAddress(M2C_UNK);
void OpenFileStream(M2C_UNK, M2C_UNK);
void CloseFileStream(M2C_UNK);
void ReadFileStream(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void CancelFileStream(M2C_UNK);
void OpenMemoryStream(M2C_UNK, M2C_UNK);
void func_0204ae98(void);
void ReadMemoryStream(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204aeb8(void);

void func_0204ad24(s32 arg0, s32 arg1) {
    if (NNS_SndArcGetFileAddress(arg1) == 0) {
        M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = OpenFileStream;
        M2C_FIELD(arg0, void (**)(s32), 0x164)                = CloseFileStream;
        M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = ReadFileStream;
        M2C_FIELD(arg0, void (**)(s32), 0x16C)                = CancelFileStream;
        return;
    }
    M2C_FIELD(arg0, void (**)(s32, s32), 0x160)           = OpenMemoryStream;
    M2C_FIELD(arg0, void (**)(s32), 0x164)                = (void (*)(s32)) func_0204ae98;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x168) = ReadMemoryStream;
    M2C_FIELD(arg0, void (**)(s32), 0x16C)                = (void (*)(s32)) func_0204aeb8;
}

#include "m2c.h"

M2C_UNK func_02054f84(s32);
M2C_UNK func_020550c8(void *, M2C_UNK, M2C_UNK);
M2C_UNK FS_SeekFile(void *, s32, M2C_UNK);
M2C_UNK FS_CancelFile(s32);
s32 NNS_SndArcGetFileAddress(M2C_UNK);
M2C_UNK MI_CpuCopy8(s32, s32, M2C_UNK);

void CloseFileStream(s32 arg0) {
    func_02054f84(arg0 + 0x5C);
}

void ReadFileStream(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    FS_SeekFile(arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0xA4) + arg3, 0);
    func_020550c8(arg0 + 0x5C, arg1, arg2);
}

void CancelFileStream(s32 arg0) {
    FS_CancelFile(arg0 + 0x5C);
}

s32 OpenMemoryStream(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                      = NNS_SndArcGetFileAddress(arg1);
    M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0;
    MI_CpuCopy8(temp_r0, arg0 + 0xA8, 0x40);
    return 1;
}

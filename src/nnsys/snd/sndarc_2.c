#include "m2c.h"

extern void *sCurrent;
s32 func_020550c8(void *, M2C_UNK, u32);
s32 FS_SeekFile(void *, s32, M2C_UNK);
typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

s32 NNS_SndArcGetFileOffset(u32 arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(sCurrent, void **, 0x84);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return 0;
    }
    return M2C_FIELD((temp_r2 + (arg0 * 0x10)), s32 *, 0xC);
}

s32 NNS_SndArcGetFileSize(u32 arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(sCurrent, void **, 0x84);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return 0;
    }
    return M2C_FIELD((temp_r2 + (arg0 * 0x10)), s32 *, 0x10);
}

s32 NNS_SndArcReadFile(u32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3) {
    u32 temp_r0;
    u32 var_r5;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;

    var_r5  = arg2;
    temp_r4 = sCurrent;
    temp_r2 = M2C_FIELD(temp_r4, void **, 0x84);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return -1;
    }
    temp_r1 = temp_r2 + 0xC + (arg0 * 0x10);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 4) - arg3;
    if (var_r5 > temp_r0) {
        var_r5 = temp_r0;
    }
    if (FS_SeekFile(temp_r4 + 0x34, M2C_FIELD(temp_r1, s32 *, 0) + arg3, 0) == 0) {
        return -1;
    }
    return func_020550c8(temp_r4 + 0x34, arg1, var_r5);
}

void NNS_SndArcGetFileID(void *arg0) {
    *(M2C_S8 *) ((s8 *) arg0 + 0) = *(M2C_S8 *) ((s8 *) sCurrent + 124);
}

s32 NNS_SndArcGetFileAddress(u32 arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(sCurrent, void **, 0x84);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return 0;
    }
    return M2C_FIELD((temp_r2 + (arg0 * 0x10)), s32 *, 0x14);
}

void NNS_SndArcSetFileAddress(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(sCurrent, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}

void InfoDisposeCallback(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x8C) = 0;
}

void FatDisposeCallback(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x84) = 0;
}

void SymbolDisposeCallback(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x88) = 0;
}

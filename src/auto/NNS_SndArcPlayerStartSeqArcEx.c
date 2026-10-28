#include "m2c.h"
typedef struct {
    u8 pad0[4];
    u16 f4;
    u8 pad1[2];
    u8 f8;
    u8 f9;
} SeqInfo;
extern s32 *func_02048338(s32);
extern s32 NNS_SndArcGetFileAddress(s32);
extern SeqInfo *NNSi_SndSeqArcGetSeqInfo(s32, s32);
extern s32 StartSeqArc(s32, s32, s32, s32, SeqInfo *, s32, s32, s32);
s32 NNS_SndArcPlayerStartSeqArcEx(s32 player, s32 prio, s32 vol, s32 ch, s32 arc, s32 seq) {
    s32 *arcInfo;
    s32 file;
    SeqInfo *info;
    arcInfo = func_02048338(arc);
    if (arcInfo == 0) {
        return 0;
    }
    file = NNS_SndArcGetFileAddress(arcInfo[0]);
    if (file == 0) {
        return 0;
    }
    info = NNSi_SndSeqArcGetSeqInfo(file, seq);
    if (info == 0) {
        return 0;
    }
    if (ch < 0) {
        ch = info->f8;
    }
    if (vol < 0) {
        vol = info->f4;
    }
    if (prio < 0) {
        prio = info->f9;
    }
    return StartSeqArc(player, prio, vol, ch, info, file, arc, seq);
}

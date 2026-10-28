/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndWaveArcInfo {
    u32 fileId : 24;
    u32 flags : 8;
} UnkSndWaveArcInfo;
extern void *func_02048400(int index);
extern void *NNS_SndArcGetFileAddress(u32 fileId);
extern int NNSi_SndArcLoadWaveArc(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *LoadWaveArc(u32 fileId, void *heap, BOOL addToArc);
extern void *LoadWaveArcTable(u32 fileId, void *heap, BOOL addToArc);
extern void *LoadWaveArc(u32 fileId, void *heap, BOOL addToArc);
extern void *LoadWaveArcTable(u32 fileId, void *heap, BOOL addToArc);

/* func_02041484 from projets/spider-man-web-of-shadows/src/donor/func_02041484.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
int NNSi_SndArcLoadWaveArc(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndWaveArcInfo *info = func_02048400(waveArcNo);
    void *data;

    if (info == 0) {
        return 5;
    }

    if (flags & 4) {
        if (info->flags & 1) {
            data = LoadWaveArcTable(info->fileId, heap, addToArc);
        } else {
            data = LoadWaveArc(info->fileId, heap, addToArc);
        }
        if (data == 0) {
            return 9;
        }
    } else {
        data = NNS_SndArcGetFileAddress(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}

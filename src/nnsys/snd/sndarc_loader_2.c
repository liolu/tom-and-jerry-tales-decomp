/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqInfo {
    u32 fileId;
    u16 bankNo;
} UnkSndSeqInfo;
extern void *func_020482d4(int index);
extern void *NNS_SndArcGetFileAddress(u32 fileId);
extern int NNSi_SndArcLoadSeq(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern int NNSi_SndArcLoadBank(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *LoadSeq(u32 fileId, void *heap, BOOL addToArc);
extern int NNSi_SndArcLoadBank(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *LoadSeq(u32 fileId, void *heap, BOOL addToArc);

/* func_02041260 from projets/spider-man-web-of-shadows/src/donor/func_02041260.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
int NNSi_SndArcLoadSeq(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndSeqInfo *info = func_020482d4(seqNo);
    void *data;
    int result;

    if (info == 0) {
        return 2;
    }

    result = NNSi_SndArcLoadBank(info->bankNo, flags, heap, addToArc, 0);
    if (result != 0) {
        return result;
    }

    if (flags & 1) {
        data = LoadSeq(info->fileId, heap, addToArc);
        if (data == 0) {
            return 6;
        }
    } else {
        data = NNS_SndArcGetFileAddress(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}

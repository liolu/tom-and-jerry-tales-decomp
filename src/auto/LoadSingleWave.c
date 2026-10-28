/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020755f8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcload.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void DC_StoreRange(void *ptr, u32 size);
extern u32 func_02053480(void *waveArc);
extern void *SND_GetWaveDataAddress(void *waveArc, u32 index);
extern void SND_SetWaveDataAddress(void *waveArc, u32 index, void *wave);
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef void (*UnkSndHeapCallback)(void *mem, u32 size, void *data1, u32 data2);
extern s32 NNS_SndArcReadFile(u32 fileId, void *dst, u32 size, u32 offset);
extern void *NNS_SndHeapAlloc(void *heap, u32 size, UnkSndHeapCallback callback, void *data1, u32 data2);
extern void SingleWaveDisposeCallback(void *mem, u32 size, void *data1, u32 data2);
extern BOOL LoadSingleWave(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap);
void SingleWaveDisposeCallback(void *mem, u32 size, void *data1, u32 data2);
BOOL LoadSingleWave(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap) {
    u32 size;
    u32 offset;
    u32 end;

    if (SND_GetWaveDataAddress(waveArc, index) != 0) {
        return 1;
    }

    {
        u32 count = func_02053480(waveArc);
        u32 i     = waveArc->waveCount + index;
        offset    = waveArc->waveOffset[i];
        end       = index < count - 1 ? *(waveArc->waveOffset + i + 1) : waveArc->fileSize;
    }
    size = end - offset;

    if (heap == 0) {
        return 0;
    }

    heap = NNS_SndHeapAlloc(heap, size + 0x20, SingleWaveDisposeCallback, waveArc, index);
    if (heap == 0) {
        return 0;
    }

    if (size != NNS_SndArcReadFile(fileId, heap, size, offset)) {
        return 0;
    }

    DC_StoreRange(heap, size);
    SND_SetWaveDataAddress(waveArc, index, heap);
    return 1;
}

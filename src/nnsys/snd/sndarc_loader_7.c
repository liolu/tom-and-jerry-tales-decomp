#include "m2c.h"

s32 NNS_SndArcGetCurrent(void);
s32 NNS_SndArcReadFile(s32, void *, s32, s32);
u8 *NNS_SndArcGetFileAddress(void);
void NNS_SndArcSetFileAddress(s32, void *);
u8 *NNS_SndHeapAlloc(s32, s32, void *, s32, s32);
void DC_StoreRange(void *, s32);
void MI_CpuFill8(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
extern s32 data_021af4f4[];
extern u32 sCurrent[];
extern u8 WaveArcTableDisposeCallback;

u8 *LoadWaveArcTable(s32 arg0, s32 arg1, s32 arg2) {
    s32 b;
    u8 *p;
    s32 a;
    s32 t;

    p = NNS_SndArcGetFileAddress();
    if (p == NULL) {
        if (NNS_SndArcReadFile(arg0, &sCurrent[1], 0x3C, 0) != 0x3C) {
            return NULL;
        }
        a = *(s32 *) ((u8 *) data_021af4f4 + 0x38) * 4;
        b = a * 2;
        if (arg1 == 0) {
            return NULL;
        }
        if (arg2 == 0) {
            t = 0;
        } else {
            t = NNS_SndArcGetCurrent();
        }
        p = NNS_SndHeapAlloc(arg1, b + 0x5C, &WaveArcTableDisposeCallback, t, arg0);
        if (p == NULL) {
            return NULL;
        }
        t = NNS_SndArcReadFile(arg0, p, a + 0x3C, 0);
        if (t != a + 0x3C) {
            return NULL;
        }
        MI_CpuCopy8(p + 0x3C, p + 0x3C + *(s32 *) (p + 0x38) * 4, a);
        MI_CpuFill8(p + 0x3C, 0, a);
        DC_StoreRange(p, b + 0x3C);
        if (arg2 != 0) {
            NNS_SndArcSetFileAddress(arg0, p);
        }
    }
    return p;
}

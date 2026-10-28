#include "m2c.h"

void func_02049f00(void *);
void NNS_SndStrmStart(void *);
void NNS_SndStrmSetVolume(void *, s32);
void NNSi_SndFaderUpdate(void *);
s32 NNSi_SndFaderGet(void *);
s32 NNSi_SndFaderIsFinished(void *);
typedef struct {
    u8 p0[0xE8];
    u8 sub[0x28];
    struct {
        s32 a : 1;
        s32 b : 1;
        s32 c : 1;
        s32 d : 1;
    } f;
    s32 v114;
    s32 v118;
    u8 p1[0x38];
    s32 v154;
    s32 v158;
    u8 p2[0x14];
} E;
extern E data_021afbcc[];
extern s16 data_020686c0[];

void NNSi_SndArcStrmMain(void) {
    s32 i = 0;
    s32 s;
    s32 t;
    E *e = data_021afbcc;
    do {
        if (e->f.a) {
            if (e->v114 == 0) {
                func_02049f00(e);
            } else {
                if (e->f.c && e->v118 != 0) {
                    NNS_SndStrmStart(e);
                    e->f.b = 1;
                    e->f.c = 0;
                }
                if (e->f.b) {
                    NNSi_SndFaderUpdate(e->sub);
                    s = data_020686c0[e->v154];
                    t = data_020686c0[NNSi_SndFaderGet(e->sub) >> 8];
                    t = t + s;
                    if (t != e->v158) {
                        NNS_SndStrmSetVolume(e, t);
                        e->v158 = t;
                    }
                    if (e->f.d) {
                        if (NNSi_SndFaderIsFinished(e->sub) != 0) {
                            func_02049f00(e);
                        }
                    }
                }
            }
        }
        i++;
        e++;
    } while (i < 4);
}

#include "m2c.h"
typedef struct {
    s32 p0, p1, p2, e0, e1, e2, e3, f0, f1, f2, f3;
} T;
extern T data_0206db50;
extern u8 data_020ba3fc[], data_020ba3e8[], data_020ba3ec[], data_020ba3f0[];
extern void NNS_SndArcStrmStart(void *, s32, s32);
void func_0203fbdc(void) {
    s32 e, f;
    e = data_0206db50.e3;
    if (e != 0 && data_0206db50.f3 != -1) {
        NNS_SndArcStrmStart(data_020ba3fc, data_0206db50.f3, e);
    }
    e = data_0206db50.e2;
    if (e != 0 && data_0206db50.f2 != -1) {
        NNS_SndArcStrmStart(data_020ba3e8, data_0206db50.f2, e);
    }
    e = data_0206db50.e1;
    if (e != 0 && data_0206db50.f1 != -1) {
        NNS_SndArcStrmStart(data_020ba3ec, data_0206db50.f1, e);
    }
    e = data_0206db50.e0;
    if (e != 0 && data_0206db50.f0 != -1) {
        NNS_SndArcStrmStart(data_020ba3f0, data_0206db50.f0, e);
    }
}

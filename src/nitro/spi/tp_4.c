/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK func_02055a24(M2C_UNK);
M2C_UNK TP_WaitBusy(M2C_UNK);
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef void (*TPRecvCallback)(int result, int operation, int detail);
struct TPSample {
    u32 xy00;
    u16 touch04;
    u16 validity06;
};
struct TPState {
    u8 pad00[4];
    TPRecvCallback callback04;
    u8 pad08[8];
    u16 index10;
    u16 frequence12;
    struct TPSample *samplingBufs14;
    u16 bufSize18;
    u8 pad1a[0x1e];
    u16 errFlags38;
    u16 commandFlags3a;
};
extern int OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(int state);
extern int func_02053674(int channel, int word, int flag);
extern struct TPState data_021b2450;

void TP_WaitCalibratedResult(M2C_UNK arg0) {
    TP_WaitBusy(1);
    func_02055a24(arg0);
}

/* TP_RequestAutoSamplingStartAsync from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/spi/calls/TP_RequestAutoSamplingStartAsync.c (license: CC0-1.0), reused by tools/donor_match.py */
void TP_RequestAutoSamplingStartAsync(int vcount, int frequence, char *samplingBufs, unsigned int bufSize) {
    void (*callback)(int, int, int);
    int i;
    int interruptState;
    int ok;
    int result;

    data_021b2450.samplingBufs14 = (struct TPSample *) samplingBufs;
    data_021b2450.index10        = 0;
    data_021b2450.frequence12    = (short) frequence;
    data_021b2450.bufSize18      = (short) bufSize;

    for (i = 0; i < bufSize; i++) {
        data_021b2450.samplingBufs14[i].touch04 = 0;
    }

    interruptState = OS_DisableInterrupts();
    if (func_02053674(6, (frequence & 0xff) | 0x100 | 0x2000000, 0) < 0) {
        ok = 0;
    } else {
        result = func_02053674(6, vcount | 0x10000 | 0x1000000, 0);
        if (result < 0) {
            ok = 0;
        } else {
            ok = 1;
        }
    }

    if ((ok & 0xff) == 0) {
        OS_RestoreInterrupts(interruptState);
        data_021b2450.errFlags38 |= 2;
        callback = data_021b2450.callback04;
        if (callback == 0) {
            return;
        }
        callback(1, 4, 0);
        return;
    }

    {
        data_021b2450.commandFlags3a |= 2;
        data_021b2450.errFlags38 &= ~2;
    }
    OS_RestoreInterrupts(interruptState);
}

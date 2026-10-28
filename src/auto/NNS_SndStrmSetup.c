#include "m2c.h"
typedef struct {
    s32 v;
    s32 w;
} Ent;
typedef struct Strm {
    u8 pad0[0x20];
    s32 fmt;
    s32 active : 1;
    s32 rest : 31;
    u32 unit;
    s32 interval;
    s32 f30;
    s32 f34;
    s32 f38;
    s32 f3c;
    s32 alarm;
    u8 pad1[4];
    s32 count;
    u8 idx[8];
} Strm;
extern Ent sStrmChannel[];
extern u8 sStrmList[];
extern void NNS_SndStrmStop(Strm *);
extern s32 _u32_div_f(s32, s32);
extern s32 NNS_SndAllocAlarm(void);
extern void SND_SetupChannelPcm(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void SND_SetupAlarm(s32, s32, s32, void (*)(void *), Strm *);
extern void AlarmCallback(void *);
extern void NNS_FndAppendListObject(void *, Strm *);
extern s32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(s32);
extern void func_02047c78(Strm *, s32);
s32 NNS_SndStrmSetup(Strm *s, s32 fmt, s32 buf, s32 size, s32 rate, s32 fp, s32 cb, s32 cbArg) {
    s32 tick;
    s32 i;
    u32 v;
    s32 irq;
    if (s->active) {
        NNS_SndStrmStop(s);
    }
    v       = _u32_div_f(size, s->count * (fp << 5));
    s->unit = (v * fp) << 5;
    v       = s->unit;
    if (fmt == 1) {
        v >>= 1;
    }
    tick     = _u32_div_f(rate * v, fp);
    s->alarm = NNS_SndAllocAlarm();
    if (s->alarm < 0) {
        return 0;
    }
    for (i = 0; i < s->count; i++) {
        u8 ch  = s->idx[i];
        Ent *e = &sStrmChannel[ch];
        e->v   = buf + s->unit * i;
        e->w   = 0;
        SND_SetupChannelPcm(ch, fmt, e->v, 1, 0, s->unit >> 2, 127, 0, rate << 5, 64);
    }
    SND_SetupAlarm(s->alarm, tick, tick, AlarmCallback, s);
    NNS_FndAppendListObject(sStrmList, s);
    s->fmt      = fmt;
    s->interval = fp;
    s->f30      = cb;
    s->f34      = cbArg;
    s->f38      = 0;
    s->f3c      = 0;
    s->active   = 1;
    irq         = OS_DisableInterrupts();
    s->interval = 1;
    func_02047c78(s, 0);
    s->interval = fp;
    OS_RestoreInterrupts(irq);
    return 1;
}

#include "m2c.h"
typedef struct {
    u8 pad[0x110];
    s32 flags;
} O49;
typedef struct {
    O49 *o;
} P49;
extern void NNSi_SndFaderSet(void *, s32, s32);
void func_020499c4(P49 *p, s32 b, s32 c) {
    O49 *o = p->o;
    if (o == 0) {
        return;
    }
    if (((s32) (o->flags << 28) >> 31) != 0) {
        return;
    }
    NNSi_SndFaderSet(&o->pad[0xE8], b << 8, c);
}

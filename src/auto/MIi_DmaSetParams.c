#include "m2c.h"

extern s32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(s32);

void MIi_DmaSetParams(s32 n, s32 a, s32 b, s32 c) {
    s32 t;
    s32 q;
    s32 s                            = OS_DisableInterrupts();
    t                                = n * 12;
    *(s32 *) (t + 0x04000000 + 0xB0) = a;
    q                                = t + 0x040000B0;
    *(s32 *) (q + 4)                 = b;
    *(s32 *) (q + 8)                 = c;
    OS_RestoreInterrupts(s);
}

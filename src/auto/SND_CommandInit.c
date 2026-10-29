/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"
typedef struct N {
    struct N *next;
    s32 pad[5];
} N;
typedef struct {
    N *head;
    s32 f4, f8, fc;
    void *f10;
    s32 f14, f18, f1c, f20;
} M;
extern N sCommandArray[];
extern M sFreeList;
typedef struct {
    u8 pad[0xAC8];
    s32 v;
} R;
extern R data_021b1800;
extern u8 data_021b22c8[];
extern u8 sSharedWork[];
extern u8 *SNDi_SharedWork;
void InitPXI(void);
void SNDi_InitSharedWork(void *);
s32 *SND_AllocCommand(s32);
void SND_PushCommand(s32 *);
void func_02052af0(s32);

void SND_CommandInit(void) {
    s32 i;
    s32 *r;
    InitPXI();
    sFreeList.head = sCommandArray;
    for (i = 0; i < 0xFF; i++) {
        sCommandArray[i].next = &sCommandArray[i + 1];
    }
    data_021b1800.v = 0;
    sFreeList.f10   = data_021b22c8;
    sFreeList.f8    = 0;
    sFreeList.fc    = 0;
    sFreeList.f1c   = 0;
    sFreeList.f14   = 0;
    sFreeList.f18   = 0;
    sFreeList.f20   = 1;
    sFreeList.f4    = 0;
    SNDi_SharedWork = sSharedWork;
    SNDi_InitSharedWork(sSharedWork);
    r = SND_AllocCommand(1);
    if (r == NULL) {
        return;
    }
    r[1] = 0x1D;
    r[2] = (s32) SNDi_SharedWork;
    SND_PushCommand(r);
    func_02052af0(1);
}

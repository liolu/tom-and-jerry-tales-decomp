#include "m2c.h"
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    void (*cbC)(void);
    void (*cb10)(void);
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 rest : 29;
} E;
extern E data_021a6f08[16];
s32 STD_CompareString(s32, void *);
s32 func_0203feb4(void *arg0) {
    s32 i = 0;
    E *p  = data_021a6f08;
    do {
        if (p->b2 && STD_CompareString(p->f0, arg0) == 0) {
            return data_021a6f08[i].f18;
        }
        i++;
        p++;
    } while (i < 16);
    return -1;
}

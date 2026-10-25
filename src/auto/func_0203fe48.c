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
extern s32 data_021a6d80;
void func_0203fe48(void) {
    s32 i = 0;
    E *p  = data_021a6f08;

    do {
        if (p->b0 && p->b2) {
            data_021a6d80 = p->f18;
            if (p->cb10 != 0) {
                p->cb10();
            }
        }
        i++;
        p++;
    } while (i < 16);
    data_021a6d80 = -1;
}

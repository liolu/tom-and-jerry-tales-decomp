#include "m2c.h"
typedef struct {
    s32 pad;
    s32 k : 8;
    s32 rest : 24;
    s32 q[4];
} E32;
extern E32 data_0208a178[];
extern void func_02032384(void *);
void func_020323e0(s32 a) {
    u16 i;
    for (i = 0; i < 0x14; i++) {
        if (a == data_0208a178[i].k) {
            func_02032384(&data_0208a178[i]);
        }
    }
}

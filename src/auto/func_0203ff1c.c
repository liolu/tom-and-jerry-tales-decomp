#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Ent;
extern s32 data_021a6d80[];
extern Ent data_021a6d88[];
void func_0203ff1c(s32 c, s32 a, s32 b) {
    s32 n;
    if (data_021a6d80[1] == 0x20) {
        return;
    }
    n                  = data_021a6d80[1];
    data_021a6d88[n].a = a;
    data_021a6d88[n].b = b;
    data_021a6d88[n].c = c;
    data_021a6d80[1]   = n + 1;
}

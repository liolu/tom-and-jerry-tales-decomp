#include "m2c.h"
typedef struct {
    s32 pad0;
    s32 pad1;
    s32 *vals;
    u16 n;
    u16 pad2;
    s32 pad3;
} E12;
typedef struct {
    s32 a;
    E12 *e;
} T12;
extern T12 data_02086ff4;
s32 func_02012e00(s32 i) {
    E12 *p = &data_02086ff4.e[i];
    return p->vals[p->n - 1];
}

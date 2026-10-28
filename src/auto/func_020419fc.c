#include "m2c.h"
typedef struct {
    u32 z;
    u32 cnt : 8;
    u32 rest : 24;
    u32 b0 : 1;
    u32 r2 : 31;
    u8 pad[0x14];
    void *head;
} T;
void *func_01ff8000(void *, s32);
T *func_0203a58c(s16);
s16 *func_0203a95c(s16);
void MIi_CpuCopy16(void *, void *, s32);
void func_020419fc(void *a, s32 id, void *c) {
    T *t = func_0203a58c(*func_0203a95c(id));
    void *n;
    if (!t->b0) {
        return;
    }
    n = func_01ff8000(c, 0x3C);
    MIi_CpuCopy16(a, n, 0x3C);
    *(void **) ((u8 *) n + 0x38) = t->head;
    t->head                      = n;
    t->cnt                       = t->cnt + 1;
}

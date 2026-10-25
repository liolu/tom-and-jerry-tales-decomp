#include "m2c.h"
typedef struct {
    u8 pad[8];
    u16 n;
} P36;
typedef struct {
    u8 pad[8];
    u8 *tab;
} T36;
extern T36 *data_027e0080;
extern u16 *func_020365ec(void *);
void func_02036f34(P36 *p) {
    u16 n = p->n;
    u16 i;
    u16 *ids = func_020365ec(p);
    for (i = 0; i < n; i++) {
        *(u16 *) (data_027e0080->tab + ids[i] * 0x50 + 0x4c) = 0;
    }
}

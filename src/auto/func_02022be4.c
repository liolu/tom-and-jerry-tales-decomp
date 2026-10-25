#include "m2c.h"
typedef struct {
    u8 pad[9];
    u8 n;
    u8 pad2[2];
    void *items[1];
} L22;
extern void func_02022434(void *, s32, s32);
void func_02022be4(L22 *l, s32 b) {
    u8 i;
    for (i = 0; i < l->n; i++) {
        func_02022434(l->items[i], 1, b);
    }
}

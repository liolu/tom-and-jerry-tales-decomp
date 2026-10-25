#include "m2c.h"
typedef struct {
    u8 pad[9];
    u8 n;
    s32 f[1];
} O;
void func_02022434(s32, s32, s32);
void func_02022b98(O *o, s32 a) {
    u8 i;
    for (i = 0; i < o->n; i++) {
        func_02022434(*(s32 *) ((u8 *) o + i * 4 + 0xC), 0, a);
    }
}

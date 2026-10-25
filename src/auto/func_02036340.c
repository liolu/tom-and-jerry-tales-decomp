#include "m2c.h"
typedef struct {
    u8 pad[0x32];
    u8 a;
    u8 b;
    u8 c;
} S36;
s32 func_02036340(S36 *s) {
    if ((u8) (s->a + 255) <= 1) {
        if (s->c == 0) {
            return 1;
        }
    } else {
        if (s->b == 0) {
            return 1;
        }
    }
    return 0;
}

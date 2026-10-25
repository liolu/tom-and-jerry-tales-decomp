#include "m2c.h"
typedef struct {
    u8 pad[0xC4];
    u16 h;
    u8 p2[6];
    u32 v;
} O;
s32 _ll_udiv(u64, u16);
s32 func_02049a50(O **a) {
    O *o = *a;
    if (o == NULL) {
        return 0;
    }
    return _ll_udiv((u64) o->v * 1000, o->h);
}

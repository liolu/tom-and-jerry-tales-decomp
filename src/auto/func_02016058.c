#include "m2c.h"
typedef struct {
    u8 pad[0x38];
    s32 f38;
    u8 pad2[0x1C];
} El;
typedef struct {
    u8 pad[0x4C];
    u8 count;
    u8 p2[3];
    El *els;
} S;
s32 func_02016058(S *arg0) {
    u8 i;
    El *els;
    u32 n;
    n   = arg0->count;
    els = arg0->els;
    for (i = 0; i < n; i++) {
        if (els[i].f38 == 1) {
            return 0;
        }
    }
    return 1;
}

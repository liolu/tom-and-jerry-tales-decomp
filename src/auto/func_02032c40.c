#include "m2c.h"
typedef struct {
    u8 pad[8];
    s32 f8;
    s32 fc;
    s32 f10;
    u16 f14;
    u16 f16;
    u8 pad2[0x68 - 0x18];
} R;
typedef struct {
    s32 id;
    s32 a;
    s32 b;
    u16 c;
    u16 d;
} Slot;
extern R data_0208a360[];
extern Slot data_0208e050[];
void OS_Terminate(void);
Slot *func_02032c40(s32 id) {
    R *r;
    u16 i;
    Slot *s;
    if (id < 0 || id >= 0x96) {
        OS_Terminate();
    }
    r = &data_0208a360[id];
    if (r->fc == 0 && r->f10 == 0) {
        return 0;
    }
    if (r->f8 != 1) {
        if ((r->fc != 0 && r->f10 == 0) || r->f10 < 0) {
            OS_Terminate();
        }
    }
    for (i = 0; i < 20; i++) {
        if (data_0208e050[i].id == id) {
            return &data_0208e050[i];
        }
    }
    for (i = 0; i < 20; i++) {
        if (data_0208e050[i].id < 0) {
            data_0208e050[i].id = id;
            data_0208e050[i].b = data_0208e050[i].a = 0;
            data_0208e050[i].c                      = r->f14;
            data_0208e050[i].d                      = r->f16;
            return &data_0208e050[i];
        }
    }
    return 0;
}

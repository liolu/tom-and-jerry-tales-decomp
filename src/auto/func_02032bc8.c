#include "m2c.h"
typedef struct {
    s32 id;
    s32 a;
    s32 b;
    s32 c;
} A;
typedef struct {
    u8 pad[0x18];
    A *p;
    u8 pad2[0x4C];
} R;
extern R data_0208a360[];
extern A data_0208e050[];
void func_02032bc8(void) {
    u16 i;
    for (i = 0; i < 20; i++) {
        s32 id = data_0208e050[i].id;
        if (id > 0 && id < 0x96) {
            R *r = &data_0208a360[id];
            if (r->p == &data_0208e050[i]) {
                r->p = 0;
            }
        }
        data_0208e050[i].id = -1;
        data_0208e050[i].b = data_0208e050[i].a = 0;
    }
}

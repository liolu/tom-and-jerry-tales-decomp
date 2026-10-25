#include "m2c.h"
typedef struct {
    s32 id;
    s32 x;
    s32 y;
} Q;
typedef struct {
    u8 pad[0x18];
    Q *q;
    u8 pad2[0x68 - 0x1C];
} R;
extern R data_0208a360[];
void func_02051a48(void);
void func_02032f54(s32 arg0) {
    Q *q;
    s32 y, x;
    volatile s32 *g;
    if (arg0 < 0 || arg0 >= 0x96) {
        func_02051a48();
    }
    q = *(Q **) ((u8 *) data_0208a360 + arg0 * 0x68 + 0x18);
    if (q == 0) {
        func_02051a48();
    }
    if (q->id != arg0) {
        func_02051a48();
    }
    g     = (volatile s32 *) 0x04000440;
    g[0]  = 3;
    g[5]  = 0;
    y     = q->y;
    x     = q->x;
    g[12] = y << 4;
    g[12] = x << 4;
    g[12] = 0;
    g[0]  = 2;
}

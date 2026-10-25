#include "m2c.h"

typedef struct T {
    s32 p0;
    u32 f0 : 8;
    u32 f1 : 12;
    u32 f2 : 3;
    u32 f3 : 9;
    s32 p[4];
} T;

extern u16 data_0208a02c;
extern T data_0208a178[20];
void func_02032464(s32);

T *func_020322e0(u32 *arg0) {
    T *t;
    u16 i;
    for (i = 0; i < 0x14; i++) {
        u16 j;
        t = &data_0208a178[i];
        if (data_0208a178[i].f1 == 0) {
            for (j = 0; j < 4; j++) {
                if (t->p[j] != 0) {
                    func_02032464(t->p[j]);
                }
            }
            t->f2 = 0;
            if (i == data_0208a02c) {
                data_0208a02c++;
            }
            *arg0 = i;
            return t;
        }
    }
    return 0;
}

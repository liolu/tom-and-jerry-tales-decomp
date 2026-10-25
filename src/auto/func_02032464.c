#include "m2c.h"
typedef struct {
    u32 a;
    s32 pad : 8;
    s32 g : 7;
    u32 rest : 17;
} O;
typedef struct {
    u8 pad[8];
    O *e[4];
} G;
void func_02051a48(void);
extern u8 data_0208a178[];
void func_02032464(O *arg0) {
    u16 i;
    if (arg0 == 0) {
        func_02051a48();
    }
    if (arg0->g >= 0) {
        for (i = 0; i < 4; i++) {
            G *gp = (G *) data_0208a178 + arg0->g;
            if (gp->e[i] == arg0) {
                gp->e[i] = 0;
            }
        }
    }
    arg0->g = 0x7f;
}

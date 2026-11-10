/* compiler: 2.0/sp1p5 -O2 -pragma "opt_dead_assignments off" -pragma "opt_propagation off" */
#include "m2c.h"
typedef struct {
    s32 f;
    s32 g;
    u8 b[0x20];
} Obj;
extern Obj data_020b8b44[8];
void func_0203e6f8(void) {
    s32 i;
    Obj *p;
    i = 0;
    p = data_020b8b44;
    if (i < 8 && i < 8) {
        do {
            i++;
            p++;
        } while (i < 8);
    }
}

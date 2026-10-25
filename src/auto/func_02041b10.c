#include "m2c.h"
typedef struct {
    u8 pad[8];
    u32 f : 1;
    u32 g : 31;
} O41;
extern s16 *func_0203a95c(s32);
extern O41 *func_0203a58c(s32);
extern void func_0203b098(O41 *, s32);
void func_02041b10(s32 a, s32 b, s32 c) {
    O41 *o = func_0203a58c(*func_0203a95c((s16) a));
    if (o->f == 0) {
        return;
    }
    func_0203b098(o, c);
    o->f = 0;
}

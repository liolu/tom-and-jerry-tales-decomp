#include "m2c.h"
typedef struct {
    s16 id;
    u8 pad[0x52];
    s32 f54;
} A;
typedef struct {
    u8 pad[0x1C];
    s32 f1c;
} B;
extern A *func_0203a95c(s16);
extern B *func_0203a58c(s16);
void func_02041a90(s32 arg0) {
    A *a   = func_0203a95c(arg0);
    a->f54 = func_0203a58c(a->id)->f1c;
}

#include "m2c.h"
typedef struct {
    s16 id;
} A;
typedef struct {
    u32 pad[2];
    u32 flag : 1;
} B;
extern A *func_0203a95c(s16);
extern B *func_0203a58c(s16);
extern void func_0203b098(B *, s32);
void func_02041b58(s32 arg0, s32 arg1, s32 arg2) {
    B *b = func_0203a58c(func_0203a95c(arg0)->id);
    if (b->flag) {
        func_0203b098(b, arg2);
        b->flag = 0;
    }
}

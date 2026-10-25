#include "m2c.h"
typedef struct {
    u8 pad[0xB8];
    s16 *p;
} T;
T *func_0203a95c(s16);
s32 func_02009aa8(s32 a) {
    *func_0203a95c((s16) a)->p = 0;
    return 1;
}

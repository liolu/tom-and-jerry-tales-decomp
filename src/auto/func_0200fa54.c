#include "m2c.h"
typedef struct {
    u8 pad[0x3C];
    s32 lo;
    s32 hi;
} G;
extern G data_02086fa8;
s64 OS_GetTick(void);
void func_0202cba8(s64, s32);
void func_0200fa54(s32 a) {
    s64 t            = OS_GetTick();
    data_02086fa8.lo = (s32) t;
    data_02086fa8.hi = (s32) (t >> 32);
    func_0202cba8(t, a);
}

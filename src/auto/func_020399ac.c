#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V;
u8 *func_0203a58c(s16);
void func_02039964(s16 *, V *);
void func_020399ac(s16 *arg0) {
    V v;
    v.z = 0;
    v.x = 0;
    v.y = -178;
    v.y = (s32) (((s64) v.y * *(s32 *) (func_0203a58c(*arg0) + 0x2c) + 0x800) >> 12);
    func_02039964(arg0, &v);
}

#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 a, b, c, d;
} G;
extern G data_021a7234;
extern V *func_020415e8(void);
extern V *func_02041610(void);
extern void func_020413f0(s32, s32, s32, s32, s32, s32);
void func_02041654(s32 a, s32 b, s32 c) {
    V v1, v2;
    while (a <= data_021a7234.d) {
        v1 = *func_020415e8();
        v2 = *func_02041610();
        func_020413f0(v1.y, v2.y, v1.z, v2.z, b, c);
    }
}

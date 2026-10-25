#include "m2c.h"
typedef struct {
    s32 a, b, c, d, e, f;
} E;
extern E data_020b8300[];
void func_0203b364(s32 i, s32 b, s32 c, s32 d) {
    data_020b8300[i].a = b;
    data_020b8300[i].b = c;
    data_020b8300[i].c = d;
}

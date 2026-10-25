#include "m2c.h"
typedef struct {
    s32 a, b, c;
} E;
typedef struct {
    s32 a, b, c, idx;
} H;
extern H data_021a7234;
extern E data_021a7244[];
E *func_020415e8(void) {
    E *r = &data_021a7244[data_021a7234.idx];
    data_021a7234.idx--;
    return r;
}

#include "m2c.h"
typedef struct {
    s32 a, b, c;
} E;
typedef struct {
    s32 a, b, c, idx;
} H;
extern H data_021a7234;
extern E data_021a7244[];
extern u32 data_021a7224[];
void *func_02041610(void) {
    if (data_021a7234.idx >= 0) {
        return &data_021a7244[data_021a7234.idx];
    }
    return &data_021a7224[4];
}

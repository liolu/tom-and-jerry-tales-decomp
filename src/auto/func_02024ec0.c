#include "m2c.h"
typedef struct {
    u8 pad[0xFC];
    s32 f;
    u8 idx;
} O;
extern volatile s32 data_02087810[];
extern s32 data_02087814[];
extern u8 data_0206ea44[];
void func_02024ec0(O *o, s32 i) {
    s32 k;
    o->f                                       = data_02087810[i * 2];
    k                                          = o->idx;
    *(s32 *) (data_0206ea44 + (s16) k * 0x108) = data_02087810[i * 2];
    *(s32 *) ((u8 *) o + 0x1694)               = data_02087814[i * 2];
}

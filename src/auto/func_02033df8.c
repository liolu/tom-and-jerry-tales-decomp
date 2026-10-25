#include "m2c.h"
typedef struct {
    s32 pad[11];
    s32 f;
    s32 pad2[12];
} E;
extern u8 data_02091be4[];
extern u16 data_0208ecd4[];
void func_02033df8(s32 n) {
    u16 i;
    s32 off            = n * 0x7B0;
    u8 *b              = data_02091be4;
    *(s16 *) (b + off) = -1;
    b += off;
    for (i = 0; i < 20; i++) {
        ((E *) b)[i].f = 0;
    }
    data_0208ecd4[1] -= 1;
}

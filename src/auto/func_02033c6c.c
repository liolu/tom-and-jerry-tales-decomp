#include "m2c.h"

typedef struct {
    u8 pad[0x68];
    s32 a;
    s32 b;
    u8 pad2[0xBC - 0x70];
} B;
typedef struct {
    u8 pad[0x7B0];
} A;
extern A data_02091be4[];
extern B data_0208ece4[];
extern s32 func_0203016c(s32, s32);
extern void func_02033e54(s32);

void func_02033c6c(s32 arg0, s16 arg1) {
    u8 *p;
    u16 i;
    B *b;
    *(s16 *) &data_02091be4[arg0] = arg1;
    b                             = &data_0208ece4[*(s16 *) &data_02091be4[arg0]];
    p                             = (u8 *) &data_02091be4[arg0];
    i                             = 0;
    *(s32 *) (p + 0x20)           = 0;
    do {
        *(s32 *) (p + i * 0x60 + 0x2c) = 0;
        i++;
    } while (i < 20);
    *(s32 *) (p + 0x24) = *(s32 *) (p + 0x28);
    *(s16 *) (p + 2)    = 0;
    *(s32 *) (p + 4)    = func_0203016c(b->a, b->b);
    func_02033e54(arg0);
    *(s32 *) (p + 0x7ac) &= ~1;
}

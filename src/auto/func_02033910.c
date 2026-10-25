#include "m2c.h"
typedef struct {
    s32 f0;
    s32 f4;
    u8 p[0xb0];
    s32 fb8;
} A;
typedef struct {
    s16 f0;
    u8 p[0x22];
    s32 f24;
    s32 f28;
    u8 q[0x780];
    u32 f7ac;
} B;
typedef struct {
    s16 f0;
    s16 f2;
    s32 f4;
    s32 f8;
    s32 fc;
} H;
extern s32 func_01ff8000(s32, s32);
extern H data_0208ecd4;
extern A data_0208ece4[64];
extern B data_02091be4[30];
void func_02033910(s32 arg0) {
    B *q;
    s32 j;
    s32 i;
    if (arg0 != 0) {
        data_0208ecd4.f8 = func_01ff8000(arg0, 0xc000);
        data_0208ecd4.fc = 0;
    }
    for (i = 0; i < 64; i++) {
        data_0208ece4[i].f4  = -1;
        data_0208ece4[i].fb8 = 0;
    }
    data_0208ecd4.f0 = 0;
    q                = data_02091be4;
    for (j = 0; j < 30; j++, q++) {
        q->f0  = -1;
        q->f24 = 0;
        q->f28 = 0;
        q->f7ac &= ~1;
    }
    data_0208ecd4.f2 = 0;
}

#include "m2c.h"
typedef struct {
    u8 pad[0x64];
    s16 h;
    u8 pad2[0x9c - 0x66];
    s32 acc;
} G;
extern G data_0206e6d4;
extern double func_020618ec(s32);
extern double func_02063314(double, double);
extern s32 func_020617bc(double);
void func_0201db7c(s32 arg0) {
    s32 t             = data_0206e6d4.acc + arg0;
    data_0206e6d4.acc = t;
    if (t >= 0x1000 || t <= -0x1000) {
        data_0206e6d4.h   = data_0206e6d4.h + func_020617bc(func_02063314(func_020618ec(t), 4096.0));
        data_0206e6d4.acc = 0;
    }
    if (data_0206e6d4.h > 0x64) {
        data_0206e6d4.h = 0x64;
    }
    if (data_0206e6d4.h < 0) {
        data_0206e6d4.h = 0;
    }
}

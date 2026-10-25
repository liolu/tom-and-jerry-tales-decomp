#include "m2c.h"
s32 func_01ff8000(void *, s32);
void func_02051fd0(s32, s32, s32);
extern s16 data_0206ad40[];
typedef struct {
    s16 x, y;
    s32 a, b, c, d;
} B;
extern B data_02087048;
void func_02014be4(void *arg0) {
    data_02087048.x = 0;
    data_02087048.y = 0;
    data_02087048.a = func_01ff8000(arg0, data_0206ad40[2] * 4);
    data_02087048.b = func_01ff8000(arg0, data_0206ad40[1] * 4);
    data_02087048.c = func_01ff8000(arg0, data_0206ad40[2] * 100);
    data_02087048.d = func_01ff8000(arg0, data_0206ad40[1] * 88);
    func_02051fd0(data_02087048.a, 0, data_0206ad40[2] * 4);
    func_02051fd0(data_02087048.b, 0, data_0206ad40[1] * 4);
    func_02051fd0(data_02087048.c, 0, data_0206ad40[2] * 100);
    func_02051fd0(data_02087048.d, 0, data_0206ad40[1] * 88);
}

#include "m2c.h"
typedef struct {
    u8 pad[0x1A];
    u16 a;
    u16 b;
    u16 c;
} I2B;
typedef struct {
    u8 pad[6];
    u16 a;
    u16 b;
    u16 c;
} O2B;
extern I2B data_020880c0;
extern O2B data_020880ec;
void func_0202bf18(s32 m) {
    data_020880ec.a = data_020880c0.a;
    data_020880ec.b = data_020880c0.b;
    data_020880ec.c = data_020880c0.c;
    if (m == 2) {
        data_020880ec.a = data_020880c0.a * 100;
        data_020880ec.b = data_020880c0.b * 100;
        data_020880ec.c = data_020880c0.c * 100;
    }
}

#include "m2c.h"

typedef struct {
    u8 p[0xC];
    s32 a;
    u8 q[8];
    s32 c;
} G;
void func_02022138(void *);
extern u8 data_0206b8ac[];
extern u8 data_0206b8cc[];
extern u8 data_0206b8e8[];
extern G data_020877b4;

s32 func_02022354(s32 arg0) {
    if (arg0 == 1 && data_020877b4.a == 0) {
        func_02022138(data_0206b8ac);
        return 1;
    }
    if (arg0 == 2 && data_020877b4.c == 0) {
        func_02022138(data_0206b8cc);
        return 1;
    }
    if (data_020877b4.a == 0 && data_020877b4.c == 0) {
        func_02022138(data_0206b8e8);
        return 1;
    }
    return 0;
}

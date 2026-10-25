#include "m2c.h"
typedef struct {
    s16 a;
    u8 pad[0x16];
} E;
extern u16 data_020b8140;
extern E data_020b82fc[];
void func_0203b32c(s32 arg0) {
    s32 t = data_020b8140;
    t -= 1;
    data_020b82fc[arg0].a = -1;
    if (arg0 == t) {
        data_020b8140 = t;
    }
}

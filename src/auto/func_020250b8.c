#include "m2c.h"
typedef struct {
    u8 pad[0x30];
    u32 state;
} G;
extern G data_020877d0;
extern void func_02051a48(void);
void func_020250b8(void) {
    switch (data_020877d0.state) {
        case 0:
            data_020877d0.state = 1;
            break;
        case 4:
            data_020877d0.state = 3;
            break;
        case 1:
        case 2:
        case 3:
            break;
        default:
            func_02051a48();
            break;
    }
}

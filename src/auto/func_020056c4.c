#include "m2c.h"
typedef struct {
    u8 pad[0x58];
    u32 b0 : 6;
    u32 f6 : 1;
    u32 rest : 25;
    u8 pad2[0xBC - 0x5C];
} H;
typedef struct {
    u8 pad[0x23];
    u8 v;
} G;
void func_02004e38(void *, s32);
void func_0200a0f8(s32);
extern u8 data_0206a28c[];
extern u8 *data_0206ea14;
extern G data_020880c0;
extern H data_020aecfc[];

void func_020056c4(s32 arg0) {
    H *h = &data_020aecfc[arg0];
    if (h->f6 == 0) {
        return;
    }
    h->f6                             = 0;
    *(s16 *) (data_0206ea14 + 0x1860) = data_020880c0.v;
    func_0200a0f8(8);
    func_02004e38(data_0206a28c, arg0);
}

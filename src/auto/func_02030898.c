#include "m2c.h"
typedef struct {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} E;
typedef struct {
    u8 pad[4];
    u16 idx;
} G;
extern G data_0206cf08;
extern E data_020884d0[];
void func_02030898(s32 *arg0, s32 *arg1) {
    u32 i = data_0206cf08.idx;
    *arg0 = data_020884d0[i].a;
    *arg1 = data_020884d0[i].b;
}

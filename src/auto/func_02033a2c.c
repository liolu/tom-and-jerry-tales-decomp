#include "m2c.h"
typedef struct {
    u8 pad[0xA4];
    u8 name[0x18];
} T;
typedef struct {
    s32 v;
    u8 pad[0xB8];
} L;
extern u16 data_0208ecd4;
extern T data_0208ece4[];
extern L data_0208ed9c[];
extern u8 data_0206d220[];
s32 func_0203382c(void *, s32);
void func_02030ed4(s32 *, s32);
s32 func_02040570(void *, void *, s32);
void func_02033be0(s32, u16);
void func_02030ee0(s32 *, s32);
void strcpy(void *, void *);
s32 func_02033a2c(void *name, s32 b) {
    s32 tmp;
    s32 i;
    L *p;
    i = func_0203382c(name, b);
    if (i < 0) {
        func_02030ed4(&tmp, b);
        func_02033be0(func_02040570(name, data_0206d220, b), data_0208ecd4);
        func_02030ee0(&tmp, b);
        strcpy(data_0208ece4[data_0208ecd4].name, name);
        i             = data_0208ecd4;
        p             = &data_0208ed9c[i];
        p->v          = 0;
        data_0208ecd4 = i + 1;
    }
    return i;
}

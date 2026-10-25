#include "m2c.h"
typedef struct {
    u8 name[0x10];
    u8 name2[0x10];
    s32 used;
} E;
extern E data_021a77a4[];
extern E data_021a77c4[];
void func_02051a48(void);
void func_0205bff0(void *, void *);
s32 func_0204153c(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    E *p = data_021a77a4;
    for (i = 0; i < 0x40; i++, p++) {
        if (p->used == 0) {
            E *e                                       = &data_021a77a4[i];
            *(s32 *) ((u8 *) data_021a77c4 + i * 0x24) = arg2;
            func_0205bff0(e, arg0);
            func_0205bff0(e->name2, arg1);
            return 1;
        }
    }
    func_02051a48();
    return 0;
}

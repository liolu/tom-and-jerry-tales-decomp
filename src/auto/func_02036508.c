#include "m2c.h"

typedef struct E {
    u8 pad[0x4c];
    s32 a;
    s32 b;
    u8 pad2[0xa14 - 0x54];
} E;

s32 CARD_IsPulledOut(void);
void func_020011f4(void);
void func_02054f84(void *);
void func_02054c5c(void *);
s32 FS_OpenFile(void *, void *);
void func_020550c8(void *, void *, s32);
void FS_SeekFile(void *, s32, s32);
extern u8 data_0206d228;

void func_02036508(void *arg0, E *arg1) {
    s32 i;
    E *p;
    if (CARD_IsPulledOut() != 0) {
        func_020011f4();
    }
    if (*(s32 *) ((u8 *) arg1 + 0x48) != 0) {
        func_02054f84(arg1);
        *(s32 *) ((u8 *) arg1 + 0x48) = 0;
    }
    func_02054c5c(arg1);
    if (FS_OpenFile(arg1, arg0) == 0) {
        FS_OpenFile(arg1, &data_0206d228);
    }
    FS_SeekFile(arg1, 0, 0);
    func_020550c8(arg1, (u8 *) arg1 + 0x1E88, 0x18);
    i = 0;
    p = arg1;
    do {
        p->a = -1;
        i += 1;
        p->b = 0;
        p++;
    } while (i < 3);
    FS_SeekFile(arg1, 0x18, 0);
    func_020550c8(arg1, (u8 *) arg1 + 0x1EA0, *(s32 *) ((u8 *) arg1 + 0x1E90));
    *(s32 *) ((u8 *) arg1 + 0x48) = 1;
}

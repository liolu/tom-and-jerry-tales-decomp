#include "m2c.h"
typedef struct {
    u8 name[0x10];
    u8 name2[0x10];
    s32 used;
} E;
extern E data_021a77a4[];
extern E data_021a77c4[];
s32 strcmp(void *, void *);
s32 func_02041454(void *arg0, void *arg1) {
    s32 i;
    E *p = data_021a77a4;
    E *q = data_021a77a4;
    for (i = 0; i < 0x40; i++, p++, q++) {
        if (strcmp(p, arg0) == 0 && strcmp(q->name2, arg1) == 0 && q->used != 0) {
            return *(s32 *) ((u8 *) data_021a77c4 + i * 0x24);
        }
    }
    return 0;
}

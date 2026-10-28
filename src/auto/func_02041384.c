#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
} Ent;
extern Ent data_021a72a4[];
extern char data_021a72b4[];
s32 strcmp(void *, s32);
s32 func_02041384(s32 arg) {
    s32 i  = 0;
    Ent *p = data_021a72a4;
    Ent *q = data_021a72a4;
    do {
        if (strcmp(p, arg) == 0 && q->e != 0) {
            return *(s32 *) (data_021a72b4 + i * 0x14);
        }
        i++;
        p++;
        q++;
    } while (i < 0x40);
    return 0;
}

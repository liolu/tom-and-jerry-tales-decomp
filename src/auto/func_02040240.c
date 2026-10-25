#include "m2c.h"
typedef struct {
    u8 pad[0x1c];
    s32 id;
    s32 pad1;
    u32 pad2 : 2;
    u32 flag : 1;
    u32 rest : 29;
} F;
extern F data_021a6f08[];
extern u8 data_021a6f20[];
s32 func_02040240(s32 arg0) {
    s32 i;
    F *p;
    if (arg0 == *(s32 *) (data_021a6f20 + (s16) (u8) arg0 * 0x28)) {
        p = data_021a6f08;
        for (i = 0; i < 16; i++, p++) {
            if (p->flag != 0 && arg0 == p->id) {
                return 1;
            }
        }
        return 0;
    } else {
        return 0;
    }
}

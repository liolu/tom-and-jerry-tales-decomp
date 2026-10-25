#include "m2c.h"
typedef struct {
    s16 id;
    u16 x0;
    u16 y0;
    u16 x1;
    u16 y1;
} R;
extern u8 data_02088450[];
extern R data_020884f8[];
s32 func_020307f0(u32 arg0, u32 arg1) {
    s32 i = 0;
    R *p;
    s32 n = *(u16 *) (data_02088450 + 4);
    if (n > 0) {
        p = data_020884f8;
        do {
            if (p->x0 <= arg0 && p->y0 <= arg1 && p->x1 >= arg0 && p->y1 >= arg1) {
                return data_020884f8[i].id;
            }
            i++;
            p++;
        } while (i < n);
    }
    return -1;
}

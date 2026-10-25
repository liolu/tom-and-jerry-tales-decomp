#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} Q;
extern u8 data_02088450[];
s32 func_02030794(Q *out, s32 sel) {
    if (sel != 0) {
        *out = *(Q *) (data_02088450 + 0x80);
    } else {
        *out = *(Q *) (data_02088450 + 0x58);
    }
    return *(s32 *) (data_02088450 + 0x10);
}

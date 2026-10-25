#include "m2c.h"
typedef struct {
    s32 a, b, c, d, e, f;
} G;
extern G data_02088434;
void func_020301f8(void) {
    s32 t           = data_02088434.f;
    data_02088434.b = t;
    data_02088434.d += t;
    data_02088434.e += t;
    data_02088434.f = 0;
    data_02088434.c++;
}

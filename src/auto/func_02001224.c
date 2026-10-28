#include "m2c.h"
extern s32 func_0203b160(void);
extern s32 func_0203f320(void);
extern void func_02009e74(void);
extern void func_0202ff40(void);
extern s32 data_0206e68c;
extern u8 data_02088424;
extern u16 data_02088434;
extern s32 data_02088448;
extern s32 SDK_AUTOLOAD_DTCM_START[];
void func_02001224(void) {
    if (func_0203b160() != 0 && func_0203f320() == 4) {
        func_02009e74();
    }
    if (data_02088424 != 0) {
        func_0202ff40();
    }
    data_0206e68c += 1;
    data_02088434 = (data_02088434 == 0) ? 1 : 0;
    data_02088448 += 1;
    *(s32 *) ((u8 *) SDK_AUTOLOAD_DTCM_START + 0x3ff8) |= 1;
}

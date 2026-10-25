#include "m2c.h"

void func_02032d5c(u16);
s32 func_0203a730(s16);
u8 *func_0203a95c(s16);
extern s32 data_0208a358;
extern u8 data_0208a360[];
extern u16 data_020ac15c;

u16 func_0203ac7c(void) {
    u16 j;
    u16 k;
    u16 i;
    u16 sum = 0;
    i       = sum;
    if (data_0208a358 > 0) {
        do {
            u8 *e = data_0208a360 + i * 0x68;
            if (*(s32 *) (e + 0x18) != 0 && *(s32 *) (e + 8) == 1) {
                func_02032d5c(i);
            }
            i++;
        } while (data_0208a358 > i);
    }
    for (j = 0; j < data_020ac15c; j++) {
        s16 c = j;
        if (((s32) (*(s32 *) (func_0203a95c(c) + 0xA0) << 0x1D) >> 0x1F) != 0) {
            sum += func_0203a730(c);
        }
    }
    for (k = 0; k < data_020ac15c; k++) {
        s16 c = k;
        if (((s32) (*(s32 *) (func_0203a95c(c) + 0xA0) << 0x1D) >> 0x1F) == 0) {
            sum += func_0203a730(c);
        }
    }
    return sum;
}

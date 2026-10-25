#include "m2c.h"
typedef struct {
    u16 cur;
    u16 prev;
    u16 p4;
    u16 trig;
    u16 rel;
    u16 p5;
    u16 raw;
    u8 pad2[0x12];
    s32 flag;
} In;
extern In data_02088450;
typedef struct {
    s32 a, b, c;
} G;
extern G data_0206cf08;
void func_020302cc(void) {
    u16 t, x;
    data_02088450.prev = data_02088450.cur;
    if (data_0206cf08.c != 0 && data_02088450.flag == 0) {
        t                 = ((*(volatile u16 *) 0x04000130 | *(volatile u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF;
        data_02088450.raw = t;
        data_02088450.cur = t;
    } else {
        data_02088450.cur = data_02088450.raw;
    }
    if (data_02088450.flag == 0) {
        x                  = data_02088450.prev ^ data_02088450.cur;
        data_02088450.trig = data_02088450.cur & x;
        data_02088450.rel  = data_02088450.prev & x;
    } else {
        data_02088450.rel  = 0;
        data_02088450.trig = 0;
    }
}

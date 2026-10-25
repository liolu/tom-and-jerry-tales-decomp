#include "m2c.h"

void *func_0204f490(void *, void *, ...);
extern u8 data_0206cbe8[];
extern u8 data_0206cbec[];
extern u8 data_0206cbf4[];
extern u8 data_0206cbf8[];
extern u8 data_0206cc04[];
extern u8 data_0206cc08[];
extern u8 data_0206cc14[];
extern u8 data_02088178[];
extern u8 data_02088198[];

void *func_0202c048(s32 t, s32 mode) {
    u8 sp_a[3];
    u8 sp_7[3];
    u8 sp_4[3];
    u8 m;
    u8 s;
    u8 c;
    c = t % 100;
    s = (t / 100) % 60;
    m = t / 6000;
    func_0204f490(sp_a, data_0206cbe8, m);
    if (m < 10) {
        func_0204f490(sp_a, data_0206cbec, data_0206cbf4, m);
    }
    func_0204f490(sp_7, data_0206cbe8, s);
    if (s < 10) {
        func_0204f490(sp_7, data_0206cbec, data_0206cbf4, s);
    }
    func_0204f490(sp_4, data_0206cbe8, c);
    if (c < 10) {
        func_0204f490(sp_4, data_0206cbec, data_0206cbf4, c);
    }
    func_0204f490(data_02088178, data_0206cbf8, sp_a, sp_7, sp_4);
    if (t == 0) {
        func_0204f490(data_02088178, data_0206cc04, data_0206cc08);
    }
    switch (mode) {
        case 2:
            return data_02088178;
    }
    func_0204f490(data_02088198, data_0206cbe8, t);
    if (t == 0) {
        func_0204f490(data_02088198, data_0206cc04, data_0206cc14);
    }
    return data_02088198;
}

#include "m2c.h"

void func_02021680(void);
void func_0202203c(s32);
void func_0202d730(void);
void func_0203fc88(void);
extern u8 data_02087770;

void func_02021f90(void) {
    func_0203fc88();
    func_0203fc88();
    switch (data_02087770) {
        case 0:
            func_0202203c(1);
            break;
        case 1:
            func_02021680();
            break;
        case 2:
            func_0202d730();
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            break;
    }
}

#include "m2c.h"

void func_01ffa724(s32, void *, void *);
void func_02032914(s32);
void func_02032d5c(s32);
void func_02032f54(s32);
void func_02032fdc(s32);
extern u8 data_0208a368[];
extern u8 data_0208a378[];

void func_02031450(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r5;
    temp_r5 = arg2 * 0x68;
    if (*(s32 *) (data_0208a378 + temp_r5) != 0) {
        if (*(s32 *) (data_0208a368 + temp_r5) == 1) {
            func_02032f54(arg2);
        } else {
            func_02032d5c(arg2);
        }
    }
    func_02032914(arg2);
    func_01ffa724(3, arg0, arg1);
    if (*(s32 *) (data_0208a378 + temp_r5) == 0) {
        return;
    }
    func_02032fdc(arg2);
}

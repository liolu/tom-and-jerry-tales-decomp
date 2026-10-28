#include "m2c.h"
s32 func_02022354(s32);
void func_0204c1b0(void);
void func_02051868(void);
void PM_SetBackLight(s32, s32);
void PM_ForceToPowerOff(void);
void PM_GetBackLight(s32 *, s32 *);
void func_02056640(s32, s32, s32);
s32 CARD_IsPulledOut(void);
extern s32 data_0206e5a0;
void func_02000d2c(void) {
    s32 sp4;
    s32 sp0;
    u16 t;
    u32 keep;
    if (((s32) (*(volatile u16 *) 0x027FFFA8 & 0x8000) >> 15) != 0 && func_02022354(3) != 0 && data_0206e5a0 == 0) {
        if (CARD_IsPulledOut() != 0) {
            PM_ForceToPowerOff();
        }
        t                            = *(volatile u16 *) 0x04000304;
        *(volatile u16 *) 0x04000304 = *(volatile u16 *) 0x04000304 & 0xFFFFFDF1;
        keep                         = t & 0x20E;
        PM_GetBackLight(&sp4, &sp0);
        PM_SetBackLight(0, 0);
        PM_SetBackLight(1, 0);
        if (((s32) (*(volatile u16 *) 0x027FFFA8 & 0x8000) >> 15) != 0) {
            do {
                if (CARD_IsPulledOut() != 0) {
                    PM_ForceToPowerOff();
                }
                func_02056640(12, 0, 0);
            } while (((s32) (*(volatile u16 *) 0x027FFFA8 & 0x8000) >> 15) != 0);
        }
        func_02051868();
        *(volatile u16 *) 0x04000304 = (*(volatile u16 *) 0x04000304 & 0xFFFFFDF1) | keep;
        func_0204c1b0();
        *(volatile u32 *) 0x04001000 |= 0x10000;
        func_02051868();
        PM_SetBackLight(0, sp4);
        func_02051868();
        PM_SetBackLight(1, sp0);
        func_02051868();
        func_02051868();
    }
    if (data_0206e5a0 > 0) {
        data_0206e5a0 -= 1;
    }
}

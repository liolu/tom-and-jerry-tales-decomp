#include "m2c.h"

typedef struct {
    s32 pad[9];
    s32 a;
    s32 b;
    s32 rest[7];
} Buf;

typedef struct {
    void (*cb)(void);
    s32 f4;
    s32 f8;
} State;

void func_02030eec(void *, ...);
void DC_FlushRange(void *, s32);
void OS_Terminate(void);
void func_02054c5c(Buf *);
s32 FS_OpenFile(Buf *, void *);
s32 func_02054f84(Buf *);
s32 func_020550c8(Buf *, void *, s32);
s32 CARD_IsPulledOut(void);
extern u8 data_0206d07c;
extern u8 data_0206d080;
extern u8 data_0206d110;
extern u8 data_0206d144;
extern u8 data_0206d174;
extern u8 data_0206d1a8;
extern State data_02088720;

s32 func_020312e0(void *arg0, void *arg1) {
    Buf sp;
    s32 w;
    s32 n;
    s32 r;

    data_02088720.f8 = 1;
    if (data_02088720.f4 == 0) {
        OS_Terminate();
    }
    if (CARD_IsPulledOut() != 0 && data_02088720.cb != NULL) {
        data_02088720.cb();
    }
    func_02054c5c(&sp);
    r = FS_OpenFile(&sp, arg0);
    func_02030eec(&data_0206d144, arg0, r != 0 ? &data_0206d07c : &data_0206d080);
    if (r != 0) {
        n = sp.b - sp.a;
        w = func_020550c8(&sp, arg1, n);
        if (w != n) {
            OS_Terminate();
        }
        func_02030eec(&data_0206d174, arg0, func_02054f84(&sp) != 0 ? &data_0206d07c : &data_0206d080);
        func_02030eec(&data_0206d1a8, w, arg0, arg1);
        DC_FlushRange(arg1, n);
        if (CARD_IsPulledOut() != 0 && data_02088720.cb != NULL) {
            data_02088720.cb();
        }
        return n;
    }
    if (CARD_IsPulledOut() != 0 && data_02088720.cb != NULL) {
        data_02088720.cb();
    }
    func_02030eec(&data_0206d110, arg0);
    return -1;
}

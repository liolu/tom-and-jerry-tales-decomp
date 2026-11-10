#include "m2c.h"
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TP;
typedef struct {
    s16 sel;
    s16 prevSel;
    u16 n;
    volatile s16 f6;
    s32 enabled;
    TP last;
} Cfg;
typedef struct {
    u8 pad0[0xA];
    s16 idx;
    u8 padc[4];
    s32 result;
    volatile s32 f14;
    u8 pad18[8];
    s32 busy;
    s32 mode;
    u8 pad28[0x34];
    u16 f5c;
    u8 pad5e[0x22];
    volatile TP f80;
} St;
extern TP data_02088480[5];
extern TP data_020884a8[5];
extern TP data_020884d0[6];
extern Cfg data_0206cf08;
extern St data_02088450[];
s32 func_02030994(void);
void memcpy(void *, void *, s32);
s32 func_020309a4(TP *, s16 *);
s16 func_020307f0(u16, u16);

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}

void func_02030388(void) {
    s32 i;
    s32 n;
    s32 idx;
    TP *p;
    u32 k;
    if (data_0206cf08.n == 0) {
        return;
    }
    if (func_02030994() != 0 && data_0206cf08.enabled != 0 && data_02088450->busy == 0) {
        memcpy(data_02088480, data_020884a8, sizeof(data_020884a8));
        data_02088450->result = func_020309a4(data_020884a8, &data_02088450->idx);
        if (data_02088450->result != 0) {
            data_02088450->f80 = data_020884d0[data_0206cf08.n];
            memcpy(&data_020884d0[1], &data_020884a8[1], data_0206cf08.n * sizeof(TP));
            for (i = 1; i <= data_0206cf08.n; i++) {
                if (i >= data_02088450->idx) {
                    s32 k2 = (i == data_02088450->idx) ? 0 : (u16) (i - 1);
                    if (data_020884d0[k2].touch == 1 && data_020884d0[k2].valid == 0) {
                        data_020884d0[i].x =
                            (FX_Mul(data_020884d0[k2].x << 12, 0x800) + FX_Mul(data_020884d0[i].x << 12, 0x800)) >> 12;
                        data_020884d0[i].y =
                            (FX_Mul(data_020884d0[k2].y << 12, 0x800) + FX_Mul(data_020884d0[i].y << 12, 0x800)) >> 12;
                    }
                }
            }
        } else {
            memcpy(data_020884d0, data_020884a8, sizeof(data_020884a8));
        }
        if (data_02088450->mode == 1) {
            if (data_02088450->result != 1) {
                return;
            }
            data_0206cf08.prevSel = data_0206cf08.sel;
            k                     = data_0206cf08.n;
            if (data_020884a8[k].touch == 1 && data_020884a8[k].valid == 0) {
                data_0206cf08.last = data_020884a8[k];
                data_0206cf08.sel  = func_020307f0(data_020884a8[k].x, data_020884a8[k].y);
                if (data_02088450->f5c != 0) {
                    return;
                }
                if (data_020884a8[data_0206cf08.n].touch != 1) {
                    return;
                }
                data_0206cf08.f6   = data_0206cf08.sel;
                data_02088450->f14 = 0;
            } else {
                data_0206cf08.sel = -1;
            }
        } else {
            data_0206cf08.prevSel = -1;
            data_0206cf08.f6      = -1;
            data_0206cf08.sel     = -1;
        }
    } else if (data_02088450->busy != 0) {
        data_0206cf08.prevSel = -1;
        data_0206cf08.f6      = -1;
        data_0206cf08.sel     = -1;
    }
}

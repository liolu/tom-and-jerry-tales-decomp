#include "m2c.h"
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TP;
typedef struct {
    u16 n;
    u16 pad2;
    s32 pad4;
    s32 mode;
    TP last;
} TS;
extern TS data_020886bc;
extern TP data_020886d0[];
extern TP data_020886f8[];
extern s32 data_0206cf1c;
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(TP *);
s32 func_02055cc0(void);
void TP_GetCalibratedPoint(TP *, TP *);

s32 func_020309a4(TP *out, s16 *idx) {
    TP t;
    s32 k;
    TP cal;
    s32 i;
    s32 cnt;
    s32 latest;
    out[0] = data_020886d0[data_020886bc.n];
    *idx   = -1;
    if (data_020886bc.mode == 0) {
        TP_RequestSamplingAsync();
        if (TP_WaitCalibratedResult(&out[1]) != 0) {
            cnt = data_020886bc.n + 1;
            for (i = 0; i < cnt; i++) {
                out[i] = data_020886d0[i];
            }
            return 0;
        }
        *idx = 1;
    } else {
        latest = func_02055cc0();
        if (data_0206cf1c == latest && data_0206cf1c != -1) {
            cnt = data_020886bc.n + 1;
            for (i = 0; i < cnt; i++) {
                out[i] = data_020886d0[i];
            }
            return 0;
        }
        for (i = 0; i < data_020886bc.n; i++) {
            k = latest - data_020886bc.n + i + 1;
            if (k < 0) {
                k += data_020886bc.n + 1;
            }
            TP_GetCalibratedPoint(&cal, &data_020886f8[k]);
            if (*idx < 0 && cal.valid == 0) {
                *idx = i + 1;
            }
            t                      = cal;
            data_020886f8[k].valid = 1;
            data_020886bc.last     = t;
            out[i + 1]             = t;
        }
        data_0206cf1c = latest;
    }
    cnt = data_020886bc.n;
    for (i = 0; i <= cnt; i++) {
        data_020886d0[i] = out[i];
    }
    return 1;
}

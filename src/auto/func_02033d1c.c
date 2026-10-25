#include "m2c.h"

typedef struct {
    s16 id;
    u8 pad[0x7AA];
    u32 fl : 1;
} A;
typedef struct {
    s32 f;
    u8 pad[0xB8];
} C;
typedef struct {
    u16 a, cnt;
} H;
extern H data_0208ecd4;
extern A data_02091be4[];
extern C data_0208ed9c[];
extern void func_02051f18(void *, void *, int);
extern void func_02033c6c(u16, u16);

s32 func_02033d1c(s16 arg0, void *arg1) {
    u16 i;
    int idx;
    if (data_0208ecd4.cnt == 0x1d) {
        return -1;
    }
    i = 0;
    do {
        if (data_02091be4[i].id == -1) {
            idx = i;
            break;
        }
        i++;
    } while (i < 0x1e);
    data_02091be4[idx].id = arg0;
    func_02051f18(arg1, (u8 *) &data_02091be4[idx] + 8, 12);
    if (data_0208ed9c[data_02091be4[idx].id].f != 0) {
        data_02091be4[idx].fl = 1;
    } else {
        func_02033c6c(idx, data_02091be4[idx].id);
    }
    data_0208ecd4.cnt++;
    return idx;
}

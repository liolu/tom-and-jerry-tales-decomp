#include "m2c.h"
typedef struct {
    u8 b[0xBC];
} E;
extern u16 data_0208ecd4;
extern E data_0208ece4[];
s32 strcmp(void *, s32);
s32 func_0203382c(s32 a) {
    u16 n = data_0208ecd4;
    s32 i;
    for (i = 0; i < n; i++) {
        if (strcmp(&data_0208ece4[i].b[0xA4], a) == 0) {
            return i;
        }
    }
    return -1;
}

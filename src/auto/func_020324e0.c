#include "m2c.h"
typedef struct {
    u8 pad[0x58];
    u8 name[0x10];
} E;
extern s32 data_0208a358;
extern E data_0208a360[];
s32 STD_CompareString(void *, void *);
s32 func_020324e0(void *arg0) {
    s32 i;
    for (i = 0; i < data_0208a358; i++) {
        if (STD_CompareString(data_0208a360[i].name, arg0) == 0) {
            return i;
        }
    }
    return -1;
}

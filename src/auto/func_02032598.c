#include "m2c.h"
typedef struct {
    char pad[0x54];
    unsigned int f0 : 1;
    unsigned int rest : 31;
    char name[0x68 - 0x58];
} R;
extern int data_0208a358;
extern R data_0208a360[];
s32 func_020324e0(void *);
void STD_CopyString(void *, void *);
s32 func_02032598(void *s) {
    s32 i = func_020324e0(s);
    if (i < 0) {
        STD_CopyString(data_0208a360[data_0208a358].name, s);
        i                   = data_0208a358;
        data_0208a360[i].f0 = 1;
        data_0208a358       = i + 1;
    }
    return i;
}

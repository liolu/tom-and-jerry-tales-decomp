#include "m2c.h"
typedef struct {
    u8 pad[4];
    u16 idx;
    u16 f6;
    u8 pad2[6];
    u16 fE;
} N;
void func_02036f34(N *);
extern N **data_027e0080;
void func_02036f8c(N *arg0) {
    arg0->fE = 0;
    if (arg0->f6 != 0) {
        func_02036f34(arg0);
        return;
    }
    if ((*data_027e0080)[arg0->idx].fE != 0) {
        func_02036f8c(&(*data_027e0080)[arg0->idx]);
    }
    if ((*data_027e0080)[arg0->idx + 1].fE == 0) {
        return;
    }
    func_02036f8c(&(*data_027e0080)[arg0->idx + 1]);
}

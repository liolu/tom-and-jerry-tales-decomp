#include "m2c.h"
typedef void (*Fn)(void);
extern Fn data_02064220[];
void func_0203d068(s32 arg0) {
    data_02064220[arg0]();
}

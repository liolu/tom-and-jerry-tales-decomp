#include "m2c.h"
extern void func_02051a48(void);
typedef struct {
    s32 lo : 16;
    s32 b : 8;
    s32 c : 8;
} W;
extern s32 func_02031610(W *);
s32 func_02031eb4(W *p) {
    s32 r;
    if (p == 0) {
        func_02051a48();
    }
    r = func_02031610(p);
    return (r * ((8 << p->b) * (8 << p->c))) >> 3;
}

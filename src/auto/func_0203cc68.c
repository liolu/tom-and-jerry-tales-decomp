#include "m2c.h"
static inline u32 getMain(void) {
    return ((*(volatile u32 *) 0x04000000) & 0x1F00) >> 8;
}
static inline u32 getSub(void) {
    return ((*(volatile u32 *) 0x04001000) & 0x1F00) >> 8;
}
static inline void setMain(u32 p) {
    (*(volatile u32 *) 0x04000000) = ((*(volatile u32 *) 0x04000000) & ~0x1F00) | (p << 8);
}
static inline void setSub(u32 p) {
    (*(volatile u32 *) 0x04001000) = ((*(volatile u32 *) 0x04001000) & ~0x1F00) | (p << 8);
}
void func_0203cc68(s32 n, s32 flag) {
    u32 v;
    if (flag == 0) {
        v = getMain();
    } else {
        v = getSub();
    }
    v |= 1 << n;
    if (flag == 0) {
        setMain(v);
    } else {
        setSub(v);
    }
}

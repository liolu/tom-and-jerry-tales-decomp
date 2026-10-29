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
extern u32 data_020641e0[];
s32 func_0203dee8(void);
void func_0203cdd0(s32 idx) {
    if (func_0203dee8() != 0) {
        idx = data_020641e0[idx];
        setMain(getMain() & ~idx);
    } else {
        idx = data_020641e0[idx];
        setSub(getSub() & ~idx);
    }
}

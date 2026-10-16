/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_Init from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/gx/calls/GX_Init.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_0204c2a4(void);
extern s32 func_0204f32c(void);
extern void func_02051a48(void);
extern void func_02051a74(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_02051f04(u32 data, void *dest, u32 size);
extern vu16 data_021b03a0[];
extern u32 data_0206de64[];
void func_0204bff4(void) {
    s32 lockId;

    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = (u16) (((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e);
    (*(vu16 *) 0x04000304) = (u16) ((*(vu16 *) 0x04000304) | 0x0001);

    func_0204c2a4();

    while (data_021b03a0[1] == 0) {
        lockId = func_0204f32c();
        if (lockId == (-3)) {
            func_02051a48();
        }
        data_021b03a0[1] = (u16) lockId;
    }

    (*(vu16 *) 0x04000004) = 0;
    (*(vu32 *) 0x04000000) = 0;

    if (data_0206de64[1] != (u32) -1) {
        func_02051a74(data_0206de64[1], ((void *) 0x04000008), 0, 0x60);
        (*(vu16 *) 0x0400006c) = 0;
        func_02051a74(data_0206de64[1], ((void *) 0x04001000), 0, 0x70);
    } else {
        func_02051f04(0, ((void *) 0x04000008), 0x60);
        (*(vu16 *) 0x0400006c) = 0;
        func_02051f04(0, ((void *) 0x04001000), 0x70);
    }

    *(vu16 *) 0x04000020 = 0x100;
    *(vu16 *) 0x04000026 = 0x100;
    *(vu16 *) 0x04000030 = 0x100;
    *(vu16 *) 0x04000036 = 0x100;
    *(vu16 *) 0x04001020 = 0x100;
    *(vu16 *) 0x04001026 = 0x100;
    *(vu16 *) 0x04001030 = 0x100;
    *(vu16 *) 0x04001036 = 0x100;
}

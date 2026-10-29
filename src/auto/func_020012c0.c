#include "m2c.h"
typedef struct {
    u8 language;
    u8 favoriteColor;
    u8 birthMonth;
    u8 birthDay;
    u16 nickName[10];
    u16 nickNameLength;
    u16 comment[26];
    u16 commentLength;
} OwnerInfo;
extern u16 data_02086b84[];
extern u8 data_0206e6a4[];
extern u8 data_0206e6c8[];
extern u8 data_0206e698[];
extern u8 data_0206e6bc[];
extern u8 data_020692c4[];
extern u8 data_0206e688[];
extern u8 data_0206e6b0[];
void OS_InitLock(void);
u32 OS_GetConsoleType(void);
void OS_EnableMainExArena(void);
void OS_Init(void);
void OS_InitTick(void);
void func_0204bff0(void);
void func_0204bff4(void);
void GX_DispOff(void);
void func_0204ee24(u32, void (*)(void));
void func_0204ef68(u32);
void func_0204c140(void);
void GX_SetBankForLCDC(u32);
void MIi_CpuClearFast(u32, void *, u32);
void func_0204d060(void);
void G3X_Init(void);
void G3X_InitMtxStack(void);
void func_0204c1f8(u32, u32, u32);
void G3X_SetClearColor(u32, u32, u32, u32, u32);
void func_0204db74(s32, s32, s32, s32, s32, s32, s32, void *);
void OS_InitArena(void);
void OS_GetOwnerInfo(OwnerInfo *);
void MI_CpuCopy8(void *, void *, u32);
void func_02030238(u32, u32);
void func_02040614(void);
void func_0200e170(void);
void func_02030c98(void);
void func_02030ed0(void);
void func_02030ef8(u32);
void func_02030db8(void *, u32);
s32 func_02030f40(void *, void *, void *, void *);
void func_02030e18(void *);
u64 OS_GetTick(void);
void func_02030134(u32);
void func_020099fc(void);
void func_0203cc68(u32, u32);
void func_0203f4a4(void);
void func_0203f5e4(void);
void func_0203f7c8(u32);
void func_0203f7d8(u32);
void func_02001224(void);
static inline u16 setIME(u16 v) {
    u16 prev                    = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = v;
    return prev;
}

static inline void G3X_AlphaTest_(int e) {
    if (e) {
        *(volatile u16 *) 0x4000060 = (u16) ((*(volatile u16 *) 0x4000060 & ~0x3000) | 8);
    }
}
static inline void G3X_AntiAlias_(int e) {
    if (e) {
        *(volatile u16 *) 0x4000060 = (u16) ((*(volatile u16 *) 0x4000060 & ~0x3000) | 0x10);
    }
}
static inline void G2_BlendNone_(void) {
    *(volatile u16 *) 0x4000050 = 0;
}
static inline void G3_SwapBuffers_(int s, int b) {
    *(volatile u32 *) 0x4000540 = (u32) ((b << 1) | s);
}

static inline void G2_SetBG1Priority_(int p) {
    *(volatile u16 *) 0x400000A = (u16) ((*(volatile u16 *) 0x400000A & ~3) | p);
}
static inline void G2_BG1Mosaic_(int e) {
    if (e) {
        *(volatile u16 *) 0x400000A |= 0x40;
    } else {
        *(volatile u16 *) 0x400000A &= ~0x40;
    }
}
void func_020012c0(void) {
    OwnerInfo info;
    u16 len;
    OS_InitLock();
    if (OS_GetConsoleType() & 2) {
        OS_EnableMainExArena();
    }
    OS_Init();
    OS_InitTick();
    func_0204bff0();
    func_0204bff4();
    GX_DispOff();
    *(volatile u32 *) 0x4001000 &= ~0x10000;
    func_0204ee24(1, func_02001224);
    func_0204ef68(1);
    setIME(1);
    func_0204c140();
    GX_SetBankForLCDC(0x1FF);
    MIi_CpuClearFast(0, (void *) 0x6800000, 0xA4000);
    func_0204d060();
    MIi_CpuClearFast(0xC0, (void *) 0x7000000, 0x400);
    MIi_CpuClearFast(0, (void *) 0x5000000, 0x400);
    MIi_CpuClearFast(0xC0, (void *) 0x7000400, 0x400);
    MIi_CpuClearFast(0, (void *) 0x5000400, 0x400);
    G3X_Init();
    G3X_InitMtxStack();
    func_0204c1f8(1, 0, 1);
    *(volatile u32 *) 0x4000000 = (*(volatile u32 *) 0x4000000 & ~0x1F00) | 0x1300;
    *(volatile u16 *) 0x4000008 = (u16) ((*(volatile u16 *) 0x4000008 & ~3) | 3);
    *(volatile u16 *) 0x400000A = (u16) ((*(volatile u16 *) 0x400000A & 0x43) | 0x700);
    G2_SetBG1Priority_(0);
    G2_BG1Mosaic_(0);
    *(volatile u16 *) 0x4000060 = (u16) ((*(volatile u16 *) 0x4000060 & ~0x3000) | 8);
    *(volatile u16 *) 0x4000060 = (u16) ((*(volatile u16 *) 0x4000060 & ~0x3000) | 0x10);
    *(volatile u16 *) 0x4000050 = 0;
    *(volatile u32 *) 0x4000540 = 3;
    G3X_SetClearColor(0, 10, 0x7FFF, 0x3F, 0);
    *(volatile u32 *) 0x4000580 = 0xBFFF0000;
    func_0204db74(0x800, 0xDDB, 0x1555, 0x1000, 0x190000, 0x1000, 1, 0);
    *(volatile u32 *) 0x400044C = 0;
    OS_InitArena();
    OS_GetOwnerInfo(&info);
    len = (info.nickNameLength > 10) ? 10 : info.nickNameLength;
    MI_CpuCopy8(info.nickName, data_02086b84, len * 2);
    data_02086b84[len] = 0;
    func_02030238(0, 1);
    func_02040614();
    func_0200e170();
    func_02030c98();
    func_02030ed0();
    func_02030ef8(0x25800);
    func_02030db8(data_0206e6a4, 0x16BC00);
    func_02030db8(data_0206e6c8, 0x8C00);
    func_02030db8(data_0206e698, 0x4B000);
    func_02030ed0();
    func_02030db8(data_0206e6bc, 0x302);
    func_02030f40(data_020692c4, data_0206e688, data_0206e6c8, data_0206e698);
    func_02030e18(data_0206e6b0);
    func_02030ed0();
    func_02030134((u32) (OS_GetTick() & 0xFFFFFFFF));
    func_020099fc();
    func_0203cc68(0, 0);
    func_0203f4a4();
    func_0203f5e4();
    func_0203f7c8(0x7F);
    func_0203f7d8(0x7F);
}

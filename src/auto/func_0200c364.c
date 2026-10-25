#include "m2c.h"
typedef struct {
    s32 a, b, c;
} V3;
void func_020037f8(s32, s32, s32, V3 *);
s32 func_02003d94(void);
void func_02004ac4(void);
void func_0200a0a0(s32);
void func_02014be4(void *);
void func_02015070(void *);
s32 func_020306c0(s32);
void func_0203179c(void *);
void func_02032604(void *);
void func_02033200(void *, void *);
void func_02033ad0(void *, void *);
void func_0203a4a8(void *, void *);
void func_0204089c(s32, void *, void *);
void func_02042944(void);
s32 func_02046454(void *, void *, void *);
void func_020464b4(V3 *, s32, void *, void *);
void func_020464d4(s32, s32, void *, void *);
extern V3 data_02064110;
extern u8 data_0206a53c;
extern u8 data_0206e698;
extern u8 data_0206e6a4;
extern void *data_0206ea14;
extern u8 data_0206fcac;
extern s32 data_02086d7c;
void func_0200c364(void) {
    V3 sp0;
    s32 t;
    func_02014be4(&data_0206e6a4);
    func_02015070(&data_0206e6a4);
    func_02042944();
    func_02003d94();
    func_0204089c(data_02086d7c, &data_0206e6a4, &data_0206e698);
    data_0206ea14 = 0;
    if (func_020306c0(8) != 0) {
        sp0 = data_02064110;
        t   = func_02046454(&data_0206a53c, &data_0206e6a4, &data_0206e698);
        func_020464b4(&sp0, t, &data_0206e6a4, &data_0206e698);
        func_020464d4(t, t, &data_0206e6a4, &data_0206e698);
        func_02004ac4();
        data_0206ea14 = &data_0206fcac;
        func_020037f8(0, 0, 0, &data_02064110);
        *(volatile s32 *) 0x040004C8 = 0x2D8B6127;
        *(volatile s32 *) 0x040004CC = 0x7FFF;
        *(volatile s32 *) 0x040004C8 = 0x6D8B62D8;
        *(volatile s32 *) 0x040004CC = 0x40006318;
        *(volatile s32 *) 0x040004C8 = 0xAD8B6127;
        *(volatile s32 *) 0x040004CC = 0x80000000;
        *(volatile s32 *) 0x040004C8 = 0xED8B6127;
        *(volatile s32 *) 0x040004CC = 0xC0000000;
    }
    func_0203a4a8(&data_0206e698, &data_0206e6a4);
    func_02033200(&data_0206e698, &data_0206e698);
    func_02033ad0(&data_0206e698, &data_0206e6a4);
    func_02032604(&data_0206e698);
    func_0203179c(&data_0206e698);
    func_0200a0a0(0);
}

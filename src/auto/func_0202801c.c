#include "m2c.h"
extern char data_0206c31c[];
extern char data_0206c334[];
extern char data_0206c350[];
extern char data_0206c36c[];
extern char data_0206c388[];
extern char data_0206c3a4[];
extern char data_0206c3c4[];
extern char data_0206c3e4[];
extern char data_0206c404[];
extern char data_0206c41c[];
extern char data_0206c434[];
extern u8 data_0206e698[];
extern char *data_0206ba10[];
extern u8 data_0206bb5c[];
extern char *data_0206b918[];
extern u8 data_0206bd88[];
extern char *data_0206ba34[];
extern char *data_0206b9bc[];
extern u8 data_0206baec[];
extern u8 data_02087808[];
typedef struct {
    u16 c[0x100];
} Pal;
typedef struct {
    u16 c[16];
} Pl16;
typedef struct {
    Pl16 p[16];
} Pal2;
void func_0203b96c(s32);
void func_0203bc90(char *, void *, u16, u32, u32, u32, u32, u32);
void MIi_CpuCopy16(void *, void *, u32);
s32 sprintf(char *, const char *, ...);

void func_0202801c(void) {
    char buf[0x20];
    u8 i;
    func_0203b96c(0);
    func_0203bc90(data_0206c31c, data_0206e698, 0x1E, 0x100, 0xC0, 2, 0, 1);
    func_0203bc90(data_0206c334, data_0206e698, 0x1D, 0x100, 0xC0, 2, 0, 2);
    func_0203bc90(data_0206c350, data_0206e698, 0x21, 0x100, 0xC0, 2, 0, 11);
    func_0203bc90(data_0206c36c, data_0206e698, 0x22, 0x100, 0xC0, 2, 0, 12);
    for (i = 0; i < 9; i++) {
        func_0203bc90(data_0206ba10[i], data_0206e698, data_0206bb5c[i], 0, 0xC0, 2, 0, 3);
    }
    func_0203bc90(data_0206b918[75], data_0206e698, data_0206bd88[4], 0, 0xC0, 1, 0, 4);
    func_0203bc90(data_0206b918[77], data_0206e698, data_0206bd88[6], 0, 0xC0, 1, 0, 4);
    func_0203bc90(data_0206b918[79], data_0206e698, data_0206bd88[8], 0, 0xC0, 1, 0, 4);
    func_0203bc90(data_0206b918[81], data_0206e698, data_0206bd88[10], 0, 0xC0, 1, 0, 4);
    func_0203bc90(data_0206b918[76], data_0206e698, data_0206bd88[5], 0, 0xC0, 1, 0, 5);
    func_0203bc90(data_0206b918[80], data_0206e698, data_0206bd88[9], 0, 0xC0, 1, 0, 5);
    func_0203bc90(data_0206b918[78], data_0206e698, data_0206bd88[7], 0, 0xC0, 1, 0, 6);
    func_0203bc90(data_0206b918[82], data_0206e698, data_0206bd88[11], 0, 0xC0, 1, 0, 6);
    func_0203bc90(data_0206b918[83], data_0206e698, data_0206bd88[12], 0, 0xC0, 1, 0, 10);
    for (i = 0; i < 4; i++) {
        func_0203bc90(data_0206ba34[i], data_0206e698, data_0206bd88[i], 0, 0xC0, 1, 0, 7);
    }
    func_0203bc90(data_0206c388, data_0206e698, 9, 0, 0xC0, 2, 0, 8);
    {
        u8 *p = (u8 *) 0x5000200;
        MIi_CpuCopy16(p + 0x102, data_02087808, 8);
    }
    func_0203b96c(1);
    for (i = 0; i < 6; i++) {
        func_0203bc90(data_0206b9bc[i], data_0206e698, data_0206baec[i], 0, 0xC0, 3, 0, 9);
    }
    func_0203bc90(data_0206c3a4, data_0206e698, 0x1F, 0, 0xC0, 2, 0, 10);
    func_0203bc90(data_0206c3c4, data_0206e698, 0x20, 0, 0xC0, 1, 0, 10);
    func_0203bc90(data_0206c3e4, data_0206e698, 0x23, 0, 0xC0, 2, 0, 13);
    func_0203bc90(data_0206c3c4, data_0206e698, 0x24, 0, 0xC0, 1, 0, 10);
    func_0203b96c(0);
    func_0203bc90(data_0206c404, data_0206e698, 0x3E, 0, 0xC0, 0, 0, 15);
    func_0203bc90(data_0206c41c, data_0206e698, 0x3F, 0, 0xC0, 0, 0, 15);
    for (i = 0; i < 4; i++) {
        sprintf(buf, data_0206c434, i + 1);
        func_0203bc90(buf, data_0206e698, i + 0x3A, 0, 0xC0, 1, 0, 0);
    }
}

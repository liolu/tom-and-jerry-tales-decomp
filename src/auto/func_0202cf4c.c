extern void func_020015f0();
extern void func_0200160c();
extern void func_02001654();
extern void func_02002608();
extern void func_02003f98();
extern void func_0202d37c();
extern void func_02030f40();
extern void func_020314d0();
extern void func_020321ec();
extern void func_0203253c();
extern void func_02032bc8();
extern void func_020330b4();
extern void func_02033910();
extern void func_020352dc();
extern void func_0203a294();
extern void func_0203ac7c();
extern void func_0203cd2c();
extern void func_0203cd5c();
extern void func_0203cf6c();
extern void func_0203cff0();
extern void func_0203d098();
extern void func_0203d0d8();
extern void func_0203d498();
extern void func_0203de64();
extern void func_0203de74();
extern void func_0203de84();
extern void func_0203de98();
extern void G3X_Reset();
typedef struct {
    char p0[2];
    unsigned char b2;
    unsigned char b3;
    char p4[2];
    unsigned char b6;
    char p7[0xd];
    int f14;
    int f18;
} S;
extern S data_020881b8;
extern unsigned char data_0206cc1c;
extern char data_0206cc40, data_0206cc5c, data_0206e690, data_0206e698, data_0206e6a4, data_020b8be4, data_020b8c0c;
extern int data_020b8b44[];
void func_0202cf4c(void) {
    switch (data_020881b8.b3) {
        case 0:
            if (data_0206cc1c != 0) {
                func_0200160c();
                func_02001654(6);
                *(int *) 0x04000000 = (*(int *) 0x04000000 & ~0x1F00) | 0x1100;
                func_020314d0();
                func_020321ec();
                func_0203253c();
                func_0203a294();
                func_02032bc8();
                func_020330b4();
                func_020352dc(1, 0x3F, 1, 0x1F);
                func_02033910(&data_0206e6a4);
                func_020015f0();
                func_0203cd2c();
                func_02030f40(&data_0206cc40, &data_0206e690, &data_0206e6a4, &data_0206e698);
            }
            func_0203cff0(4, 4, 0, 1, 0xC, 0, 3);
            func_0203cf6c(5, 5, 1, 0, 0xD, 2, 2, 0);
            func_0203d498(&data_0206cc5c, &data_0206e698, 0, 1, &data_020b8be4);
            func_0203cd5c(data_020b8b44[0xA0 / 4]);
            func_0203cd5c(data_020b8b44[0xC8 / 4]);
            func_0203de64(5);
            func_0203de98(data_020881b8.f18);
            func_0203de84(0);
            func_0203de74(0);
            data_020881b8.f14 = 1;
            break;
        case 1:
            if (data_0206cc1c != 0) {
                G3X_Reset();
                func_02002608();
                *(int *) 0x04000444 = 0;
                func_02003f98();
                func_0203ac7c();
                ((int *) 0x04000448)[0]        = 1;
                ((int *) 0x04000448)[0xF8 / 4] = 1;
            }
            if ((int) data_020881b8.b2 % 16 != 0) {
                return;
            }
            if (data_020881b8.b6 == 0) {
                return;
            }
            func_0203d0d8(0, (unsigned char) (data_020881b8.b2 - 0x10), 0x100, 0x10, 0, 0, &data_020b8c0c);
            func_0202d37c(0x10);
            break;
        case 2:
            func_0203d098(&data_020b8c0c);
            *(int *) 0x04001014 = 0;
            break;
    }
}

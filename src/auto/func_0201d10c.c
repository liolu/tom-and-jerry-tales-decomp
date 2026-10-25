typedef struct {
    char pad[0x54];
    unsigned int w0 : 1, w1 : 1, w2 : 1, w3 : 1, w4 : 1, w5 : 1, w6 : 1, w7 : 1, w8 : 1, w9 : 1, w10 : 1, w11 : 1, w12 : 1,
        w13 : 19;
    unsigned char a0 : 1, a1 : 1, a2 : 1, a3 : 1, a4 : 1, a5 : 1, a6 : 1, a7 : 1;
    unsigned char c0 : 1, c1 : 1, c2 : 1, c3 : 1, c4 : 1, c5 : 1, c6 : 1, c7 : 1;
} S;
extern S data_0206e6d4;
unsigned char func_0201d10c(unsigned int n) {
    switch (n) {
        case 0:
            return data_0206e6d4.w0;
        case 1:
            return data_0206e6d4.w1;
        case 2:
            return data_0206e6d4.w2;
        case 3:
            return data_0206e6d4.w3;
        case 4:
            return data_0206e6d4.w4;
        case 5:
            return data_0206e6d4.w5;
        case 6:
            return data_0206e6d4.w6;
        case 7:
            return data_0206e6d4.w7;
        case 9:
            return data_0206e6d4.w8;
        case 10:
            return data_0206e6d4.w9;
        case 14:
            return data_0206e6d4.c0;
        case 11:
            return data_0206e6d4.c1;
        case 15:
            return data_0206e6d4.c2;
        case 8:
            return data_0206e6d4.c3;
        case 24:
            return data_0206e6d4.c4;
        case 25:
            return data_0206e6d4.c5;
        case 26:
            return data_0206e6d4.c6;
        case 12:
            return data_0206e6d4.w10;
        case 13:
            return data_0206e6d4.w11;
        case 16:
            return data_0206e6d4.w12;
        case 17:
            return data_0206e6d4.a1;
        case 18:
            return data_0206e6d4.a2;
        case 19:
            return data_0206e6d4.a3;
        case 20:
            return data_0206e6d4.a4;
        case 21:
            return data_0206e6d4.a5;
        case 22:
            return data_0206e6d4.a6;
        case 23:
            return data_0206e6d4.a7;
        default:
            return 0;
    }
}

extern int data_0206e684;
void func_020145d8(int);
void func_02014e34(int);
void func_02014e90(void *);
void func_0202136c(void *);

void func_02015da4(unsigned int kind, unsigned char *p) {
    unsigned char n = 0;
    int base        = 0;
    unsigned char i;
    switch (kind) {
        case 0:
            n    = p[0x3f];
            base = *(int *) (p + 0x40);
            break;
        case 1:
            n    = p[0x44];
            base = *(int *) (p + 0x48);
            break;
        case 2:
            n    = p[0x5a];
            base = *(int *) (p + 0x5c);
            break;
        case 3:
            n    = p[0x60];
            base = *(int *) (p + 0x64);
            break;
        case 4:
            for (; n < p[0x4c]; n++) {
                int off = n * 0x58;
                unsigned char *e;
                func_0202136c(*(unsigned char **) (p + 0x50) + off);
                func_02014e90(*(unsigned char **) (p + 0x50) + off);
                e = *(unsigned char **) (p + 0x50) + off;
                if (*(int *) (e + 4) == 1) {
                    unsigned short w = *(unsigned short *) (e + 0x30);
                    unsigned short m = *(unsigned short *) (p + 0x3c);
                    if ((int) (*(unsigned short *) (e + 0x28) + w) > m && m >= w) {
                        *(unsigned short *) (e + 0x28) = m - w;
                    }
                }
            }
            return;
    }
    for (i = 0; i < n; i++) {
        if (data_0206e684 == 0) {
            func_020145d8(i * 100 + base);
        }
        func_02014e34(i * 100 + base);
    }
}

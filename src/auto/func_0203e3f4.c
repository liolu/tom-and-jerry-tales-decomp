typedef struct {
    int a;
    int b;
    int c;
    char pad[0x14];
    short *d;
} S;
extern unsigned short data_02064168[];
short *func_0203d080(int);
int func_0203df50(int);
int func_0203df68(int);
void func_0203e3f4(S *arg0) {
    short *p;
    unsigned char j, i;
    unsigned char w, h;
    int t = arg0->b;
    int t2;
    if (func_0203df50(arg0->c) == 0) {
        return;
    }
    t2 = t * 2;
    w  = *(unsigned short *) ((char *) data_02064168 + t2);
    h  = *(unsigned short *) ((char *) data_02064168 + 0x12 + t2);
    if (func_0203df68(arg0->c) != 0) {
        p = arg0->d;
    } else {
        p = func_0203d080(arg0->a);
    }
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            *p++ = j + (i << 5);
        }
    }
}

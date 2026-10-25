typedef struct {
    char pad[0x30];
    unsigned short *p;
} G;
extern G data_02087410;
extern void func_02051ee8(void *, void *, int);
void func_0201c750(signed char *a) {
    unsigned char buf[16];
    unsigned short v;
    int c;
    int b = (*a + 9) * 16;
    v     = data_02087410.p[b + 15];
    c     = b + 7;
    func_02051ee8(&data_02087410.p[c], buf, 16);
    func_02051ee8(buf, &data_02087410.p[b + 8], 16);
    data_02087410.p[c] = v;
}

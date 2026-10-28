typedef struct {
    char pad[0x30];
    unsigned short *p;
} G;
extern G data_02087410;
extern void MIi_CpuCopy16(void *, void *, int);
void func_0201c750(signed char *a) {
    unsigned char buf[16];
    unsigned short v;
    int c;
    int b = (*a + 9) * 16;
    v     = data_02087410.p[b + 15];
    c     = b + 7;
    MIi_CpuCopy16(&data_02087410.p[c], buf, 16);
    MIi_CpuCopy16(buf, &data_02087410.p[b + 8], 16);
    data_02087410.p[c] = v;
}

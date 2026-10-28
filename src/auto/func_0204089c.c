typedef struct {
    int w[25];
} Blob;
typedef struct {
    int a, b, c;
} V3;
typedef struct {
    char b[64];
} Buf;
extern int data_021a7234[3];
extern int data_021a7224[];
extern Blob data_021a7240;
extern V3 data_021a7244;
extern char data_0206dbdc[];
extern char data_0206dc10[];
extern char data_0206dc3c[];
extern char data_0206dc40[];
extern char data_0206dc48[];
extern int data_0206dbc0;
int strcmp(void *, void *);
V3 *func_02041610(void);
int func_02041c94(int, int, int);
void func_02041640(void);
void func_020415b8(void *);
void sprintf(void *, void *, int, int, void *);
void func_02040d5c(void *, int, int);
void func_02041654(int, int, int);

void func_0204089c(int a, int b, int c) {
    Blob saved;
    struct {
        int p;
        void *q;
        int r;
    } args;
    V3 oldv;
    Buf buf;
    saved                     = data_021a7240;
    oldv                      = *(V3 *) &data_021a7224[4];
    *(V3 *) &data_021a7224[4] = data_021a7244;
    if (strcmp((void *) ((V3 *) data_021a7234)->b, data_0206dbdc) == 0) {
        data_021a7234[0] = (int) data_0206dc3c;
        data_021a7234[1] = (int) data_0206dc10;
        data_021a7234[2] = 0;
        *(V3 *) &args    = *func_02041610();
    } else {
        args.p = a;
        args.q = data_0206dbdc;
        args.r = func_02041c94(a, b, c);
    }
    func_02041640();
    func_020415b8(&args);
    sprintf(&buf, data_0206dc40, data_0206dbc0, a, data_0206dc48);
    func_02040d5c(&buf, b, c);
    func_02041654(0, b, c);
    data_021a7240             = saved;
    *(V3 *) &data_021a7224[4] = oldv;
}

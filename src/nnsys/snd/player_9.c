typedef struct {
    char pad[0x20];
    unsigned char b20;
} Q;
typedef struct {
    char p0[4];
    Q *q;
    char p8[0x14];
    char sub[0x10];
    unsigned char b2c, b2d, b2e, b2f;
    int i30;
    char p34[8];
    unsigned char b3c, b3d;
    short s3e;
    unsigned char b40, b41;
} N;
extern char sPrioList[];
extern short data_020686c0[];
extern N *NNS_FndGetNextListObject(void *, void *);
extern void ForceStopSeq(void *);
extern void ShutdownPlayer(void *);
extern int NNSi_SndFaderGet(void *);
extern void NNSi_SndFaderUpdate(void *);
extern int NNSi_SndFaderIsFinished(void *);
extern void SND_StartPreparedSeq(int);
extern void SND_SetPlayerVolume(int, int);
extern int SND_IsFinishedCommandTag(int);
extern int SND_GetPlayerStatus(void);

void NNSi_SndPlayerMain(void) {
    N *n;
    N *next;
    int mask;
    mask = SND_GetPlayerStatus();
    n    = NNS_FndGetNextListObject(sPrioList, 0);
    if (n == 0) {
        return;
    }
    do {
        int v;
        short b, c, a;
        next = NNS_FndGetNextListObject(sPrioList, n);
        if (n->b2d == 0) {
            if (SND_IsFinishedCommandTag(n->i30) != 0) {
                n->b2d = 1;
            }
        }
        if (n->b2d != 0 && !(mask & (1 << n->b3c))) {
            ShutdownPlayer(n);
        } else {
            NNSi_SndFaderUpdate(n->sub);
            b = data_020686c0[n->b41];
            c = data_020686c0[n->b40];
            a = data_020686c0[n->q->b20];
            v = data_020686c0[NNSi_SndFaderGet(n->sub) >> 8];
            v += a + (c + b);
            if (v < -0x2d3) {
                v = -0x2d3;
            } else if (v > 0) {
                v = 0;
            }
            if (v != n->s3e) {
                SND_SetPlayerVolume(n->b3c, v);
                n->s3e = v;
            }
            if (n->b2c == 2 && NNSi_SndFaderIsFinished(n->sub) != 0) {
                ForceStopSeq(n);
            }
            if (n->b2f != 0) {
                SND_StartPreparedSeq(n->b3c);
                n->b2f = 0;
            }
        }
        n = next;
    } while (n != 0);
}

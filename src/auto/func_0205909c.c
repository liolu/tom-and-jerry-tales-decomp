/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_020517f8(void);
extern void func_0205180c(int state);
extern void func_02051fd0(void *dst, int value, int size);
extern void func_020502b8(void *queue);
extern void func_020501a8(void);
extern char data_021b3aa8;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_0205909c(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_02051fd0(&job, 0, 0x24);
        enabled = func_020517f8();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_020502b8(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_0205180c(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_020517f8();
        done                              = job.done;
        *((char *) &data_021b3aa8 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_021b3aa8 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_0205180c(enabled);
        } else {
            func_020501a8();
            return;
        }
    }
}

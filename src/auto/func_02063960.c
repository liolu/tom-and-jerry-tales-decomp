/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

struct Node72 {
    struct Node72 *next;
    void (*fn)(void *object, int v);
    void *object;
};
extern struct Node72 *data_021b4428;

/* func_021424e8 from https://github.com/RonyxDumb/mkds src/arm9/021424e8_func_021424e8.c (license: none), reused by
 * tools/donor_match.py */
void func_02063960(void) {
    struct Node72 *head = data_021b4428;
    if (head == 0) {
        return;
    }
    do {
        data_021b4428 = head->next;
        head->fn(head->object, -1);
        head = data_021b4428;
    } while (head != 0);
}

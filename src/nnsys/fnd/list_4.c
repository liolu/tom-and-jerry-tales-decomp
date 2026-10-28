/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
extern void NNS_FndAppendListObject(UnkFndList *list, void *obj);
extern void NNS_FndAppendListObject(UnkFndList *list, void *obj);
extern void NNS_FndPrependListObject(UnkFndList *list, void *obj);
extern void NNS_FndRemoveListObject(UnkFndList *list, void *obj);

/* func_0200cfdc from projets/livly-garden/src/donor/func_0200cfdc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
void NNS_FndInsertListObject(UnkFndList *list, void *target, void *obj) {
    if (target == 0) {
        NNS_FndAppendListObject(list, obj);
    } else if (target == list->unk_00) {
        NNS_FndPrependListObject(list, obj);
    } else {
        UnkFndLink *link     = ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a));
        void *prev           = ((UnkFndLink *) ((u32) (target) + (list)->unk_0a))->unk_00;
        UnkFndLink *prevLink = ((UnkFndLink *) ((u32) (prev) + (list)->unk_0a));

        link->unk_00                                               = prev;
        link->unk_04                                               = target;
        prevLink->unk_04                                           = obj;
        ((UnkFndLink *) ((u32) (target) + (list)->unk_0a))->unk_00 = obj;
        list->unk_08++;
    }
}

/* func_0200d040 from projets/livly-garden/src/donor/func_0200d040.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
void NNS_FndRemoveListObject(UnkFndList *list, void *obj) {
    UnkFndLink *link = ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a));

    if (link->unk_00 == 0) {
        list->unk_00 = link->unk_04;
    } else {
        ((UnkFndLink *) ((u32) (link->unk_00) + (list)->unk_0a))->unk_04 = link->unk_04;
    }
    if (link->unk_04 == 0) {
        list->unk_04 = link->unk_00;
    } else {
        ((UnkFndLink *) ((u32) (link->unk_04) + (list)->unk_0a))->unk_00 = link->unk_00;
    }
    link->unk_00 = 0;
    link->unk_04 = 0;
    list->unk_08--;
}

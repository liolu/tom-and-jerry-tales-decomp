/* compiler: 2.0/sp1p5  */
/* func_02032210 from projets/battle-of-giants-dinosaurs/src/auto/func_02032210.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef struct {
    u32 open_mode : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 file_kind : 3;
    u32 file_orientation : 2;
    u32 binary_io : 1;
} __file_modes;
typedef struct {
    s32 handle;
    __file_modes mMode;
} FILE;
enum __file_orientation {
    __unoriented,
    __char_oriented,
    __wide_oriented
};
enum __file_kinds {
    __closed_file,
    __disk_file,
    __console_file,
    __unavailable_file
};
s32 func_0205dd98(FILE *stream, s32 mode) {
    s32 res;
    s32 orientation;

    if (stream == ((void *) 0) || stream->mMode.file_kind == __closed_file) {
        return 0;
    }

    orientation = stream->mMode.file_orientation;
    switch (orientation) {
        case __unoriented:
            if (mode > 0) {
                stream->mMode.file_orientation = __wide_oriented;
            } else if (mode < 0) {
                stream->mMode.file_orientation = __char_oriented;
            }
            res = mode;
            break;
        case __wide_oriented:
            res = 1;
            break;
        case __char_oriented:
            res = -1;
            break;
    }
    return res;
}

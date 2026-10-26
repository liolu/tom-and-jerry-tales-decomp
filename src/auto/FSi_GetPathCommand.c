#include "m2c.h"
typedef struct {
    void *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    void *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    } u;
    u32 is_directory;
    u32 name_len;
    char name[128];
} FSDirEntry;
typedef struct {
    u32 name;
} FSArchive;
typedef struct {
    u8 pad0[8];
    FSArchive *arc;
    u32 stat;
    u8 pad10[0x20 - 0x10];
    union {
        struct {
            u32 own_id;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        struct {
            u8 *buf;
            u32 buf_len;
            u16 total_len;
            u16 dir_id;
        } getpath;
        struct {
            FSDirPos pos;
            const char *path;
            u32 find_directory;
            union {
                FSFileID *file;
                FSDirPos *dir;
            } result;
        } findpath;
        struct {
            FSDirPos pos;
        } seekdir;
        struct {
            FSDirEntry *p_entry;
            u32 skip_string;
        } readdir;
    } arg;
} FSFile;
void func_02054c5c(FSFile *);
void FSi_SeekDirDirect(FSFile *, u32);
s32 func_02053870(FSFile *, s32);
void MI_CpuCopy8(const void *, void *, u32);
extern const char data_0206de80[];

static inline s32 FS_IsDir(FSFile *p) {
    return (p->stat & 0x20) ? 1 : 0;
}

s32 FSi_GetPathCommand(FSFile *p_file) {
    FSArchive *arc;
    u32 name_len;
    s32 len;
    u8 *buf;
    u32 name;
    u32 file_id;
    u32 pos;
    u32 id;
    FSDirEntry entry;
    u32 num_dir;
    s32 n;
    FSFile tmp;
    u32 dir_id;
    s32 total;

    arc = p_file->arc;
    func_02054c5c(&tmp);
    tmp.arc = p_file->arc;
    if (FS_IsDir(p_file)) {
        dir_id  = p_file->prop.dir.pos.own_id;
        file_id = 0x10000;
    } else {
        file_id = p_file->prop.file.own_id;
        if (p_file->arg.getpath.total_len != 0) {
            dir_id = p_file->arg.getpath.dir_id;
        } else {
            pos     = 0;
            num_dir = 0;
            dir_id  = 0x10000;
            do {
                FSi_SeekDirDirect(&tmp, pos);
                if (pos == 0) {
                    num_dir = tmp.prop.dir.parent;
                }
                tmp.arg.readdir.p_entry     = &entry;
                tmp.arg.readdir.skip_string = 1;
                while (func_02053870(&tmp, 3) == 0) {
                    if (!entry.is_directory && entry.u.file_id.file_id == file_id) {
                        dir_id = tmp.prop.dir.pos.own_id;
                        break;
                    }
                }
            } while (dir_id == 0x10000 && ++pos < num_dir);
        }
    }
    if (dir_id == 0x10000) {
        p_file->arg.getpath.total_len = 0;
        return 1;
    }
    if (p_file->arg.getpath.total_len == 0) {
        total = 0;
        name  = arc->name;
        if (name <= 0xFF) {
            total += 1;
        } else if (name <= 0xFF00) {
            total += 2;
        } else {
            total += 3;
        }
        total += 2;
        if (file_id != 0x10000) {
            total += entry.name_len;
        }
        id = dir_id;
        if (id != 0) {
            FSi_SeekDirDirect(&tmp, id);
            do {
                FSi_SeekDirDirect(&tmp, tmp.prop.dir.parent);
                tmp.arg.readdir.p_entry     = &entry;
                tmp.arg.readdir.skip_string = 1;
                while (func_02053870(&tmp, 3) == 0) {
                    if (entry.is_directory && entry.u.dir_id.own_id == id) {
                        total += entry.name_len + 1;
                        break;
                    }
                }
                id = tmp.prop.dir.pos.own_id;
            } while (id != 0);
        }
        p_file->arg.getpath.total_len = total + 1;
        p_file->arg.getpath.dir_id    = dir_id;
    }
    buf = p_file->arg.getpath.buf;
    if (buf == 0) {
        return 0;
    }
    len = p_file->arg.getpath.total_len;
    if (p_file->arg.getpath.buf_len < len) {
        return 1;
    }
    {
        pos  = 0;
        name = arc->name;
        if (name <= 0xFF) {
            id = 1;
        } else if (name <= 0xFF00) {
            id = 2;
        } else {
            id = 3;
        }
        MI_CpuCopy8(arc, buf + pos, id);
        pos += id;
        MI_CpuCopy8(data_0206de80, buf + pos, 2);
        FSi_SeekDirDirect(&tmp, dir_id);
    }
    if (file_id != 0x10000) {
        tmp.arg.readdir.p_entry     = &entry;
        tmp.arg.readdir.skip_string = 0;
        while (func_02053870(&tmp, 3) == 0) {
            if (!entry.is_directory && entry.u.file_id.file_id == file_id) {
                break;
            }
        }
        n = entry.name_len + 1;
        MI_CpuCopy8(entry.name, buf + len - n, n);
        len -= n;
    } else {
        buf[len - 1] = '\0';
        len -= 1;
    }
    while (dir_id != 0) {
        FSi_SeekDirDirect(&tmp, tmp.prop.dir.parent);
        tmp.arg.readdir.p_entry     = &entry;
        tmp.arg.readdir.skip_string = 0;
        buf[len - 1]                = '/';
        len -= 1;
        while (func_02053870(&tmp, 3) == 0) {
            if (entry.is_directory && entry.u.dir_id.own_id == dir_id) {
                n = entry.name_len;
                MI_CpuCopy8(entry.name, buf + len - n, n);
                len -= n;
                break;
            }
        }
        dir_id = tmp.prop.dir.pos.own_id;
    }
    return 0;
}

#ifndef __KERNEL_BLKIO_H
#define __KERNEL_BLKIO_H 1

#include <kernel/types.h>

blkio_t *blkio_open(inode_t *ino);
void blkio_close(blkio_t *blk);
void blkio_build(inode_t *ino, bread_t read, bwrite_t write);

page_t blkio_fetch(blkio_t *blk, off_t off);
void blkio_sync(blkio_t *blk, off_t off, page_t phys);
void blkio_release(blkio_t *blk, off_t off, page_t phys);

void *blkio_access(blkio_t *blk, int lba, int count);
void blkio_leave(blkio_t *blk, void *address);


#endif  /* __KERNEL_BLKIO_H */


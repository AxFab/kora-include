#ifndef __KERNEL_TYPES_H
#define __KERNEL_TYPES_H 1

#include <bits/cdefs.h>
#include <sys/types.h>
#include <kora/splock.h>
#include <stdatomic.h>
#include <stddef.h>
#include <stdbool.h>
#include <time.h>

#if defined __IPx || defined __ILPx
    typedef unsigned int page_t;
#elif defined __LPx
    typedef unsigned long page_t;
#elif defined __LLPx
    typedef unsigned long long page_t;
#else
#  error Unsupported architecture __ARCH
#endif

typedef const char *CSTR;
typedef long long clock64_t;


typedef struct acl acl_t;
typedef struct bio bio_t;
typedef struct inode inode_t;
typedef struct volume volume_t;


typedef struct ino_ops ino_ops_t;


#endif  /* __KERNEL_TYPES_H */


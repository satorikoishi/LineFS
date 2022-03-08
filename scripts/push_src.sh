#!/bin/bash
SRC_ROOT_PATH="/opt/LineFS/LineFS_x86/"
TARGET_ROOT_PATH="/opt/LineFS/LineFS_ARM/"  # The last "/" should not be skipped.

if [ $# -ge 1 ] && [ $1 = "all" ] ; then
    echo "rsync all."
    rsync -a $SRC_ROOT_PATH ${TARGET_ROOT_PATH}

elif [ $# -ge 1 ] && [ $1 = "rdma" ] ; then
    echo "sync libfs/lib/rdma only."
    rsync -a ${SRC_ROOT_PATH}libfs/lib/rdma/ ${TARGET_ROOT_PATH}libfs/lib/rdma/

else
    echo "exclude some directories."
    rsync -a \
        --exclude='libfs/lib' \
        --exclude='libfs/tests' \
        --exclude='kernfs/lib' \
        --exclude='bench' \
        --exclude='sleep.sh' \
        --exclude='scripts/signals' \
        $SRC_ROOT_PATH ${TARGET_ROOT_PATH}
        # --exclude='kernfs/distributed/rpc_interface.h' \
        # --exclude='libfs/src/distributed/rpc_interface.h' \
        # --exclude='kernfs/storage/storage.c' \
        # --exclude='libfs/src/storage/storage.c' \
        # --exclude='kernfs/Makefile' \
        # --exclude='libfs/Makefile' \
        # --exclude='run_kernfs.sh' \
        # --exclude='mkfs_run_kernfs.sh' \
        # --exclude='gdb_kernfs.sh' \
        # --exclude='mlfs_config.sh' \
        # --exclude='mlfs_config.gdb' \
fi

#pragma once

#define RV32_LINUX_SYSCALL_LIST          \
    _(io_setup, 0)                       \
    _(io_destroy, 1)                     \
    _(io_submit, 2)                      \
    _(io_cancel, 3)                      \
    _(setxattr, 5)                       \
    _(lsetxattr, 6)                      \
    _(fsetxattr, 7)                      \
    _(getxattr, 8)                       \
    _(lgetxattr, 9)                      \
    _(fgetxattr, 10)                     \
    _(listxattr, 11)                     \
    _(llistxattr, 12)                    \
    _(flistxattr, 13)                    \
    _(removexattr, 14)                   \
    _(lremovexattr, 15)                  \
    _(fremovexattr, 16)                  \
    _(getcwd, 17)                        \
    _(lookup_dcookie, 18)                \
    _(eventfd2, 19)                      \
    _(epoll_create1, 20)                 \
    _(epoll_ctl, 21)                     \
    _(epoll_pwait, 22)                   \
    _(dup, 23)                           \
    _(dup3, 24)                          \
    _(fcntl64, 25)                       \
    _(inotify_init1, 26)                 \
    _(inotify_add_watch, 27)             \
    _(inotify_rm_watch, 28)              \
    _(ioctl, 29)                         \
    _(ioprio_set, 30)                    \
    _(ioprio_get, 31)                    \
    _(flock, 32)                         \
    _(mknodat, 33)                       \
    _(mkdirat, 34)                       \
    _(unlinkat, 35)                      \
    _(symlinkat, 36)                     \
    _(linkat, 37)                        \
    _(umount2, 39)                       \
    _(mount, 40)                         \
    _(pivot_root, 41)                    \
    _(nfsservctl, 42)                    \
    _(statfs64, 43)                      \
    _(fstatfs64, 44)                     \
    _(truncate64, 45)                    \
    _(ftruncate64, 46)                   \
    _(fallocate, 47)                     \
    _(faccessat, 48)                     \
    _(chdir, 49)                         \
    _(fchdir, 50)                        \
    _(chroot, 51)                        \
    _(fchmod, 52)                        \
    _(fchmodat, 53)                      \
    _(fchownat, 54)                      \
    _(fchown, 55)                        \
    _(openat, 56)                        \
    _(close, 57)                         \
    _(vhangup, 58)                       \
    _(pipe2, 59)                         \
    _(quotactl, 60)                      \
    _(getdents64, 61)                    \
    _(llseek, 62)                        \
    _(read, 63)                          \
    _(write, 64)                         \
    _(readv, 65)                         \
    _(writev, 66)                        \
    _(pread64, 67)                       \
    _(pwrite64, 68)                      \
    _(preadv, 69)                        \
    _(pwritev, 70)                       \
    _(sendfile64, 71)                    \
    _(signalfd4, 74)                     \
    _(vmsplice, 75)                      \
    _(splice, 76)                        \
    _(tee, 77)                           \
    _(readlinkat, 78)                    \
    _(fstatat64, 79)                     \
    _(fstat64, 80)                       \
    _(sync, 81)                          \
    _(fsync, 82)                         \
    _(fdatasync, 83)                     \
    _(sync_file_range, 84)               \
    _(timerfd_create, 85)                \
    _(acct, 89)                          \
    _(capget, 90)                        \
    _(capset, 91)                        \
    _(personality, 92)                   \
    _(exit, 93)                          \
    _(exit_group, 94)                    \
    _(waitid, 95)                        \
    _(set_tid_address, 96)               \
    _(unshare, 97)                       \
    _(set_robust_list, 99)               \
    _(get_robust_list, 100)              \
    _(getitimer, 102)                    \
    _(setitimer, 103)                    \
    _(kexec_load, 104)                   \
    _(init_module, 105)                  \
    _(delete_module, 106)                \
    _(timer_create, 107)                 \
    _(timer_getoverrun, 109)             \
    _(timer_delete, 111)                 \
    _(syslog, 116)                       \
    _(ptrace, 117)                       \
    _(sched_setparam, 118)               \
    _(sched_setscheduler, 119)           \
    _(sched_getscheduler, 120)           \
    _(sched_getparam, 121)               \
    _(sched_setaffinity, 122)            \
    _(sched_getaffinity, 123)            \
    _(sched_yield, 124)                  \
    _(sched_get_priority_max, 125)       \
    _(sched_get_priority_min, 126)       \
    _(restart_syscall, 128)              \
    _(kill, 129)                         \
    _(tkill, 130)                        \
    _(tgkill, 131)                       \
    _(sigaltstack, 132)                  \
    _(rt_sigsuspend, 133)                \
    _(rt_sigaction, 134)                 \
    _(rt_sigprocmask, 135)               \
    _(rt_sigpending, 136)                \
    _(rt_sigqueueinfo, 138)              \
    _(rt_sigreturn, 139)                 \
    _(setpriority, 140)                  \
    _(getpriority, 141)                  \
    _(reboot, 142)                       \
    _(setregid, 143)                     \
    _(setgid, 144)                       \
    _(setreuid, 145)                     \
    _(setuid, 146)                       \
    _(setresuid, 147)                    \
    _(getresuid, 148)                    \
    _(setresgid, 149)                    \
    _(getresgid, 150)                    \
    _(setfsuid, 151)                     \
    _(setfsgid, 152)                     \
    _(times, 153)                        \
    _(setpgid, 154)                      \
    _(getpgid, 155)                      \
    _(getsid, 156)                       \
    _(setsid, 157)                       \
    _(getgroups, 158)                    \
    _(setgroups, 159)                    \
    _(uname, 160)                        \
    _(sethostname, 161)                  \
    _(setdomainname, 162)                \
    _(getrlimit, 163)                    \
    _(setrlimit, 164)                    \
    _(getrusage, 165)                    \
    _(umask, 166)                        \
    _(prctl, 167)                        \
    _(getcpu, 168)                       \
    _(getpid, 172)                       \
    _(getppid, 173)                      \
    _(getuid, 174)                       \
    _(geteuid, 175)                      \
    _(getgid, 176)                       \
    _(getegid, 177)                      \
    _(gettid, 178)                       \
    _(sysinfo, 179)                      \
    _(mq_open, 180)                      \
    _(mq_unlink, 181)                    \
    _(mq_notify, 184)                    \
    _(mq_getsetattr, 185)                \
    _(msgget, 186)                       \
    _(msgctl, 187)                       \
    _(msgrcv, 188)                       \
    _(msgsnd, 189)                       \
    _(semget, 190)                       \
    _(semctl, 191)                       \
    _(semop, 193)                        \
    _(shmget, 194)                       \
    _(shmctl, 195)                       \
    _(shmat, 196)                        \
    _(shmdt, 197)                        \
    _(socket, 198)                       \
    _(socketpair, 199)                   \
    _(bind, 200)                         \
    _(listen, 201)                       \
    _(accept, 202)                       \
    _(connect, 203)                      \
    _(getsockname, 204)                  \
    _(getpeername, 205)                  \
    _(sendto, 206)                       \
    _(recvfrom, 207)                     \
    _(setsockopt, 208)                   \
    _(getsockopt, 209)                   \
    _(shutdown, 210)                     \
    _(sendmsg, 211)                      \
    _(recvmsg, 212)                      \
    _(readahead, 213)                    \
    _(brk, 214)                          \
    _(munmap, 215)                       \
    _(mremap, 216)                       \
    _(add_key, 217)                      \
    _(request_key, 218)                  \
    _(keyctl, 219)                       \
    _(clone, 220)                        \
    _(execve, 221)                       \
    _(mmap2, 222)                        \
    _(fadvise64_64, 223)                 \
    _(swapon, 224)                       \
    _(swapoff, 225)                      \
    _(mprotect, 226)                     \
    _(msync, 227)                        \
    _(mlock, 228)                        \
    _(munlock, 229)                      \
    _(mlockall, 230)                     \
    _(munlockall, 231)                   \
    _(mincore, 232)                      \
    _(madvise, 233)                      \
    _(remap_file_pages, 234)             \
    _(mbind, 235)                        \
    _(get_mempolicy, 236)                \
    _(set_mempolicy, 237)                \
    _(migrate_pages, 238)                \
    _(move_pages, 239)                   \
    _(rt_tgsigqueueinfo, 240)            \
    _(perf_event_open, 241)              \
    _(accept4, 242)                      \
    _(prlimit64, 261)                    \
    _(fanotify_init, 262)                \
    _(fanotify_mark, 263)                \
    _(name_to_handle_at, 264)            \
    _(open_by_handle_at, 265)            \
    _(syncfs, 267)                       \
    _(setns, 268)                        \
    _(sendmmsg, 269)                     \
    _(process_vm_readv, 270)             \
    _(process_vm_writev, 271)            \
    _(kcmp, 272)                         \
    _(finit_module, 273)                 \
    _(sched_setattr, 274)                \
    _(sched_getattr, 275)                \
    _(renameat2, 276)                    \
    _(seccomp, 277)                      \
    _(getrandom, 278)                    \
    _(memfd_create, 279)                 \
    _(bpf, 280)                          \
    _(execveat, 281)                     \
    _(userfaultfd, 282)                  \
    _(membarrier, 283)                   \
    _(mlock2, 284)                       \
    _(copy_file_range, 285)              \
    _(preadv2, 286)                      \
    _(pwritev2, 287)                     \
    _(pkey_mprotect, 288)                \
    _(pkey_alloc, 289)                   \
    _(pkey_free, 290)                    \
    _(statx, 291)                        \
    _(rseq, 293)                         \
    _(kexec_file_load, 294)              \
    _(clock_gettime64, 403)              \
    _(clock_settime64, 404)              \
    _(clock_adjtime64, 405)              \
    _(clock_getres_time64, 406)          \
    _(clock_nanosleep_time64, 407)       \
    _(timer_gettime64, 408)              \
    _(timer_settime64, 409)              \
    _(timerfd_gettime64, 410)            \
    _(timerfd_settime64, 411)            \
    _(utimensat_time64, 412)             \
    _(pselect6_time64, 413)              \
    _(ppoll_time64, 414)                 \
    _(io_pgetevents_time64, 416)         \
    _(recvmmsg_time64, 417)              \
    _(mq_timedsend_time64, 418)          \
    _(mq_timedreceive_time64, 419)       \
    _(semtimedop_time64, 420)            \
    _(rt_sigtimedwait_time64, 421)       \
    _(futex_time64, 422)                 \
    _(sched_rr_get_interval_time64, 423) \
    _(pidfd_send_signal, 424)            \
    _(io_uring_setup, 425)               \
    _(io_uring_enter, 426)               \
    _(io_uring_register, 427)            \
    _(open_tree, 428)                    \
    _(move_mount, 429)                   \
    _(fsopen, 430)                       \
    _(fsconfig, 431)                     \
    _(fsmount, 432)                      \
    _(fspick, 433)                       \
    _(pidfd_open, 434)                   \
    _(clone3, 435)                       \
    _(close_range, 436)                  \
    _(openat2, 437)                      \
    _(pidfd_getfd, 438)                  \
    _(faccessat2, 439)                   \
    _(process_madvise, 440)              \
    _(epoll_pwait2, 441)                 \
    _(mount_setattr, 442)                \
    _(landlock_create_ruleset, 444)      \
    _(landlock_add_rule, 445)            \
    _(landlock_restrict_self, 446)
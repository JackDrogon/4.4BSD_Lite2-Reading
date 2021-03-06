/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	@(#)syscalls.master	8.2 (Berkeley) 4/3/95
 */

#include <sys/param.h>
#include <sys/systm.h>

int nosys();

int exit();
int fork();
int read();
int write();
int open();
int close();
int sun_wait4();
int sun_creat();
int link();
int unlink();
int sun_execv();
int chdir();
int mknod();
int chmod();
int chown();
int obreak();
int compat_43_lseek();
int getpid();
int getuid();
int access();
int sync();
int kill();
int compat_43_stat();
int compat_43_lstat();
int dup();
int pipe();
int profil();
int getgid();
int acct();
int sun_mctl();
int sun_ioctl();
int reboot();
int symlink();
int readlink();
int execve();
int umask();
int chroot();
int compat_43_fstat();
int compat_43_getpagesize();
int sun_omsync();
int vfork();
int sbrk();
int sstk();
int sun_mmap();
int ovadvise();
int munmap();
int mprotect();
int madvise();
int mincore();
int getgroups();
int setgroups();
int getpgrp();
int setpgid();
int setitimer();
int swapon();
int getitimer();
int compat_43_gethostname();
int compat_43_sethostname();
int getdtablesize();
int dup2();
int fcntl();
int select();
int fsync();
int setpriority();
int socket();
int connect();
int compat_43_accept();
int getpriority();
int compat_43_send();
int compat_43_recv();
int bind();
int sun_setsockopt();
int listen();
int compat_43_sigvec();
int compat_43_sigblock();
int compat_43_sigsetmask();
int sigsuspend();
int compat_43_sigstack();
int compat_43_recvmsg();
int compat_43_sendmsg();
int gettimeofday();
int getrusage();
int getsockopt();
int readv();
int writev();
int settimeofday();
int fchown();
int fchmod();
int compat_43_recvfrom();
int compat_43_setreuid();
int compat_43_setregid();
int rename();
int compat_43_truncate();
int compat_43_ftruncate();
int flock();
int sendto();
int shutdown();
int socketpair();
int mkdir();
int rmdir();
int utimes();
int sigreturn();
int adjtime();
int compat_43_getpeername();
int compat_43_gethostid();
int compat_43_getrlimit();
int compat_43_setrlimit();
int compat_43_killpg();
int compat_43_getsockname();
int getdirentries();
int statfs();
int fstatfs();
int sun_unmount();
int sun_getdomainname();
int sun_setdomainname();
int sun_mount();
#ifdef SYSVSHM
int shmsys();
#else
#endif
int sun_getdents();
int setsid();
int fchdir();
int sun_fchroot();
int sun_sigpending();
int setpgid();

#ifdef XXX_UNUSED
#define compat(n, name) n, n * 4, __CONCAT(compat_43_, name)

int compat_43_sun_time();
int compat_43_sun_stat();
int compat_43_setuid();
int compat_43_sun_stime();
int compat_43_sun_alarm();
int compat_43_sun_fstat();
int compat_43_sun_pause();
int compat_43_sun_utime();
int compat_43_sun_nice();
int compat_43_sun_ftime();
int compat_43_sun_setpgrp();
int compat_43_sun_times();
int compat_43_sun_setgid();
int compat_43_sun_ssig();
int compat_43_vhangup();
int compat_43_vlimit();
int compat_43_wait();
int compat_43_vtimes();
#ifdef SYSVSHM
#else
#endif

#else /* XXX_UNUSED */
#define compat(n, name) 0, 0, nosys
#endif /* XXX_UNUSED */

struct sysent sunsys[] = {
    {0, 0, nosys},		    /* 0 = nosys syscall */
    {1, 4, exit},		    /* 1 = exit */
    {0, 0, fork},		    /* 2 = fork */
    {3, 12, read},		    /* 3 = read */
    {3, 12, write},		    /* 4 = write */
    {3, 12, open},		    /* 5 = open */
    {1, 4, close},		    /* 6 = close */
    {4, 16, sun_wait4},		    /* 7 = sun_wait4 */
    {2, 8, sun_creat},		    /* 8 = sun_creat */
    {2, 8, link},		    /* 9 = link */
    {1, 4, unlink},		    /* 10 = unlink */
    {2, 8, sun_execv},		    /* 11 = sun_execv */
    {1, 4, chdir},		    /* 12 = chdir */
    {compat(0, sun_time)},	  /* 13 = old sun_time */
    {3, 12, mknod},		    /* 14 = mknod */
    {2, 8, chmod},		    /* 15 = chmod */
    {3, 12, chown},		    /* 16 = chown */
    {1, 4, obreak},		    /* 17 = break */
    {compat(2, sun_stat)},	  /* 18 = old sun_stat */
    {3, 12, compat_43_lseek},       /* 19 = compat_43_lseek */
    {0, 0, getpid},		    /* 20 = getpid */
    {0, 0, nosys},		    /* 21 = obsolete sun_old_mount */
    {0, 0, nosys},		    /* 22 = System V umount */
    {compat(1, setuid)},	    /* 23 = old setuid */
    {0, 0, getuid},		    /* 24 = getuid */
    {compat(1, sun_stime)},	 /* 25 = old sun_stime */
    {0, 0, nosys},		    /* 26 = sun_ptrace */
    {compat(1, sun_alarm)},	 /* 27 = old sun_alarm */
    {compat(1, sun_fstat)},	 /* 28 = old sun_fstat */
    {compat(0, sun_pause)},	 /* 29 = old sun_pause */
    {compat(2, sun_utime)},	 /* 30 = old sun_utime */
    {0, 0, nosys},		    /* 31 = was stty */
    {0, 0, nosys},		    /* 32 = was gtty */
    {2, 8, access},		    /* 33 = access */
    {compat(1, sun_nice)},	  /* 34 = old sun_nice */
    {compat(1, sun_ftime)},	 /* 35 = old sun_ftime */
    {0, 0, sync},		    /* 36 = sync */
    {2, 8, kill},		    /* 37 = kill */
    {2, 8, compat_43_stat},	 /* 38 = compat_43_stat */
    {compat(2, sun_setpgrp)},       /* 39 = old sun_setpgrp */
    {2, 8, compat_43_lstat},	/* 40 = compat_43_lstat */
    {2, 8, dup},		    /* 41 = dup */
    {0, 0, pipe},		    /* 42 = pipe */
    {compat(1, sun_times)},	 /* 43 = old sun_times */
    {4, 16, profil},		    /* 44 = profil */
    {0, 0, nosys},		    /* 45 = nosys */
    {compat(1, sun_setgid)},	/* 46 = old sun_setgid */
    {0, 0, getgid},		    /* 47 = getgid */
    {compat(2, sun_ssig)},	  /* 48 = old sun_ssig */
    {0, 0, nosys},		    /* 49 = reserved for USG */
    {0, 0, nosys},		    /* 50 = reserved for USG */
    {1, 4, acct},		    /* 51 = acct */
    {0, 0, nosys},		    /* 52 = nosys */
    {4, 16, sun_mctl},		    /* 53 = sun_mctl */
    {3, 12, sun_ioctl},		    /* 54 = sun_ioctl */
    {2, 8, reboot},		    /* 55 = reboot */
    {0, 0, nosys},		    /* 56 = obsolete sun_owait3 */
    {2, 8, symlink},		    /* 57 = symlink */
    {3, 12, readlink},		    /* 58 = readlink */
    {3, 12, execve},		    /* 59 = execve */
    {1, 4, umask},		    /* 60 = umask */
    {1, 4, chroot},		    /* 61 = chroot */
    {2, 8, compat_43_fstat},	/* 62 = compat_43_fstat */
    {0, 0, nosys},		    /* 63 = nosys */
    {0, 0, compat_43_getpagesize},  /* 64 = compat_43_getpagesize */
    {3, 12, sun_omsync},	    /* 65 = sun_omsync */
    {0, 0, vfork},		    /* 66 = vfork */
    {0, 0, nosys},		    /* 67 = obsolete vread */
    {0, 0, nosys},		    /* 68 = obsolete vwrite */
    {1, 4, sbrk},		    /* 69 = sbrk */
    {1, 4, sstk},		    /* 70 = sstk */
    {6, 24, sun_mmap},		    /* 71 = mmap */
    {1, 4, ovadvise},		    /* 72 = vadvise */
    {2, 8, munmap},		    /* 73 = munmap */
    {3, 12, mprotect},		    /* 74 = mprotect */
    {3, 12, madvise},		    /* 75 = madvise */
    {compat(0, vhangup)},	   /* 76 = old vhangup */
    {compat(0, vlimit)},	    /* 77 = old vlimit */
    {3, 12, mincore},		    /* 78 = mincore */
    {2, 8, getgroups},		    /* 79 = getgroups */
    {2, 8, setgroups},		    /* 80 = setgroups */
    {1, 4, getpgrp},		    /* 81 = getpgrp */
    {2, 8, setpgid},		    /* 82 = setpgid */
    {3, 12, setitimer},		    /* 83 = setitimer */
    {compat(0, wait)},		    /* 84 = old wait */
    {1, 4, swapon},		    /* 85 = swapon */
    {2, 8, getitimer},		    /* 86 = getitimer */
    {2, 8, compat_43_gethostname},  /* 87 = compat_43_gethostname */
    {2, 8, compat_43_sethostname},  /* 88 = compat_43_sethostname */
    {0, 0, getdtablesize},	  /* 89 = getdtablesize */
    {2, 8, dup2},		    /* 90 = dup2 */
    {0, 0, nosys},		    /* 91 = getdopt */
    {3, 12, fcntl},		    /* 92 = fcntl */
    {5, 20, select},		    /* 93 = select */
    {0, 0, nosys},		    /* 94 = setdopt */
    {1, 4, fsync},		    /* 95 = fsync */
    {3, 12, setpriority},	   /* 96 = setpriority */
    {3, 12, socket},		    /* 97 = socket */
    {3, 12, connect},		    /* 98 = connect */
    {3, 12, compat_43_accept},      /* 99 = compat_43_accept */
    {2, 8, getpriority},	    /* 100 = getpriority */
    {4, 16, compat_43_send},	/* 101 = compat_43_send */
    {4, 16, compat_43_recv},	/* 102 = compat_43_recv */
    {0, 0, nosys},		    /* 103 = old socketaddr */
    {3, 12, bind},		    /* 104 = bind */
    {5, 20, sun_setsockopt},	/* 105 = sun_setsockopt */
    {2, 8, listen},		    /* 106 = listen */
    {compat(0, vtimes)},	    /* 107 = old vtimes */
    {3, 12, compat_43_sigvec},      /* 108 = compat_43_sigvec */
    {1, 4, compat_43_sigblock},     /* 109 = compat_43_sigblock */
    {1, 4, compat_43_sigsetmask},   /* 110 = compat_43_sigsetmask */
    {1, 4, sigsuspend},		    /* 111 = sigsuspend */
    {2, 8, compat_43_sigstack},     /* 112 = compat_43_sigstack */
    {3, 12, compat_43_recvmsg},     /* 113 = compat_43_recvmsg */
    {3, 12, compat_43_sendmsg},     /* 114 = compat_43_sendmsg */
    {0, 0, nosys},		    /* 115 = obsolete vtrace */
    {2, 8, gettimeofday},	   /* 116 = gettimeofday */
    {2, 8, getrusage},		    /* 117 = getrusage */
    {5, 20, getsockopt},	    /* 118 = getsockopt */
    {0, 0, nosys},		    /* 119 = nosys */
    {3, 12, readv},		    /* 120 = readv */
    {3, 12, writev},		    /* 121 = writev */
    {2, 8, settimeofday},	   /* 122 = settimeofday */
    {3, 12, fchown},		    /* 123 = fchown */
    {2, 8, fchmod},		    /* 124 = fchmod */
    {6, 24, compat_43_recvfrom},    /* 125 = compat_43_recvfrom */
    {2, 8, compat_43_setreuid},     /* 126 = compat_43_setreuid */
    {2, 8, compat_43_setregid},     /* 127 = compat_43_setregid */
    {2, 8, rename},		    /* 128 = rename */
    {2, 8, compat_43_truncate},     /* 129 = compat_43_truncate */
    {2, 8, compat_43_ftruncate},    /* 130 = compat_43_ftruncate */
    {2, 8, flock},		    /* 131 = flock */
    {0, 0, nosys},		    /* 132 = nosys */
    {6, 24, sendto},		    /* 133 = sendto */
    {2, 8, shutdown},		    /* 134 = shutdown */
    {5, 20, socketpair},	    /* 135 = socketpair */
    {2, 8, mkdir},		    /* 136 = mkdir */
    {1, 4, rmdir},		    /* 137 = rmdir */
    {2, 8, utimes},		    /* 138 = utimes */
    {1, 4, sigreturn},		    /* 139 = sigreturn */
    {2, 8, adjtime},		    /* 140 = adjtime */
    {3, 12, compat_43_getpeername}, /* 141 = compat_43_getpeername */
    {0, 0, compat_43_gethostid},    /* 142 = compat_43_gethostid */
    {0, 0, nosys},		    /* 143 = old sethostid */
    {2, 8, compat_43_getrlimit},    /* 144 = compat_43_getrlimit */
    {2, 8, compat_43_setrlimit},    /* 145 = compat_43_setrlimit */
    {2, 8, compat_43_killpg},       /* 146 = compat_43_killpg */
    {0, 0, nosys},		    /* 147 = nosys */
    {0, 0, nosys},		    /* 148 = nosys */
    {0, 0, nosys},		    /* 149 = nosys */
    {3, 12, compat_43_getsockname}, /* 150 = compat_43_getsockname */
    {0, 0, nosys},		    /* 151 = getmsg */
    {0, 0, nosys},		    /* 152 = putmsg */
    {0, 0, nosys},		    /* 153 = poll */
    {0, 0, nosys},		    /* 154 = nosys */
    {0, 0, nosys},		    /* 155 = nosys */
    {4, 16, getdirentries},	 /* 156 = getdirentries */
    {2, 8, statfs},		    /* 157 = statfs */
    {2, 8, fstatfs},		    /* 158 = fstatfs */
    {1, 4, sun_unmount},	    /* 159 = sun_unmount */
    {0, 0, nosys},		    /* 160 = nosys */
    {0, 0, nosys},		    /* 161 = nosys */
    {2, 8, sun_getdomainname},      /* 162 = sun_getdomainname */
    {2, 8, sun_setdomainname},      /* 163 = sun_setdomainname */
    {0, 0, nosys},		    /* 164 = rtschedule */
    {0, 0, nosys},		    /* 165 = quotactl */
    {0, 0, nosys},		    /* 166 = exportfs */
    {4, 16, sun_mount},		    /* 167 = sun_mount */
    {0, 0, nosys},		    /* 168 = ustat */
    {0, 0, nosys},		    /* 169 = semsys */
    {0, 0, nosys},		    /* 170 = msgsys */
#ifdef SYSVSHM
    {4, 16, shmsys}, /* 171 = shmsys */
#else
    {0, 0, nosys}, /* 171 = nosys */
#endif
    {0, 0, nosys},	  /* 172 = auditsys */
    {0, 0, nosys},	  /* 173 = rfssys */
    {3, 12, sun_getdents},  /* 174 = sun_getdents */
    {1, 4, setsid},	 /* 175 = setsid */
    {1, 4, fchdir},	 /* 176 = fchdir */
    {1, 4, sun_fchroot},    /* 177 = sun_fchroot */
    {0, 0, nosys},	  /* 178 = nosys */
    {0, 0, nosys},	  /* 179 = nosys */
    {0, 0, nosys},	  /* 180 = nosys */
    {0, 0, nosys},	  /* 181 = nosys */
    {0, 0, nosys},	  /* 182 = nosys */
    {1, 4, sun_sigpending}, /* 183 = sun_sigpending */
    {0, 0, nosys},	  /* 184 = nosys */
    {2, 8, setpgid},	/* 185 = setpgid */
    {0, 0, nosys},	  /* 186 = pathconf */
    {0, 0, nosys},	  /* 187 = fpathconf */
    {0, 0, nosys},	  /* 188 = sysconf */
    {0, 0, nosys},	  /* 189 = uname */
};

int nsunsys = sizeof(sunsys) / sizeof(sunsys[0]);

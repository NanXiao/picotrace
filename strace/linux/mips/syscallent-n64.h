#if defined LINUX_MIPSN64
/* For an N64 strace decode the N64 64-bit syscalls. */
[5000] = { 3,	TD,		SEN(read),			"read"			}, /* start of Linux N64 */
[5001] = { 3,	TD,		SEN(write),			"write"			},
[5002] = { 3,	TD|TF,		SEN(open),			"open"			},
[5003] = { 1,	TD,		SEN(close),			"close"			},
[5004] = { 2,	TF|TST|TSTA,	SEN(stat),			"stat"			},
[5005] = { 2,	TD|TFST|TSTA,	SEN(fstat),			"fstat"			},
[5006] = { 2,	TF|TLST|TSTA,	SEN(lstat),			"lstat"			},
[5007] = { 3,	TD,		SEN(poll),			"poll"			},
[5008] = { 3,	TD,		SEN(lseek),			"lseek"			},
[5009] = { 6,	TD|TM|SI,	SEN(mmap),			"mmap"			},
[5010] = { 3,	TM|SI,		SEN(mprotect),			"mprotect"		},
[5011] = { 2,	TM|SI,		SEN(munmap),			"munmap"		},
[5012] = { 1,	TM|SI,		SEN(brk),			"brk"			},
[5013] = { 4,	TS,		SEN(rt_sigaction),		"rt_sigaction"		},
[5014] = { 4,	TS,		SEN(rt_sigprocmask),		"rt_sigprocmask"	},
[5015] = { 3,	TD,		SEN(ioctl),			"ioctl"			},
[5016] = { 4,	TD,		SEN(pread),			"pread64"		},
[5017] = { 4,	TD,		SEN(pwrite),			"pwrite64"		},
[5018] = { 3,	TD,		SEN(readv),			"readv"			},
[5019] = { 3,	TD,		SEN(writev),			"writev"		},
[5020] = { 2,	TF,		SEN(access),			"access"		},
[5021] = { 0,	TD,		SEN(pipe),			"pipe"			},
[5022] = { 5,	TD,		SEN(select),			"_newselect"		},
[5023] = { 0,	0,		SEN(sched_yield),		"sched_yield"		},
[5024] = { 5,	TM|SI,		SEN(mremap),			"mremap"		},
[5025] = { 3,	TM,		SEN(msync),			"msync"			},
[5026] = { 3,	TM,		SEN(mincore),			"mincore"		},
[5027] = { 3,	TM,		SEN(madvise),			"madvise"		},
[5028] = { 3,	TI,		SEN(shmget),			"shmget"		},
[5029] = { 3,	TI|TM|SI,	SEN(shmat),			"shmat"			},
[5030] = { 3,	TI,		SEN(shmctl),			"shmctl"		},
[5031] = { 1,	TD,		SEN(dup),			"dup"			},
[5032] = { 2,	TD,		SEN(dup2),			"dup2"			},
[5033] = { 0,	TS,		SEN(pause),			"pause"			},
[5034] = { 2,	0,		SEN(nanosleep),			"nanosleep"		},
[5035] = { 2,	0,		SEN(getitimer),			"getitimer"		},
[5036] = { 3,	0,		SEN(setitimer),			"setitimer"		},
[5037] = { 1,	0,		SEN(alarm),			"alarm"			},
[5038] = { 0,	PU|NF,		SEN(getpid),			"getpid"		},
[5039] = { 4,	TD|TN,		SEN(sendfile),			"sendfile"		},
[5040] = { 3,	TN,		SEN(socket),			"socket"		},
[5041] = { 3,	TN,		SEN(connect),			"connect"		},
[5042] = { 3,	TN,		SEN(accept),			"accept"		},
[5043] = { 6,	TN,		SEN(sendto),			"sendto"		},
[5044] = { 6,	TN,		SEN(recvfrom),			"recvfrom"		},
[5045] = { 3,	TN,		SEN(sendmsg),			"sendmsg"		},
[5046] = { 3,	TN,		SEN(recvmsg),			"recvmsg"		},
[5047] = { 2,	TN,		SEN(shutdown),			"shutdown"		},
[5048] = { 3,	TN,		SEN(bind),			"bind"			},
[5049] = { 2,	TN,		SEN(listen),			"listen"		},
[5050] = { 3,	TN,		SEN(getsockname),		"getsockname"		},
[5051] = { 3,	TN,		SEN(getpeername),		"getpeername"		},
[5052] = { 4,	TN,		SEN(socketpair),		"socketpair"		},
[5053] = { 5,	TN,		SEN(setsockopt),		"setsockopt"		},
[5054] = { 5,	TN,		SEN(getsockopt),		"getsockopt"		},
[5055] = { 5,	TP,		SEN(clone),			"clone"			},
[5056] = { 0,	TP,		SEN(fork),			"fork"			},
[5057] = { 3,	TF|TP|SE|SI,	SEN(execve),			"execve"		},
[5058] = { 1,	TP|SE,		SEN(exit),			"exit"			},
[5059] = { 4,	TP,		SEN(wait4),			"wait4"			},
[5060] = { 2,	TS,		SEN(kill),			"kill"			},
[5061] = { 1,	0,		SEN(uname),			"uname"			},
[5062] = { 3,	TI,		SEN(semget),			"semget"		},
[5063] = { 3,	TI,		SEN(semop),			"semop"			},
[5064] = { 4,	TI,		SEN(semctl),			"semctl"		},
[5065] = { 1,	TI|TM|SI,	SEN(shmdt),			"shmdt"			},
[5066] = { 2,	TI,		SEN(msgget),			"msgget"		},
[5067] = { 4,	TI,		SEN(msgsnd),			"msgsnd"		},
[5068] = { 5,	TI,		SEN(msgrcv),			"msgrcv"		},
[5069] = { 3,	TI,		SEN(msgctl),			"msgctl"		},
[5070] = { 3,	TD,		SEN(fcntl),			"fcntl"			},
[5071] = { 2,	TD,		SEN(flock),			"flock"			},
[5072] = { 1,	TD,		SEN(fsync),			"fsync"			},
[5073] = { 1,	TD,		SEN(fdatasync),			"fdatasync"		},
[5074] = { 2,	TF,		SEN(truncate),			"truncate"		},
[5075] = { 2,	TD,		SEN(ftruncate),			"ftruncate"		},
[5076] = { 3,	TD,		SEN(getdents),			"getdents"		},
[5077] = { 2,	TF,		SEN(getcwd),			"getcwd"		},
[5078] = { 1,	TF,		SEN(chdir),			"chdir"			},
[5079] = { 1,	TD,		SEN(fchdir),			"fchdir"		},
[5080] = { 2,	TF,		SEN(rename),			"rename"		},
[5081] = { 2,	TF,		SEN(mkdir),			"mkdir"			},
[5082] = { 1,	TF,		SEN(rmdir),			"rmdir"			},
[5083] = { 2,	TD|TF,		SEN(creat),			"creat"			},
[5084] = { 2,	TF,		SEN(link),			"link"			},
[5085] = { 1,	TF,		SEN(unlink),			"unlink"		},
[5086] = { 2,	TF,		SEN(symlink),			"symlink"		},
[5087] = { 3,	TF,		SEN(readlink),			"readlink"		},
[5088] = { 2,	TF,		SEN(chmod),			"chmod"			},
[5089] = { 2,	TD,		SEN(fchmod),			"fchmod"		},
[5090] = { 3,	TF,		SEN(chown),			"chown"			},
[5091] = { 3,	TD,		SEN(fchown),			"fchown"		},
[5092] = { 3,	TF,		SEN(chown),			"lchown"		},
[5093] = { 1,	NF,		SEN(umask),			"umask"			},
[5094] = { 2,	0,		SEN(gettimeofday),		"gettimeofday"		},
[5095] = { 2,	0,		SEN(getrlimit),			"getrlimit"		},
[5096] = { 2,	0,		SEN(getrusage),			"getrusage"		},
[5097] = { 1,	0,		SEN(sysinfo),			"sysinfo"		},
[5098] = { 1,	0,		SEN(times),			"times"			},
[5099] = { 4,	0,		SEN(ptrace),			"ptrace"		},
[5100] = { 0,	PU|NF,		SEN(getuid),			"getuid"		},
[5101] = { 3,	0,		SEN(syslog),			"syslog"		},
[5102] = { 0,	PU|NF,		SEN(getgid),			"getgid"		},
[5103] = { 1,	0,		SEN(setuid),			"setuid"		},
[5104] = { 1,	0,		SEN(setgid),			"setgid"		},
[5105] = { 0,	PU|NF,		SEN(geteuid),			"geteuid"		},
[5106] = { 0,	PU|NF,		SEN(getegid),			"getegid"		},
[5107] = { 2,	0,		SEN(setpgid),			"setpgid"		},
[5108] = { 0,	PU|NF,		SEN(getppid),			"getppid"		},
[5109] = { 0,	PU|NF,		SEN(getpgrp),			"getpgrp"		},
[5110] = { 0,	0,		SEN(setsid),			"setsid"		},
[5111] = { 2,	0,		SEN(setreuid),			"setreuid"		},
[5112] = { 2,	0,		SEN(setregid),			"setregid"		},
[5113] = { 2,	0,		SEN(getgroups),			"getgroups"		},
[5114] = { 2,	0,		SEN(setgroups),			"setgroups"		},
[5115] = { 3,	0,		SEN(setresuid),			"setresuid"		},
[5116] = { 3,	0,		SEN(getresuid),			"getresuid"		},
[5117] = { 3,	0,		SEN(setresgid),			"setresgid"		},
[5118] = { 3,	0,		SEN(getresgid),			"getresgid"		},
[5119] = { 1,	0,		SEN(getpgid),			"getpgid"		},
[5120] = { 1,	NF,		SEN(setfsuid),			"setfsuid"		},
[5121] = { 1,	NF,		SEN(setfsgid),			"setfsgid"		},
[5122] = { 1,	0,		SEN(getsid),			"getsid"		},
[5123] = { 2,	0,		SEN(capget),			"capget"		},
[5124] = { 2,	0,		SEN(capset),			"capset"		},
[5125] = { 2,	TS,		SEN(rt_sigpending),		"rt_sigpending"		},
[5126] = { 4,	TS,		SEN(rt_sigtimedwait),		"rt_sigtimedwait"	},
[5127] = { 3,	TS,		SEN(rt_sigqueueinfo),		"rt_sigqueueinfo"	},
[5128] = { 2,	TS,		SEN(rt_sigsuspend),		"rt_sigsuspend"		},
[5129] = { 2,	TS,		SEN(sigaltstack),		"sigaltstack"		},
[5130] = { 2,	TF,		SEN(utime),			"utime"			},
[5131] = { 3,	TF,		SEN(mknod),			"mknod"			},
[5132] = { 1,	NF,		SEN(personality),		"personality"		},
[5133] = { 2,	TSFA,		SEN(ustat),			"ustat"			},
[5134] = { 2,	TF|TSF|TSFA,	SEN(statfs),			"statfs"		},
[5135] = { 2,	TD|TFSF|TSFA,	SEN(fstatfs),			"fstatfs"		},
[5136] = { 3,	0,		SEN(sysfs),			"sysfs"			},
[5137] = { 2,	0,		SEN(getpriority),		"getpriority"		},
[5138] = { 3,	0,		SEN(setpriority),		"setpriority"		},
[5139] = { 2,	0,		SEN(sched_setparam),		"sched_setparam"	},
[5140] = { 2,	0,		SEN(sched_getparam),		"sched_getparam"	},
[5141] = { 3,	0,		SEN(sched_setscheduler),	"sched_setscheduler"	},
[5142] = { 1,	0,		SEN(sched_getscheduler),	"sched_getscheduler"	},
[5143] = { 1,	0,		SEN(sched_get_priority_max),	"sched_get_priority_max"},
[5144] = { 1,	0,		SEN(sched_get_priority_min),	"sched_get_priority_min"},
[5145] = { 2,	0,		SEN(sched_rr_get_interval),	"sched_rr_get_interval"	},
[5146] = { 2,	TM,		SEN(mlock),			"mlock"			},
[5147] = { 2,	TM,		SEN(munlock),			"munlock"		},
[5148] = { 1,	TM,		SEN(mlockall),			"mlockall"		},
[5149] = { 0,	TM,		SEN(munlockall),		"munlockall"		},
[5150] = { 0,	0,		SEN(vhangup),			"vhangup"		},
[5151] = { 2,	TF,		SEN(pivotroot),			"pivot_root"		},
[5152] = { 1,	0,		SEN(sysctl),			"_sysctl"		},
[5153] = { 5,	0,		SEN(prctl),			"prctl"			},
[5154] = { 1,	0,		SEN(adjtimex),			"adjtimex"		},
[5155] = { 2,	0,		SEN(setrlimit),			"setrlimit"		},
[5156] = { 1,	TF,		SEN(chroot),			"chroot"		},
[5157] = { 0,	0,		SEN(sync),			"sync"			},
[5158] = { 1,	TF,		SEN(acct),			"acct"			},
[5159] = { 2,	0,		SEN(settimeofday),		"settimeofday"		},
[5160] = { 5,	TF,		SEN(mount),			"mount"			},
[5161] = { 2,	TF,		SEN(umount2),			"umount2"		},
[5162] = { 2,	TF,		SEN(swapon),			"swapon"		},
[5163] = { 1,	TF,		SEN(swapoff),			"swapoff"		},
[5164] = { 4,	0,		SEN(reboot),			"reboot"		},
[5165] = { 2,	0,		SEN(sethostname),		"sethostname"		},
[5166] = { 2,	0,		SEN(setdomainname),		"setdomainname"		},
[5167] = { 2,	0,		SEN(create_module),		"create_module"		},
[5168] = { 3,	0,		SEN(init_module),		"init_module"		},
[5169] = { 2,	0,		SEN(delete_module),		"delete_module"		},
[5170] = { 1,	0,		SEN(get_kernel_syms),		"get_kernel_syms"	},
[5171] = { 5,	0,		SEN(query_module),		"query_module"		},
[5172] = { 4,	TF,		SEN(quotactl),			"quotactl"		},
[5173] = { 3,	0,		SEN(nfsservctl),		"nfsservctl"		},
[5174] = { 5,	TN,		SEN(getpmsg),			"getpmsg"		},
[5175] = { 5,	TN,		SEN(putpmsg),			"putpmsg"		},
[5176] = { 0,	0,		SEN(afs_syscall),		"afs_syscall"		},
[5177] = { 0,	0,		SEN(printargs),			"reserved177"		},
[5178] = { 0,	PU|NF,		SEN(gettid),			"gettid"		},
[5179] = { 3,	TD,		SEN(readahead),			"readahead"		},
[5180] = { 5,	TF,		SEN(setxattr),			"setxattr"		},
[5181] = { 5,	TF,		SEN(setxattr),			"lsetxattr"		},
[5182] = { 5,	TD,		SEN(fsetxattr),			"fsetxattr"		},
[5183] = { 4,	TF,		SEN(getxattr),			"getxattr"		},
[5184] = { 4,	TF,		SEN(getxattr),			"lgetxattr"		},
[5185] = { 4,	TD,		SEN(fgetxattr),			"fgetxattr"		},
[5186] = { 3,	TF,		SEN(listxattr),			"listxattr"		},
[5187] = { 3,	TF,		SEN(listxattr),			"llistxattr"		},
[5188] = { 3,	TD,		SEN(flistxattr),		"flistxattr"		},
[5189] = { 2,	TF,		SEN(removexattr),		"removexattr"		},
[5190] = { 2,	TF,		SEN(removexattr),		"lremovexattr"		},
[5191] = { 2,	TD,		SEN(fremovexattr),		"fremovexattr"		},
[5192] = { 2,	TS,		SEN(kill),			"tkill"			},
[5193] = { 1,	0,		SEN(time),			"time"			},
[5194] = { 6,	0,		SEN(futex),			"futex"			},
[5195] = { 3,	0,		SEN(sched_setaffinity),		"sched_setaffinity"	},
[5196] = { 3,	0,		SEN(sched_getaffinity),		"sched_getaffinity"	},
[5197] = { 3,	0,		SEN(printargs),			"cacheflush"		},
[5198] = { 3,	0,		SEN(printargs),			"cachectl"		},
[5199] = { 4,	0,		SEN(sysmips),			"sysmips"		},
[5200] = { 2,	TM,		SEN(io_setup),			"io_setup"		},
[5201] = { 1,	TM,		SEN(io_destroy),		"io_destroy"		},
[5202] = { 5,	0,		SEN(io_getevents),		"io_getevents"		},
[5203] = { 3,	0,		SEN(io_submit),			"io_submit"		},
[5204] = { 3,	0,		SEN(io_cancel),			"io_cancel"		},
[5205] = { 1,	TP|SE,		SEN(exit),			"exit_group"		},
[5206] = { 3,	0,		SEN(lookup_dcookie),		"lookup_dcookie"	},
[5207] = { 1,	TD,		SEN(epoll_create),		"epoll_create"		},
[5208] = { 4,	TD,		SEN(epoll_ctl),			"epoll_ctl"		},
[5209] = { 4,	TD,		SEN(epoll_wait),		"epoll_wait"		},
[5210] = { 5,	TM|SI,		SEN(remap_file_pages),		"remap_file_pages"	},
[5211] = { 0,	TS,		SEN(rt_sigreturn),		"rt_sigreturn"		},
[5212] = { 1,	0,		SEN(set_tid_address),		"set_tid_address"	},
[5213] = { 0,	0,		SEN(restart_syscall),		"restart_syscall"	},
[5214] = { 4,	TI,		SEN(semtimedop),		"semtimedop"		},
[5215] = { 4,	TD,		SEN(fadvise64),			"fadvise64"		},
[5216] = { 3,	0,		SEN(timer_create),		"timer_create"		},
[5217] = { 4,	0,		SEN(timer_settime),		"timer_settime"		},
[5218] = { 2,	0,		SEN(timer_gettime),		"timer_gettime"		},
[5219] = { 1,	0,		SEN(timer_getoverrun),		"timer_getoverrun"	},
[5220] = { 1,	0,		SEN(timer_delete),		"timer_delete"		},
[5221] = { 2,	0,		SEN(clock_settime),		"clock_settime"		},
[5222] = { 2,	0,		SEN(clock_gettime),		"clock_gettime"		},
[5223] = { 2,	0,		SEN(clock_getres),		"clock_getres"		},
[5224] = { 4,	0,		SEN(clock_nanosleep),		"clock_nanosleep"	},
[5225] = { 3,	TS,		SEN(tgkill),			"tgkill"		},
[5226] = { 2,	TF,		SEN(utimes),			"utimes"		},
[5227] = { 6,	TM,		SEN(mbind),			"mbind"			},
[5228] = { 5,	TM,		SEN(get_mempolicy),		"get_mempolicy"		},
[5229] = { 3,	TM,		SEN(set_mempolicy),		"set_mempolicy"		},
[5230] = { 4,	TD,		SEN(mq_open),			"mq_open"		},
[5231] = { 1,	0,		SEN(mq_unlink),			"mq_unlink"		},
[5232] = { 5,	TD,		SEN(mq_timedsend),		"mq_timedsend"		},
[5233] = { 5,	TD,		SEN(mq_timedreceive),		"mq_timedreceive"	},
[5234] = { 2,	TD,		SEN(mq_notify),			"mq_notify"		},
[5235] = { 3,	TD,		SEN(mq_getsetattr),		"mq_getsetattr"		},
[5236] = { 5,	0,		SEN(vserver),			"vserver"		},
[5237] = { 5,	TP,		SEN(waitid),			"waitid"		},
[5238] = { },
[5239] = { 5,	0,		SEN(add_key),			"add_key"		},
[5240] = { 4,	0,		SEN(request_key),		"request_key"		},
[5241] = { 5,	0,		SEN(keyctl),			"keyctl"		},
[5242] = { 1,	0,		SEN(set_thread_area),		"set_thread_area"	},
[5243] = { 0,	TD,		SEN(inotify_init),		"inotify_init"		},
[5244] = { 3,	TD|TF,		SEN(inotify_add_watch),		"inotify_add_watch"	},
[5245] = { 2,	TD,		SEN(inotify_rm_watch),		"inotify_rm_watch"	},
[5246] = { 4,	TM,		SEN(migrate_pages),		"migrate_pages"		},
[5247] = { 4,	TD|TF,		SEN(openat),			"openat"		},
[5248] = { 3,	TD|TF,		SEN(mkdirat),			"mkdirat"		},
[5249] = { 4,	TD|TF,		SEN(mknodat),			"mknodat"		},
[5250] = { 5,	TD|TF,		SEN(fchownat),			"fchownat"		},
[5251] = { 3,	TD|TF,		SEN(futimesat),			"futimesat"		},
[5252] = { 4,	TD|TF|TFST|TSTA,SEN(newfstatat),		"newfstatat"		},
[5253] = { 3,	TD|TF,		SEN(unlinkat),			"unlinkat"		},
[5254] = { 4,	TD|TF,		SEN(renameat),			"renameat"		},
[5255] = { 5,	TD|TF,		SEN(linkat),			"linkat"		},
[5256] = { 3,	TD|TF,		SEN(symlinkat),			"symlinkat"		},
[5257] = { 4,	TD|TF,		SEN(readlinkat),		"readlinkat"		},
[5258] = { 3,	TD|TF,		SEN(fchmodat),			"fchmodat"		},
[5259] = { 3,	TD|TF,		SEN(faccessat),			"faccessat"		},
[5260] = { 6,	TD,		SEN(pselect6),			"pselect6"		},
[5261] = { 5,	TD,		SEN(ppoll),			"ppoll"			},
[5262] = { 1,	TP,		SEN(unshare),			"unshare"		},
[5263] = { 6,	TD,		SEN(splice),			"splice"		},
[5264] = { 4,	TD,		SEN(sync_file_range),		"sync_file_range"	},
[5265] = { 4,	TD,		SEN(tee),			"tee"			},
[5266] = { 4,	TD,		SEN(vmsplice),			"vmsplice"		},
[5267] = { 6,	TM,		SEN(move_pages),		"move_pages"		},
[5268] = { 2,	0,		SEN(set_robust_list),		"set_robust_list"	},
[5269] = { 3,	0,		SEN(get_robust_list),		"get_robust_list"	},
[5270] = { 4,	0,		SEN(kexec_load),		"kexec_load"		},
[5271] = { 3,	0,		SEN(getcpu),			"getcpu"		},
[5272] = { 6,	TD,		SEN(epoll_pwait),		"epoll_pwait"		},
[5273] = { 3,	0,		SEN(ioprio_set),		"ioprio_set"		},
[5274] = { 2,	0,		SEN(ioprio_get),		"ioprio_get"		},
[5275] = { 4,	TD|TF,		SEN(utimensat),			"utimensat"		},
[5276] = { 3,	TD|TS,		SEN(signalfd),			"signalfd"		},
[5277] = { 4,	TD,		SEN(timerfd),			"timerfd"		},
[5278] = { 1,	TD,		SEN(eventfd),			"eventfd"		},
[5279] = { 4,	TD,		SEN(fallocate),			"fallocate"		},
[5280] = { 2,	TD,		SEN(timerfd_create),		"timerfd_create"	},
[5281] = { 2,	TD,		SEN(timerfd_gettime),		"timerfd_gettime"	},
[5282] = { 4,	TD,		SEN(timerfd_settime),		"timerfd_settime"	},
[5283] = { 4,	TD|TS,		SEN(signalfd4),			"signalfd4"		},
[5284] = { 2,	TD,		SEN(eventfd2),			"eventfd2"		},
[5285] = { 1,	TD,		SEN(epoll_create1),		"epoll_create1"		},
[5286] = { 3,	TD,		SEN(dup3),			"dup3"			},
[5287] = { 2,	TD,		SEN(pipe2),			"pipe2"			},
[5288] = { 1,	TD,		SEN(inotify_init1),		"inotify_init1"		},
[5289] = { 4,	TD,		SEN(preadv),			"preadv"		},
[5290] = { 4,	TD,		SEN(pwritev),			"pwritev"		},
[5291] = { 4,	TP|TS,		SEN(rt_tgsigqueueinfo),		"rt_tgsigqueueinfo"	},
[5292] = { 5,	TD,		SEN(perf_event_open),		"perf_event_open"	},
[5293] = { 4,	TN,		SEN(accept4),			"accept4"		},
[5294] = { 5,	TN,		SEN(recvmmsg),			"recvmmsg"		},
[5295] = { 2,	TD,		SEN(fanotify_init),		"fanotify_init"		},
[5296] = { 5,	TD|TF,		SEN(fanotify_mark),		"fanotify_mark"		},
[5297] = { 4,	0,		SEN(prlimit64),			"prlimit64"		},
[5298] = { 5,	TD|TF,		SEN(name_to_handle_at),		"name_to_handle_at"	},
[5299] = { 3,	TD,		SEN(open_by_handle_at),		"open_by_handle_at"	},
[5300] = { 2,	0,		SEN(clock_adjtime),		"clock_adjtime"		},
[5301] = { 1,	TD,		SEN(syncfs),			"syncfs"		},
[5302] = { 4,	TN,		SEN(sendmmsg),			"sendmmsg"		},
[5303] = { 2,	TD,		SEN(setns),			"setns"			},
[5304] = { 6,	0,		SEN(process_vm_readv),		"process_vm_readv"	},
[5305] = { 6,	0,		SEN(process_vm_writev),		"process_vm_writev"	},
[5306] = { 5,	0,		SEN(kcmp),			"kcmp"			},
[5307] = { 3,	TD,		SEN(finit_module),		"finit_module"		},
[5308] = { 3,	TD,		SEN(getdents64),		"getdents64"		},
[5309] = { 3,	0,		SEN(sched_setattr),		"sched_setattr"		},
[5310] = { 4,	0,		SEN(sched_getattr),		"sched_getattr"		},
[5311] = { 5,	TD|TF,		SEN(renameat2),			"renameat2"		},
[5312] = { 3,	0,		SEN(seccomp),			"seccomp"		},
[5313] = { 3,	0,		SEN(getrandom),			"getrandom"		},
[5314] = { 2,	TD,		SEN(memfd_create),		"memfd_create"		},
[5315] = { 3,	TD,		SEN(bpf),			"bpf"			},
[5316] = { 5,	TD|TF|TP|SE|SI,	SEN(execveat),			"execveat"		},
[5317] = { 1,	TD,		SEN(userfaultfd),		"userfaultfd"		},
[5318] = { 2,	0,		SEN(membarrier),		"membarrier"		},
[5319] = { 3,	TM,		SEN(mlock2),			"mlock2"		},
[5320] = { 6,	TD,		SEN(copy_file_range),		"copy_file_range"	},
[5321] = { 6,	TD,		SEN(preadv2),			"preadv2"		},
[5322] = { 6,	TD,		SEN(pwritev2),			"pwritev2"		},
[5323] = { 4,	TM|SI,		SEN(pkey_mprotect),		"pkey_mprotect"		},
[5324] = { 2,	0,		SEN(pkey_alloc),		"pkey_alloc"		},
[5325] = { 1,	0,		SEN(pkey_free),			"pkey_free"		},
[5326] = { 5,	TD|TF|TSTA,	SEN(statx),			"statx"			},
[5327] = { 4,	0,		SEN(rseq),			"rseq"			},
[5328] = { 6,	0,		SEN(io_pgetevents),		"io_pgetevents"		},

# define SYS_socket_subcall      5400
# include "subcall.h"

#else

# include "syscallent-n64-stub.h"

#endif

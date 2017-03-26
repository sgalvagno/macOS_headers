//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct PAMallocDataHeader {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    char _field7;
    char _field8;
    char _field9;
    char _field10;
};

struct PAMemAllocationSerialized {
    long long _field1;
    long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    char _field5;
    char _field6;
};

struct PARangeListNode {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    struct PARangeListNode *_field7;
};

struct PASerializedMallocStackFrame {
    unsigned long long _field1;
    unsigned long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned long long _field9;
    char _field10;
    char _field11;
};

struct PASerializedMallocStackTree {
    unsigned long long _field1;
    unsigned long long _field2;
    char _field3;
};

struct PASerializedMemAllocationCategory {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    char _field6;
};

struct PAStringIndexHeader {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct eproc {
    struct proc *e_paddr;
    struct session *e_sess;
    struct _pcred {
        char pc_lock[72];
        struct ucred *pc_ucred;
        unsigned int p_ruid;
        unsigned int p_svuid;
        unsigned int p_rgid;
        unsigned int p_svgid;
        int p_refcnt;
    } e_pcred;
    struct _ucred {
        int cr_ref;
        unsigned int cr_uid;
        short cr_ngroups;
        unsigned int cr_groups[16];
    } e_ucred;
    struct vmspace e_vm;
    int e_ppid;
    int e_pgid;
    short e_jobc;
    int e_tdev;
    int e_tpgid;
    struct session *e_tsess;
    char e_wmesg[8];
    int e_xsize;
    short e_xrssize;
    short e_xccount;
    short e_xswrss;
    int e_flag;
    char e_login[12];
    int e_spare[4];
};

struct extern_proc {
    union {
        struct {
            struct proc *__p_forw;
            struct proc *__p_back;
        } p_st1;
        struct timeval __p_starttime;
    } p_un;
    struct vmspace *p_vmspace;
    struct sigacts *p_sigacts;
    int p_flag;
    char p_stat;
    int p_pid;
    int p_oppid;
    int p_dupfd;
    char *user_stack;
    void *exit_thread;
    int p_debugger;
    unsigned int sigwait;
    unsigned int p_estcpu;
    int p_cpticks;
    unsigned int p_pctcpu;
    void *p_wchan;
    char *p_wmesg;
    unsigned int p_swtime;
    unsigned int p_slptime;
    struct itimerval p_realtimer;
    struct timeval p_rtime;
    unsigned long long p_uticks;
    unsigned long long p_sticks;
    unsigned long long p_iticks;
    int p_traceflag;
    struct vnode *p_tracep;
    int p_siglist;
    struct vnode *p_textvp;
    int p_holdcnt;
    unsigned int p_sigmask;
    unsigned int p_sigignore;
    unsigned int p_sigcatch;
    unsigned char p_priority;
    unsigned char p_usrpri;
    char p_nice;
    char p_comm[17];
    struct pgrp *p_pgrp;
    struct user *p_addr;
    unsigned short p_xstat;
    unsigned short p_acflag;
    struct rusage *p_ru;
};

struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
};

struct kinfo_proc {
    struct extern_proc kp_proc;
    struct eproc kp_eproc;
};

struct pgrp;

struct proc;

struct rusage;

struct session;

struct sigacts;

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct ucred;

struct user;

struct vm_region_submap_info_64 {
    int protection;
    int max_protection;
    unsigned int inheritance;
    unsigned long long offset;
    unsigned int user_tag;
    unsigned int pages_resident;
    unsigned int pages_shared_now_private;
    unsigned int pages_swapped_out;
    unsigned int pages_dirtied;
    unsigned int ref_count;
    unsigned short shadow_depth;
    unsigned char external_pager;
    unsigned char share_mode;
    unsigned int is_submap;
    int behavior;
    unsigned int object_id;
    unsigned short user_wired_count;
    unsigned int pages_reusable;
};

struct vm_statistics {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
};

struct vmspace {
    int dummy;
    char *dummy2;
    int dummy3[5];
    char *dummy4[3];
};

struct vnode;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    int _field4;
    struct vm_region_submap_info_64 _field5;
} CDStruct_544688f7;


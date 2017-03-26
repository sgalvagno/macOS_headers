//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Named Structures

struct AuthorizationOpaqueRef;

struct SSLContext;

struct _cups_array_s;

struct _http_s {
    int _field1;
    int _field2;
    int _field3;
    long long _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    struct sockaddr_in _field9;
    char _field10[256];
    char _field11[27][256];
    char *_field12;
    int _field13;
    int _field14;
    int _field15;
    char _field16[2048];
    int _field17;
    struct _cups_md5_state_s {
        unsigned int _field1[2];
        unsigned int _field2[4];
        unsigned char _field3[64];
    } _field18;
    char _field19[256];
    int _field20;
    struct SSLContext *_field21;
    int _field22;
    struct fd_set *_field23;
    int _field24;
    char *_field25;
    char _field26[256];
    char _field27[256];
    int _field28;
    long long _field29;
    union _http_addr_u *_field30;
    struct http_addrlist_s *_field31;
    char _field32[2048];
    int _field33;
    char *_field34;
    char *_field35;
    struct gss_OID_desc_struct *_field36;
    struct gss_ctx_id_t_desc_struct *_field37;
    struct gss_name_t_desc_struct *_field38;
    struct AuthorizationOpaqueRef *_field39;
    struct __CFArray *_field40;
    CDUnknownFunctionPointerType _field41;
    void *_field42;
    double _field43;
    int _field44;
    char _field45[256];
    int _field46;
    int _field47;
    char *_field48;
    char *_field49;
    char *_field50;
    char *_field51;
    char *_field52;
    char *_field53;
    int _field54;
    struct z_stream_s _field55;
    char *_field56;
};

struct fd_set;

struct gss_OID_desc_struct;

struct gss_ctx_id_t_desc_struct;

struct gss_name_t_desc_struct;

struct http_addrlist_s;

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct ppd_attr_s;

struct ppd_choice_s;

struct ppd_const_s;

struct ppd_emul_s;

struct ppd_file_s {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    char *_field11;
    int _field12;
    struct ppd_emul_s *_field13;
    char *_field14;
    char *_field15;
    char *_field16;
    char *_field17;
    char *_field18;
    char *_field19;
    char *_field20;
    char *_field21;
    char *_field22;
    char *_field23;
    char *_field24;
    int _field25;
    struct ppd_group_s *_field26;
    int _field27;
    struct ppd_size_s *_field28;
    float _field29[2];
    float _field30[2];
    float _field31[4];
    int _field32;
    struct ppd_const_s *_field33;
    int _field34;
    char **_field35;
    int _field36;
    struct ppd_profile_s *_field37;
    int _field38;
    char **_field39;
    int _field40;
    char *_field41;
    char *_field42;
    int _field43;
    int _field44;
    struct ppd_attr_s **_field45;
    struct _cups_array_s *_field46;
    struct _cups_array_s *_field47;
    struct _cups_array_s *_field48;
    struct _cups_array_s *_field49;
    struct _cups_array_s *_field50;
    struct _ppd_cache_s *_field51;
};

struct ppd_group_s {
    char _field1[40];
    char _field2[41];
    int _field3;
    struct ppd_option_s *_field4;
    int _field5;
    struct ppd_group_s *_field6;
};

struct ppd_option_s {
    char _field1;
    char _field2[41];
    char _field3[41];
    char _field4[81];
    int _field5;
    int _field6;
    float _field7;
    int _field8;
    struct ppd_choice_s *_field9;
};

struct ppd_profile_s;

struct ppd_size_s;

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct z_stream_s {
    char *_field1;
    unsigned int _field2;
    unsigned long long _field3;
    char *_field4;
    unsigned int _field5;
    unsigned long long _field6;
    char *_field7;
    struct internal_state *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    void *_field11;
    int _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};


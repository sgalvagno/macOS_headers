//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct SwiftReflectionContext;

struct VMULabelUniquingDataForStringType {
    id _field1;
    id _field2;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

struct _VMUBlockNode {
    unsigned long long _field1;
    unsigned int :3;
    unsigned int :2;
    unsigned int :36;
    unsigned int :23;
};

struct _VMUDirectedGraphEdge {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct _VMUInstanceValues {
    unsigned long long _field1;
    id _field2;
};

struct _VMUObjectGraphEdge {
    union {
        struct {
            unsigned int :24;
            unsigned int :2;
            unsigned int :5;
            unsigned int :1;
        } _field1;
        struct {
            unsigned int :31;
            unsigned int :1;
        } _field2;
    } _field1;
};

struct _VMUObjectGraphEdgeLarge {
    unsigned int :56;
    unsigned int :8;
    unsigned int :56;
    unsigned int :8;
};

struct _VMURange {
    unsigned long long location;
    unsigned long long length;
};

struct _VMURegionMap {
    void *_field1;
    struct _VMURegionNode *_field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned int _field6[0];
};

struct _VMURegionNode {
    id _field1;
    void *_field2;
    unsigned long long _field3;
    struct _VMURegionNode *_field4;
    struct *_field5;
    unsigned int _field6;
    unsigned long long _field7;
    unsigned long long _field8;
};

struct _VMUThreadNode {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long *_field4;
};

struct _VMUVMRegionData {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    int _field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    int _field11;
    unsigned int _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :28;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
};

struct _VMUZoneNode {
    unsigned long long _field1;
    id _field2;
    struct malloc_introspection_t *_field3;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct libSwiftRemoteMirrorWrapper {
    struct SwiftReflectionContext *_field1;
    unsigned short _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
};

struct mach_stack_logging_record {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct malloc_introspection_t;

struct swift_typeinfo {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned long long _field8;
} CDStruct_f7b194fa;

typedef struct {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned long long _field3;
} CDStruct_8b65991f;

typedef struct {
    unsigned long long _field1;
    unsigned int :60;
    unsigned int :4;
    id _field2;
} CDStruct_599faf0f;


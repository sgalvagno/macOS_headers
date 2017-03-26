//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct WKPoint {
    double _field1;
    double _field2;
};

struct WKRect {
    struct WKPoint _field1;
    struct WKSize _field2;
};

struct WKSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFRuntimeBase {
    unsigned long long _field1;
    unsigned char _field2[4];
    unsigned int _field3;
};

struct __CFString;

struct __DDQueryOffset {
    unsigned int :32;
    unsigned int :32;
};

struct __DDResult {
    struct __CFRuntimeBase _field1;
    struct __DDQueryRange {
        struct __DDQueryOffset _field1;
        struct __DDQueryOffset _field2;
    } _field2;
    struct {
        long long _field1;
        long long _field2;
    } _field3;
    long long _field4;
    struct __CFArray *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    void *_field8;
    struct __CFDictionary *_field9;
    long long _field10;
    unsigned char _field11;
    float _field12;
};

struct __DDScanQuery {
    struct __CFRuntimeBase _field1;
    struct __DDQueryFragment *_field2;
    long long _field3;
    long long _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
};


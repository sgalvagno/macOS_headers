//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNFoundationError : NSObject
{
}

+ (BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id *)arg2 toError:(id)arg3;
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id *)arg2 toError:(id)arg3;
+ (id)errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
+ (id)errorWithErrno:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithErrnoAndUserInfo:(id)arg1;
+ (id)errorWithErrno:(int)arg1;
+ (id)errorWithErrno;
+ (BOOL)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3;
+ (BOOL)isCertificateError:(id)arg1;
+ (BOOL)isFileNotFoundError:(id)arg1;
+ (BOOL)isCanceledError:(id)arg1;
+ (BOOL)isTimeoutError:(id)arg1;
+ (id)timeoutError;

@end


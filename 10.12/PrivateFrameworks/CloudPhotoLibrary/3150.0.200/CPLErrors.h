//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLErrors : NSObject
{
}

+ (id)missingError;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3;
+ (id)cplErrorWithCode:(long long)arg1 description:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (id)cplErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)operationCancelledError;
+ (id)posixErrorForURL:(id)arg1;
+ (id)invalidDaemonErrorWithConnectionError:(id)arg1;
+ (id)invalidCloudCacheErrorWithReason:(id)arg1;
+ (id)invalidClientCacheErrorWithReason:(id)arg1;
+ (id)libraryClosedError;
+ (id)transportErrorFromTransportError:(id)arg1;
+ (id)unknownError;
+ (id)notImplementedError;
+ (id)versionMismatchError;
+ (id)underlyingErrorWithReason:(id)arg1;
+ (id)incorrectMachineStateErrorWithReason:(id)arg1;
+ (id)incorrectParametersErrorForParameter:(id)arg1;

@end


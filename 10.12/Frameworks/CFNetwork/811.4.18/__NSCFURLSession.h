//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

@class NSDictionary, NSObject, NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSCFURLSession : NSURLSession
{
    NSOperationQueue *_delegateQueue;
    id <NSURLSessionDelegate> _delegate;
    NSString *_sessionDescription;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURLSessionConfiguration *_local_immutable_configuration;
    BOOL _invalid;
    BOOL _isSharedSession;
    NSString *_uuid;
    CDUnknownBlockType _connBlock;
    NSDictionary *_atsState;
}

- (void)set_connBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_connBlock;
- (void)set_atsState:(id)arg1;
- (id)_atsState;
- (void)set_uuid:(id)arg1;
- (id)_uuid;
- (void)set_isSharedSession:(BOOL)arg1;
- (BOOL)_isSharedSession;
- (void)setInvalid:(BOOL)arg1;
- (BOOL)invalid;
- (void)set_local_immutable_configuration:(id)arg1;
- (id)_local_immutable_configuration;
- (void)setSessionDescription:(id)arg1;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegateQueue:(id)arg1;
- (id)delegateQueue;
@property(readonly, copy) NSDictionary *delegateOptions;
- (id)workQueue;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end


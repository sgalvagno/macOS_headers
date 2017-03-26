//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEONSURLSharedSessionURLSessionDelegate, NSMapTable, NSOperationQueue, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONSURLSharedSession : NSObject
{
    NSURLSession *_session;
    GEONSURLSharedSessionURLSessionDelegate *_urlSessionDelegate;
    NSOperationQueue *_delegateOperationQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMapTable *_runningTasks;
}

- (void)_removeDelegateForTask:(id)arg1;
- (id)_taskDelegateForTask:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end


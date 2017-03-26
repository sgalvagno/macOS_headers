//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSObject, SSSession;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SenderThread : NSThread
{
    NSObject<OS_dispatch_semaphore> *mSuspendSemaphore;
    struct __CFRunLoop *mRunLoop;
    SSSession *mSession;
    BOOL mSuspended;
}

@property SSSession *session; // @synthesize session=mSession;
- (void)shutDown;
- (void)resume;
- (void)suspend;
- (void)main;
- (void)dealloc;
- (id)init;

@end


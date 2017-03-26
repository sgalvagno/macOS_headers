//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class CNQueue, NSConditionLock, NSString;
@protocol CNScheduler;

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;
    CNQueue *_queue;
    NSConditionLock *_lock;
}

+ (id)resumedSchedulerWithScheduler:(id)arg1;
+ (id)suspendedSchedulerWithScheduler:(id)arg1;
@property(readonly) NSConditionLock *lock; // @synthesize lock=_lock;
@property(readonly) CNQueue *queue; // @synthesize queue=_queue;
@property(readonly) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (double)timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)_nts_enqueueCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_performFirstQueuedTask;
- (void)suspend;
- (void)resume;
- (id)initWithScheduler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


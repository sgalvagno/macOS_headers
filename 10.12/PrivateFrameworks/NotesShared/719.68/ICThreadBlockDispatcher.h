//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;
@protocol OS_dispatch_queue;

@interface ICThreadBlockDispatcher : NSObject
{
    NSThread *_creationThread;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property __weak NSThread *creationThread; // @synthesize creationThread=_creationThread;
- (void).cxx_destruct;
- (void)performBlockAndWaitUntilFinishedWithRunLoopProcessingTime:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)performBlockAndWaitUntilDone:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)useDispatchQueueOnly;
- (BOOL)currentIsCreationThread;
- (void)assertIsValidCallingThread;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SiriCoreConnectionQueueMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_watcher;
}

- (void).cxx_destruct;
- (void)signalWatcher;
- (void)startWatcher;
- (void)_signalWatcher;
- (void)_startWatcher;
- (void)dealloc;
- (id)init;

@end


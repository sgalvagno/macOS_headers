//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CKDSystemAvailabilityMonitor : NSObject
{
    unsigned long long _availabilityState;
    NSMutableSet *_watchers;
    NSObject<OS_dispatch_queue> *_availabilityQueue;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *availabilityQueue; // @synthesize availabilityQueue=_availabilityQueue;
@property(retain, nonatomic) NSMutableSet *watchers; // @synthesize watchers=_watchers;
@property unsigned long long availabilityState; // @synthesize availabilityState=_availabilityState;
- (void).cxx_destruct;
- (void)unregisterWatcher:(id)arg1;
- (void)registerWatcher:(id)arg1;
- (BOOL)_systemMayNowBeReady;
- (void)_notifyWatchersOfStateChange;
@property(readonly) BOOL systemIsAvailable;
- (void)dealloc;
- (id)_init;
- (id)init;

@end


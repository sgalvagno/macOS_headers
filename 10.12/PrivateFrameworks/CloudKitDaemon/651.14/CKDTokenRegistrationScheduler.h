//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDSystemAvailabilityWatcher-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher>
{
    BOOL _schedulerIsAvailable;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callbackBlocks;
    NSMutableDictionary *_callbackTimers;
    NSMutableSet *_requests;
}

+ (id)sharedScheduler;
@property(retain, nonatomic) NSMutableSet *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSMutableDictionary *callbackTimers; // @synthesize callbackTimers=_callbackTimers;
@property(retain, nonatomic) NSMutableDictionary *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL schedulerIsAvailable; // @synthesize schedulerIsAvailable=_schedulerIsAvailable;
- (void).cxx_destruct;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg1 apsEnvironmentString:(id)arg2 useAPSPublicToken:(BOOL)arg3 darkWakeEnabled:(BOOL)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)forceTokenRefreshForAllClients;
- (void)unregisterAllTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterTokenForAppContainerTuple:(id)arg1;
- (void)handlePushTokenDidUpdate:(id)arg1;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)refreshAllClientsNow;
- (void)_removeToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(long long)arg4 darkWakeEnabled:(BOOL)arg5 isCKSystemService:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_refreshToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(long long)arg4 darkWakeEnabled:(BOOL)arg5 isCKSystemService:(BOOL)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)tokenRefreshChanged;
- (void)registerTokenRefreshActivity;
- (void)setSchedulerAvailable:(BOOL)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


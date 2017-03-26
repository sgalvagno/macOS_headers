//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface MCXDLauncher : NSObject
{
    BOOL mLaunchingMCX;
    BOOL mNetworkListenerRunning;
    NSTimer *mNetCheckTimer;
    struct __CFRunLoopSource *mRunLoopSource;
    struct __SCDynamicStore *mStore;
}

+ (id)sharedMCXDLauncher;
- (void)preheatNetstateCallback;
- (void)openExclusiveFileIfManagedSingleLoginOnly:(id)arg1;
- (void)launchOnLogoutIfNeeded:(id)arg1 logoutOperation:(int)arg2;
- (void)quitMCXD;
- (void)launchMCXD:(int)arg1;
- (void)stopNetworkListener;
- (void)startNetworkListener;
- (void)dealloc;
- (id)init;
- (void)startNetworkChangeThreadTimer:(BOOL)arg1;
- (void)startNetworkChangeThread:(id)arg1;
- (void)freeNetworkTimer;
- (void)removeSCListener;
- (void)setupSCListener;

@end


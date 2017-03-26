//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _DKDataProtectionMaster : NSObject
{
    NSMutableDictionary *_handlers;
    BOOL _deviceFormatedForContentProtection;
    NSMutableDictionary *_availableState;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    BOOL _notifyEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)deregisterStateChangeHandler:(id)arg1;
- (id)registerStateChangeHandler:(CDUnknownBlockType)arg1;
- (BOOL)isDataAvailableFor:(id)arg1;
- (void)dealloc;
- (id)init;

@end


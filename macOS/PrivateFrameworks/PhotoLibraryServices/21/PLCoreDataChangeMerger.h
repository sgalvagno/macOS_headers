//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, PLManagedObjectContextList;

@interface PLCoreDataChangeMerger : NSObject
{
    PLManagedObjectContextList *_contextsToReceiveNotifications;
    NSObject<OS_dispatch_queue> *_mergeChangesQueue;
    BOOL _invalidated;
    BOOL _isMergingCoalescedSaveNotification;
    NSDictionary *_allDidSaveObjectIDsUserInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo; // @synthesize allDidSaveObjectIDsUserInfo=_allDidSaveObjectIDsUserInfo;
@property(nonatomic) BOOL isMergingCoalescedSaveNotification; // @synthesize isMergingCoalescedSaveNotification=_isMergingCoalescedSaveNotification;
- (id)allContexts;
- (id)allContextsNotIdenticalTo:(id)arg1;
- (void)refreshAllObjects;
- (void)handleUnknownMergeEvent;
- (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerToReceiveCoreDataChanges:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)init;

@end


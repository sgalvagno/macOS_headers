//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/APSConnectionDelegate-Protocol.h>

@class APSConnection, IMMacNotificationCenterManager, NSData, NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface IDSPushHandler : NSObject <APSConnectionDelegate>
{
    APSConnection *_apsConnection;
    NSData *_cachedPushToken;
    Class _APSConnectionClass;
    NSMutableSet *_topicsCache;
    NSMapTable *_handlerMap;
    IMMacNotificationCenterManager *_ncHandler;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    BOOL _shouldWaitToSetTopics;
}

+ (id)sharedInstanceWithPortName:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) BOOL shouldWaitToSetTopics; // @synthesize shouldWaitToSetTopics=_shouldWaitToSetTopics;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
@property(readonly, nonatomic) BOOL isConnected;
@property(readonly, nonatomic) NSData *pushToken;
- (void)dealloc;
- (id)initWithPort:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


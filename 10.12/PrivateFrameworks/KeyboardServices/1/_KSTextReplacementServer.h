//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/APSConnectionDelegate-Protocol.h>
#import <KeyboardServices/NSXPCListenerDelegate-Protocol.h>
#import <KeyboardServices/_KSTextReplacementCancellation-Protocol.h>
#import <KeyboardServices/_KSTextReplacementStoreProtocol-Protocol.h>

@class APSConnection, NSString, NSXPCListener, _KSTRClient, _KSTextReplacementManager;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSTRClient *_daemonClient;
    BOOL _setupAssistanceRunning;
    _KSTextReplacementManager *_textReplacementManager;
    APSConnection *_pushConnection;
    NSXPCListener *_listener;
    NSString *_directoryPath;
}

+ (BOOL)isBlackListed:(unsigned int)arg1;
+ (id)textReplacementServer;
@property(nonatomic) BOOL setupAssistanceRunning; // @synthesize setupAssistanceRunning=_setupAssistanceRunning;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
- (void).cxx_destruct;
- (void)buddySetupDidFinish;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)registerForPushNotifications;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)runMigration;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntriesForClient:(id)arg1;
- (id)textReplacementEntries;
- (BOOL)_cancelPendingUpdateForClient:(id)arg1;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdates;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)shutdown;
- (void)start;
- (void)_performCleanup;
- (void)cleanup;
@property(retain, nonatomic) _KSTextReplacementManager *textReplacementManager; // @synthesize textReplacementManager=_textReplacementManager;
- (void)requestPeriodicSync;
- (void)scheduleSyncTask;
- (void)reachabilityDidChange:(id)arg1;
- (BOOL)isSetupAssistantRunning;
- (void)dealloc;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


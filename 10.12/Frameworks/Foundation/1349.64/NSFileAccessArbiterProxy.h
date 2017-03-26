//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileAccessClientLocalArbiterInterface-Protocol.h>
#import <Foundation/NSXPCConnectionDelegate-Protocol.h>
#import <Foundation/NSXPCListenerDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, NSXPCConnectionDelegate>
{
    NSXPCConnection *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_presenterMessengersByID;
    NSMutableSet *_providers;
    NSMapTable *_providerMessengersByID;
    NSMutableArray *_providerListeners;
}

+ (id)_fileReactorDebuggingInformation;
+ (id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2;
+ (void)_accessPresenterOperationRecordsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)_fetchProviderMessengerForListener:(id)arg1;
+ (void)_setProviderMessenger:(id)arg1 forListener:(id)arg2;
+ (id)_idForReactor:(id)arg1;
- (void)handleCanceledServer;
- (void)performBarrierAsync:(CDUnknownBlockType)arg1;
- (void)performBarrier;
- (void)getDebugInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)idForFileReactor:(id)arg1;
- (id)fileProviders;
- (id)_onqueue_fileProviders;
- (void)removeFileProvider:(id)arg1;
- (void)addFileProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)filePresenters;
- (id)_onqueue_filePresenters;
- (void)removeFilePresenter:(id)arg1;
- (void)addFilePresenter:(id)arg1;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)dealloc;
- (id)initWithServer:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


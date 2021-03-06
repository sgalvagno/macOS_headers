//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USSServerToClientProtocol.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface USSServicesClient : NSObject <USSServerToClientProtocol>
{
    NSXPCConnection *_conn;
    CDUnknownBlockType _sceneUpdateNotificationHandler;
    NSObject<OS_dispatch_queue> *_disconnectionQueue;
    BOOL _isNotSystemApp;
    NSXPCConnection *_connection;
    struct CGSize _defaultSceneSize;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL isNotSystemApp; // @synthesize isNotSystemApp=_isNotSystemApp;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) struct CGSize defaultSceneSize; // @synthesize defaultSceneSize=_defaultSceneSize;
- (void).cxx_destruct;
- (void)submitRemoteNotificationRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDisconnectionQueue:(id)arg1 disconnectionHandler:(CDUnknownBlockType)arg2;
- (id)initDaemonClientForCurrentUserWithName:(id)arg1;
- (BOOL)isConnected;
- (void)sceneCreatedWithIdentifier:(id)arg1 hostingContextID:(unsigned int)arg2;
- (unsigned int)hostingContextIDForSceneWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)unregisterNotificationHandler:(unsigned long long)arg1;
- (unsigned long long)registerForNotification:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)submitBackgroundLaunchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitUserNotificationResponseRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)submitActivityContinuationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitOpenURLRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)submitApplicationGracefulTerminationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitEnableApplicationAccessibilityRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitSceneActiveRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitSceneResizeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forgetPersistentScenesWithIdentifiers:(id)arg1;
- (void)createNewSceneOfSize:(struct CGSize)arg1 persistenceIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createNewSceneOfSize:(struct CGSize)arg1 background:(BOOL)arg2 persistenceIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)connectWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)connect;
- (void)waitForServerToBeReady;
- (id)_synchronousServerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_serverProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_init;
- (id)initWithInitialSceneSize:(struct CGSize)arg1;

@end


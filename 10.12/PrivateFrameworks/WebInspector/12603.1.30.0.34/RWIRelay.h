//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/_RWIClientToRelayMessageReceiver-Protocol.h>
#import <WebInspector/_RWIRelayClientConnectionDelegate-Protocol.h>
#import <WebInspector/_RWIRelayConnectionToApplicationDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_xpc_object, RWIRelayDelegate;

@interface RWIRelay : NSObject <_RWIRelayConnectionToApplicationDelegate, _RWIRelayClientConnectionDelegate, _RWIClientToRelayMessageReceiver>
{
    NSObject<OS_xpc_object> *_xpcApplicationListenConnection;
    NSMutableArray *_pendingClientConnections;
    NSMutableDictionary *_pendingProxyApplicationConnections;
    NSMutableArray *_automaticInspectionDebuggers;
    NSMutableDictionary *_automaticInspectionSessions;
    id <RWIRelayDelegate> _delegate;
    NSMutableDictionary *_applicationConnections;
    NSMutableDictionary *_clientConnections;
    NSMutableDictionary *_driverInterfaces;
}

@property(readonly, nonatomic) NSMutableDictionary *driverInterfaces; // @synthesize driverInterfaces=_driverInterfaces;
@property(readonly, nonatomic) NSMutableDictionary *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(readonly, nonatomic) NSMutableDictionary *applicationConnections; // @synthesize applicationConnections=_applicationConnections;
@property(nonatomic) id <RWIRelayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_receivedAutomaticInspectionCandidate:(id)arg1 connection:(id)arg2;
- (void)_receivedProxyApplicationSetupResponseMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedListingMessage:(id)arg1 connection:(id)arg2;
- (void)_receivedDataMessage:(id)arg1 connection:(id)arg2;
- (void)xpcConnection:(id)arg1 unhandledMessage:(id)arg2;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)xpcConnectionFailed:(id)arg1;
- (void)_driverDisconnected:(id)arg1;
- (void)_driverUpdated:(id)arg1;
- (void)_driverConnected:(id)arg1;
- (void)clientConnectionDidClose:(id)arg1;
- (void)_finalizePendingClientConnection:(id)arg1 withIdentifier:(id)arg2;
- (void)_addPendingClientConnection:(id)arg1;
- (void)_handleApplicationListenConnectionEvent:(id)arg1;
- (void)_disconnectApplicationConnect:(id)arg1;
- (void)_applicationDisconnected:(id)arg1;
- (void)_applicationConnected:(id)arg1;
- (void)_applicationUpdated:(id)arg1;
- (void)_proxyApplicationResponse:(id)arg1 userInfo:(id)arg2;
- (void)_proxyApplicationConnected:(id)arg1;
- (void)_rpc_forwardAutomationSessionRequest:(id)arg1;
- (void)_rpc_getConnectedDrivers:(id)arg1;
- (void)_rpc_reportDriverDisconnected:(id)arg1;
- (void)_rpc_reportDriverUpdated:(id)arg1;
- (void)_rpc_reportDriverConnected:(id)arg1;
- (void)_rpc_forwardDriverStateChangeRequest:(id)arg1;
- (void)_rpc_forwardAutomaticInspectionRejection:(id)arg1;
- (void)_rpc_forwardAutomaticInspectionConfiguration:(id)arg1;
- (void)_rpc_forwardSocketData:(id)arg1;
- (void)_rpc_forwardSocketSetup:(id)arg1;
- (void)_rpc_forwardDidClose:(id)arg1;
- (void)_rpc_forwardIndicateWebView:(id)arg1;
- (void)_rpc_forwardGetListing:(id)arg1;
- (void)_rpc_getConnectedApplications:(id)arg1;
- (void)_rpc_reportIdentifier:(id)arg1;
- (void)_setAutomaticInspectionGlobalState:(BOOL)arg1;
- (id)_allDriverDetails;
- (id)_allApplicationDetails;
- (void)updateApplication:(id)arg1;
- (void)addPendingClientConnection:(id)arg1;
- (void)shutdownIfDisabled;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallServicesClient-Protocol.h>
#import <TelephonyUtilities/TUCallServicesProtocol-Protocol.h>

@class NSArray, NSMapTable, NSString, NSXPCConnection, TUCallCenter, TUCallNotificationManager, TUCallServicesClientCapabilities;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, TUCallServicesDaemonDelegate;

@interface TUCallServicesInterface : NSObject <TUCallServicesClient, TUCallServicesProtocol>
{
    BOOL _hasDaemonDelegateLaunched;
    int _connectionRequestNotificationToken;
    NSArray *_currentCalls;
    id <TUCallServicesDaemonDelegate> _daemonDelegate;
    TUCallServicesClientCapabilities *_callServicesClientCapabilities;
    TUCallCenter *_callCenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    TUCallNotificationManager *_callNotificationManager;
    NSArray *_localProxyCalls;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL hasDaemonDelegateLaunched; // @synthesize hasDaemonDelegateLaunched=_hasDaemonDelegateLaunched;
@property(copy, nonatomic) NSArray *localProxyCalls; // @synthesize localProxyCalls=_localProxyCalls;
@property(retain, nonatomic) TUCallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property(retain, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall; // @synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *initialStateSemaphore; // @synthesize initialStateSemaphore=_initialStateSemaphore;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) int connectionRequestNotificationToken; // @synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) TUCallServicesClientCapabilities *callServicesClientCapabilities; // @synthesize callServicesClientCapabilities=_callServicesClientCapabilities;
@property(nonatomic) __weak id <TUCallServicesDaemonDelegate> daemonDelegate; // @synthesize daemonDelegate=_daemonDelegate;
- (void).cxx_destruct;
- (void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)resetCallProvisionalStates;
- (void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2;
- (void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2;
- (void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
- (void)setClientCapabilities:(id)arg1;
- (void)setCurrentOutputDeviceToDeviceWithUID:(id)arg1;
- (void)setCurrentInputDeviceToDeviceWithUID:(id)arg1;
- (void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (void)sendMMIOrUSSDCodeWithRequest:(id)arg1;
- (void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;
- (void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
- (void)updateCallWithProxy:(id)arg1;
- (void)sendTelephonyDigits:(id)arg1;
- (void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pushHostedCallsToPairedClientDevice;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (void)pullRelayingCallsFromClient;
- (void)disconnectAllCalls;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
- (void)swapCalls;
- (void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;
- (void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;
- (void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
- (void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
- (void)holdCallWithUniqueProxyIdentifier:(id)arg1;
- (void)answerCallWithRequest:(id)arg1;
- (id)dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_proxyCallWithUniqueProxyIdentifier:(id)arg1;
- (id)_proxyCallWithCall:(id)arg1;
- (void)_updateLocalProxyCallsWithCalls:(id)arg1;
- (void)_updateCurrentCallsWithoutNotifications:(id)arg1;
@property(copy, nonatomic) NSArray *currentCalls; // @synthesize currentCalls=_currentCalls;
- (void)requestCurrentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerCall:(id)arg1;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1 andWait:(BOOL)arg2;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) void *queueContext;
- (void)_tearDownXPCConnectionAndReconnectIfNecessary;
- (void)_tearDownXPCConnection;
- (void)_setUpXPCConnection;
- (id)synchronousDaemonDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemonDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL daemonDelegateIsLocal;
- (void)tearDownXPCConnection;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithQueue:(id)arg1 callCenter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


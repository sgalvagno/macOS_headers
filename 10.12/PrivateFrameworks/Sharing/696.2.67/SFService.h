//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSString, NSUUID, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface>
{
    BOOL _activateCalled;
    BOOL _activateInProgress;
    BOOL _activateCompleted;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct NSMutableDictionary *_requestQueue;
    struct NSMutableDictionary *_sessions;
    NSXPCConnection *_xpcCnx;
    unsigned char _deviceActionType;
    BOOL _needsSetup;
    BOOL _hasProblem;
    BOOL _needsKeyboard;
    BOOL _supportsAirPlayReceiver;
    BOOL _wakeDevice;
    BOOL _autoUnlockEnabled;
    BOOL _autoUnlockWatch;
    unsigned char _serviceType;
    BOOL _watchLocked;
    long long _advertiseRate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _receivedObjectHandler;
    CDUnknownBlockType _sessionStartedHandler;
    CDUnknownBlockType _sessionEndedHandler;
    CDUnknownBlockType _sessionSecuredHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _eventMessageHandler;
    CDUnknownBlockType _requestMessageHandler;
    CDUnknownBlockType _peerDisconnectedHandler;
    CDUnknownBlockType _receivedFramePeerHandler;
    CDUnknownBlockType _receivedFrameSessionHandler;
    CDUnknownBlockType _responseMessageInternalHandler;
    NSUUID *_serviceUUID;
    NSXPCListenerEndpoint *_testListenerEndpoint;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL watchLocked; // @synthesize watchLocked=_watchLocked;
@property(retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(copy, nonatomic) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) unsigned char serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType responseMessageInternalHandler; // @synthesize responseMessageInternalHandler=_responseMessageInternalHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedFrameSessionHandler; // @synthesize receivedFrameSessionHandler=_receivedFrameSessionHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedFramePeerHandler; // @synthesize receivedFramePeerHandler=_receivedFramePeerHandler;
@property(copy, nonatomic) CDUnknownBlockType peerDisconnectedHandler; // @synthesize peerDisconnectedHandler=_peerDisconnectedHandler;
@property(nonatomic) BOOL autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) BOOL autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property(nonatomic) BOOL wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property(nonatomic) BOOL supportsAirPlayReceiver; // @synthesize supportsAirPlayReceiver=_supportsAirPlayReceiver;
@property(copy, nonatomic) CDUnknownBlockType requestMessageHandler; // @synthesize requestMessageHandler=_requestMessageHandler;
@property(nonatomic) BOOL needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(nonatomic) BOOL hasProblem; // @synthesize hasProblem=_hasProblem;
@property(copy, nonatomic) CDUnknownBlockType eventMessageHandler; // @synthesize eventMessageHandler=_eventMessageHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionSecuredHandler; // @synthesize sessionSecuredHandler=_sessionSecuredHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionStartedHandler; // @synthesize sessionStartedHandler=_sessionStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedObjectHandler; // @synthesize receivedObjectHandler=_receivedObjectHandler;
@property(copy, nonatomic) CDUnknownBlockType hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandler; // @synthesize showPINHandler=_showPINHandler;
@property(nonatomic) BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
- (void).cxx_destruct;
- (void)serviceReceivedResponse:(id)arg1;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;
- (void)serviceReceivedEvent:(id)arg1;
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;
- (void)serviceError:(id)arg1;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3;
- (void)sendToPeer:(id)arg1 flags:(unsigned int)arg2 object:(id)arg3;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)_performActivateSafeChange:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithService:(id)arg1;
- (void)clearEncryptionInfoForPeer:(id)arg1;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5;
- (id)description;
- (void)_cleanup;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


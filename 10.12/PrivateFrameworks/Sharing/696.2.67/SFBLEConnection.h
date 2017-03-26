//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/WPNearbyDelegate-Protocol.h>

@class CURetrier, NSMutableSet, NSString, SFBLEData, SFBLEDevice, WPNearby;
@protocol OS_dispatch_queue;

@interface SFBLEConnection : NSObject <WPNearbyDelegate>
{
    BOOL _acceptor;
    BOOL _activateCalled;
    NSMutableSet *_clients;
    BOOL _connected;
    BOOL _connecting;
    double _connectStartTime;
    CURetrier *_connectRetrier;
    SFBLEData *_currentData;
    struct NSMutableArray *_dataSendQueue;
    BOOL _invalidateCalled;
    WPNearby *_wpNearby;
    struct LogCategory *_ucat;
    CDUnknownBlockType _bluetoothBandwidthChangedHandler;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionStateChangedHandler;
    CDUnknownBlockType _dataHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    SFBLEDevice *_peerDevice;
}

@property(retain, nonatomic) SFBLEDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler; // @synthesize connectionStateChangedHandler=_connectionStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothBandwidthChangedHandler; // @synthesize bluetoothBandwidthChangedHandler=_bluetoothBandwidthChangedHandler;
@property(nonatomic) BOOL acceptor; // @synthesize acceptor=_acceptor;
- (void).cxx_destruct;
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)arg1;
- (BOOL)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_cleanupQueuedData:(int)arg1;
- (void)_processQueuedData;
- (void)_connectIfNeeded;
- (void)sendDataDirect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activateDirect;
- (void)activate;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 acceptor:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


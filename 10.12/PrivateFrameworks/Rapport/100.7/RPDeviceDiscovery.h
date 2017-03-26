//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class CUWiFiScanner, NSData, NSMutableDictionary, NSSet, NSString, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface RPDeviceDiscovery : NSObject <NSSecureCoding>
{
    BOOL _activateCalled;
    BOOL _activateInProgress;
    BOOL _activateCompleted;
    NSData *_blePayloadFilterData;
    NSData *_blePayloadFilterMask;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFDeviceDiscovery *_bleDiscovery;
    struct BonjourBrowser *_bonjourBrowser;
    BOOL _wifiAirPlayWAC;
    CUWiFiScanner *_wifiScanner;
    BOOL _scanCache;
    BOOL _targetUserSession;
    unsigned int _changeFlags;
    int _rssiThreshold;
    unsigned int _scanRate;
    unsigned int _scanState;
    unsigned int _wifiScanFlags;
    NSSet *_deviceFilter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_serviceType;
    double _timeout;
    NSString *_wifiSSID;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _scanStateChangedHandler;
    CDUnknownBlockType _timeoutHandler;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(copy, nonatomic) CDUnknownBlockType scanStateChangedHandler; // @synthesize scanStateChangedHandler=_scanStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSString *wifiSSID; // @synthesize wifiSSID=_wifiSSID;
@property(nonatomic) unsigned int wifiScanFlags; // @synthesize wifiScanFlags=_wifiScanFlags;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) BOOL targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) unsigned int scanState; // @synthesize scanState=_scanState;
@property(nonatomic) unsigned int scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) BOOL scanCache; // @synthesize scanCache=_scanCache;
@property(nonatomic) int rssiThreshold; // @synthesize rssiThreshold=_rssiThreshold;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSSet *deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void).cxx_destruct;
- (void)_wifiHandleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_wifiHandleDeviceLost:(id)arg1;
- (void)_wifiHandleDeviceFound:(id)arg1;
- (int)_wifiStart;
- (void)_bonjourHandleRemoveDevice:(id)arg1;
- (void)_bonjourHandleAddOrUpdateDevice:(id)arg1;
- (void)_bonjourHandleEventType:(unsigned int)arg1 info:(id)arg2;
- (int)_bonjourStart;
- (void)_bleHandleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_bleHandleDeviceLost:(id)arg1;
- (void)_bleHandleDeviceFound:(id)arg1;
- (int)_bleStart;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBLEPayloadFilterData:(id)arg1 mask:(id)arg2;
- (id)description;
- (void)_cleanup;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


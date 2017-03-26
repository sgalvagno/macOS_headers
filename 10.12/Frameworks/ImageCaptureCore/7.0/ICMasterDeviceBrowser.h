//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCommandCenter, NSMutableArray, NSMutableDictionary;

@interface ICMasterDeviceBrowser : NSObject
{
    ICCommandCenter *_commandCenter;
    NSMutableDictionary *_devices;
    NSMutableArray *_browsers;
    long long _numberOfBrowsingBrowsers;
    long long _numberOfBrowsersOfSharedDevice;
    long long _numberOfBrowsersOfBonjourDevice;
    BOOL _processDevicesInvokedOnce;
}

+ (id)defaultBrowser;
@property(readonly) NSMutableArray *browsers; // @synthesize browsers=_browsers;
- (BOOL)sendMessageCmd:(id)arg1;
- (id)getConnection;
- (void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2;
- (id)deviceWithDelegate:(id)arg1;
- (id)devicesMatchingDeviceTypeMask:(unsigned long long)arg1;
- (id)deviceWithDeviceRef:(id)arg1;
- (void)processDevices:(id)arg1;
- (void)updateDevices:(id)arg1 type:(unsigned long long)arg2;
- (void)removeDevice:(id)arg1;
- (void)updateDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)unregisterForImageCaptureEventNotifications:(id)arg1 reason:(id)arg2;
- (void)registerForImageCaptureEventNotifications:(id)arg1 reason:(id)arg2;
- (void)handleNetworkDeviceRemoved:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)icddConnectionResume:(id)arg1;
- (void)icddConnectionSuspend:(id)arg1;
- (void)handleCommandCompletion:(id)arg1;
@property(readonly) NSMutableDictionary *devices; // @synthesize devices=_devices;
- (void)stop:(id)arg1;
- (void)start:(id)arg1;
- (void)helloICDD;
- (void)stopBrowsingForBonjourDevices;
- (void)startBrowsingForBonjourDevices;
- (void)stopBrowsingForSharedDevices;
- (void)startBrowsingForSharedDevices;
- (void)removeBrowser:(id)arg1;
- (void)addBrowser:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end


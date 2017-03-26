//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ICADevices/Device.h>

@class NSMutableDictionary, NSString;

@interface BluetoothDevice : Device
{
    NSString *_bluetoothAddress;
    NSMutableDictionary *_params;
}

@property(readonly) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
- (void)updateDeviceDictionary:(id)arg1;
- (short)openDevice;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

@end


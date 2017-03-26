//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ICADevices/Device.h>

@class NSString;

@interface TWAINDevice : Device
{
    unsigned int _locationID;
    unsigned long long _guid;
    unsigned short _usbVendorID;
    unsigned short _usbProductID;
    NSString *_usbSerialNumberString;
    NSString *_twainPath;
}

@property(readonly) NSString *twainPath; // @synthesize twainPath=_twainPath;
- (short)disconnect;
- (void)unregisterDevice;
- (void)registerDevice;
- (void)updateDeviceDictionary:(id)arg1;
- (short)openDevice;
- (id)initWithLocationID:(unsigned int *)arg1 guid:(unsigned long long *)arg2 twainPath:(char [512])arg3;

@end


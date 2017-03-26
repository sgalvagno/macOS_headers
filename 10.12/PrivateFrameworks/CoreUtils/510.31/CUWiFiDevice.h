//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CUWiFiDevice : NSObject
{
    unsigned int _deviceIEFlags;
    int _rssi;
    int _present;
    NSData *_bssid;
    NSData *_deviceIEDeviceID;
    NSString *_deviceIEName;
    NSUUID *_identifier;
    NSData *_ieData;
    id _platformObject;
    NSDictionary *_rawScanResult;
    NSString *_ssid;
}

@property(nonatomic) int present; // @synthesize present=_present;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSDictionary *rawScanResult; // @synthesize rawScanResult=_rawScanResult;
@property(retain, nonatomic) id platformObject; // @synthesize platformObject=_platformObject;
@property(copy, nonatomic) NSData *ieData; // @synthesize ieData=_ieData;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *deviceIEName; // @synthesize deviceIEName=_deviceIEName;
@property(nonatomic) unsigned int deviceIEFlags; // @synthesize deviceIEFlags=_deviceIEFlags;
@property(copy, nonatomic) NSData *deviceIEDeviceID; // @synthesize deviceIEDeviceID=_deviceIEDeviceID;
@property(copy, nonatomic) NSData *bssid; // @synthesize bssid=_bssid;
- (void).cxx_destruct;
- (id)description;

@end


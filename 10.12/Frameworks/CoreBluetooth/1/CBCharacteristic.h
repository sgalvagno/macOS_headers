//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral, CBService, CBUUID, NSArray, NSData, NSNumber;

@interface CBCharacteristic : NSObject
{
    CBService *_service;
    CBUUID *_UUID;
    long long _properties;
    NSData *_value;
    NSArray *_descriptors;
    BOOL _isBroadcasted;
    BOOL _isNotifying;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
    NSNumber *_valueHandle;
}

@property(readonly, nonatomic) NSNumber *valueHandle; // @synthesize valueHandle=_valueHandle;
@property(readonly, nonatomic) NSNumber *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property BOOL isNotifying; // @synthesize isNotifying=_isNotifying;
@property(readonly) BOOL isBroadcasted; // @synthesize isBroadcasted=_isBroadcasted;
@property(retain) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(retain) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) CBUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) CBService *service; // @synthesize service=_service;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;

@end


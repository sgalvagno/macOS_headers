//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying>
{
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    BOOL _deviceInVehicle;
    struct {
        unsigned int has_deviceBatteryState:1;
        unsigned int has_deviceInterfaceOrientation:1;
        unsigned int has_deviceInVehicle:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDeviceInVehicle;
@property(nonatomic) BOOL deviceInVehicle;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation;

@end


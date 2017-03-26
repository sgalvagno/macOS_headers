//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying>
{
    NSString *_deviceHwIdentifier;
    NSString *_deviceOsVersion;
}

@property(retain, nonatomic) NSString *deviceHwIdentifier; // @synthesize deviceHwIdentifier=_deviceHwIdentifier;
@property(retain, nonatomic) NSString *deviceOsVersion; // @synthesize deviceOsVersion=_deviceOsVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDeviceHwIdentifier;
@property(readonly, nonatomic) BOOL hasDeviceOsVersion;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying>
{
    NSString *_addressID;
    GEOLocation *_addressLocation;
}

@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(retain, nonatomic) GEOLocation *addressLocation; // @synthesize addressLocation=_addressLocation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAddressID;
@property(readonly, nonatomic) BOOL hasAddressLocation;
- (void)dealloc;

@end


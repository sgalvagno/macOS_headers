//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_locations;
    int _placeTypeLimit;
    BOOL _preserveOriginalLocation;
    struct {
        unsigned int placeTypeLimit:1;
        unsigned int preserveOriginalLocation:1;
    } _has;
}

+ (Class)locationType;
@property(nonatomic) BOOL preserveOriginalLocation; // @synthesize preserveOriginalLocation=_preserveOriginalLocation;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPreserveOriginalLocation;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (id)placeTypeLimitAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceTypeLimit;
@property(nonatomic) int placeTypeLimit; // @synthesize placeTypeLimit=_placeTypeLimit;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
- (void)dealloc;

@end


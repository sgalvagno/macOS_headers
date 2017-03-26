//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDBounds;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying>
{
    CDStruct_95bda58d _mappedCategorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
}

+ (id)spatialLookupResultForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMappedCategorys:(id)arg1;
- (id)mappedCategorysAsString:(int)arg1;
- (void)setMappedCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)mappedCategoryAtIndex:(unsigned long long)arg1;
- (void)addMappedCategory:(int)arg1;
- (void)clearMappedCategorys;
@property(readonly, nonatomic) int *mappedCategorys;
@property(readonly, nonatomic) unsigned long long mappedCategorysCount;
@property(readonly, nonatomic) BOOL hasBounds;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)dealloc;

@end


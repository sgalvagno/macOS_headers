//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _clusteredRouteRideSelections;
    unsigned int _clientSuggestedRoutesIndex;
    unsigned int _directionsResponseIndex;
    unsigned int _directionsResponseSuggestedRoutesIndex;
    int _origin;
    struct {
        unsigned int clientSuggestedRoutesIndex:1;
        unsigned int directionsResponseIndex:1;
        unsigned int directionsResponseSuggestedRoutesIndex:1;
        unsigned int origin:1;
    } _has;
}

@property(nonatomic) unsigned int clientSuggestedRoutesIndex; // @synthesize clientSuggestedRoutesIndex=_clientSuggestedRoutesIndex;
@property(nonatomic) unsigned int directionsResponseSuggestedRoutesIndex; // @synthesize directionsResponseSuggestedRoutesIndex=_directionsResponseSuggestedRoutesIndex;
@property(nonatomic) unsigned int directionsResponseIndex; // @synthesize directionsResponseIndex=_directionsResponseIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setClusteredRouteRideSelections:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1;
- (void)addClusteredRouteRideSelections:(unsigned int)arg1;
- (void)clearClusteredRouteRideSelections;
@property(readonly, nonatomic) unsigned int *clusteredRouteRideSelections;
@property(readonly, nonatomic) unsigned long long clusteredRouteRideSelectionsCount;
@property(nonatomic) BOOL hasClientSuggestedRoutesIndex;
@property(nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex;
@property(nonatomic) BOOL hasDirectionsResponseIndex;
- (int)StringAsOrigin:(id)arg1;
- (id)originAsString:(int)arg1;
@property(nonatomic) BOOL hasOrigin;
@property(nonatomic) int origin; // @synthesize origin=_origin;
- (void)dealloc;

@end


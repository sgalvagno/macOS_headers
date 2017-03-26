//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODirectionsResponse, GEOETAResponse;

@interface GEORouteHypothesisResponse : PBCodable <NSCopying>
{
    double _updatedTimeStamp;
    GEODirectionsResponse *_directionsResponse;
    GEOETAResponse *_etaResponse;
    struct {
        unsigned int updatedTimeStamp:1;
    } _has;
}

@property(nonatomic) double updatedTimeStamp; // @synthesize updatedTimeStamp=_updatedTimeStamp;
@property(retain, nonatomic) GEOETAResponse *etaResponse; // @synthesize etaResponse=_etaResponse;
@property(retain, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasUpdatedTimeStamp;
@property(readonly, nonatomic) BOOL hasEtaResponse;
@property(readonly, nonatomic) BOOL hasDirectionsResponse;
- (void)dealloc;

@end


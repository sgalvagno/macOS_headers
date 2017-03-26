//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapMatchRequest : PBRequest <NSCopying>
{
    double _searchThreshold;
    NSMutableArray *_locations;
    NSMutableArray *_waypoints;
    struct {
        unsigned int searchThreshold:1;
    } _has;
}

+ (Class)locationType;
+ (Class)waypointType;
@property(nonatomic) double searchThreshold; // @synthesize searchThreshold=_searchThreshold;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSMutableArray *waypoints; // @synthesize waypoints=_waypoints;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSearchThreshold;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
- (id)waypointAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)addWaypoint:(id)arg1;
- (void)clearWaypoints;
- (void)dealloc;

@end


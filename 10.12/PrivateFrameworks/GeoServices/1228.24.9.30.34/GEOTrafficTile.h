//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTrafficTile : PBCodable <NSCopying>
{
    NSMutableArray *_trafficIncidents;
    NSMutableArray *_trafficSegments;
    NSData *_vertices;
}

+ (Class)trafficIncidentType;
+ (Class)trafficSegmentType;
@property(retain, nonatomic) NSMutableArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(retain, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property(retain, nonatomic) NSData *vertices; // @synthesize vertices=_vertices;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)trafficIncidentAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficIncidentsCount;
- (void)addTrafficIncident:(id)arg1;
- (void)clearTrafficIncidents;
- (id)trafficSegmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficSegmentsCount;
- (void)addTrafficSegment:(id)arg1;
- (void)clearTrafficSegments;
@property(readonly, nonatomic) BOOL hasVertices;
- (void)dealloc;
- (CDStruct_912cb5d2 *)createUnpackedVerticesWithGutterSize:(long long)arg1;

@end


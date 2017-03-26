//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOVConnectivity, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVTile : PBCodable <NSCopying>
{
    NSMutableArray *_coastlines;
    GEOVConnectivity *_connectivity;
    NSMutableArray *_labelLanguages;
    NSData *_labels;
    NSMutableArray *_lines;
    int _minZ;
    NSMutableArray *_points;
    NSMutableArray *_polygons;
    unsigned int _sectionDeltaLengthBits;
    unsigned int _vertexBits;
    NSData *_vertices;
    int _zBits;
    struct {
        unsigned int minZ:1;
        unsigned int sectionDeltaLengthBits:1;
        unsigned int vertexBits:1;
        unsigned int zBits:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *labelLanguages; // @synthesize labelLanguages=_labelLanguages;
@property(retain, nonatomic) NSMutableArray *coastlines; // @synthesize coastlines=_coastlines;
@property(nonatomic) int zBits; // @synthesize zBits=_zBits;
@property(nonatomic) int minZ; // @synthesize minZ=_minZ;
@property(retain, nonatomic) GEOVConnectivity *connectivity; // @synthesize connectivity=_connectivity;
@property(retain, nonatomic) NSData *vertices; // @synthesize vertices=_vertices;
@property(retain, nonatomic) NSData *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain, nonatomic) NSMutableArray *polygons; // @synthesize polygons=_polygons;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSectionDeltaLengthBits;
@property(nonatomic) unsigned int sectionDeltaLengthBits; // @synthesize sectionDeltaLengthBits=_sectionDeltaLengthBits;
@property(nonatomic) BOOL hasVertexBits;
@property(nonatomic) unsigned int vertexBits; // @synthesize vertexBits=_vertexBits;
- (id)labelLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelLanguagesCount;
- (void)addLabelLanguage:(id)arg1;
- (void)clearLabelLanguages;
- (id)coastlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coastlinesCount;
- (void)addCoastlines:(id)arg1;
- (void)clearCoastlines;
@property(nonatomic) BOOL hasZBits;
@property(nonatomic) BOOL hasMinZ;
@property(readonly, nonatomic) BOOL hasConnectivity;
@property(readonly, nonatomic) BOOL hasVertices;
@property(readonly, nonatomic) BOOL hasLabels;
- (id)pointAtIndex:(unsigned long long)arg1;
- (unsigned long long)pointsCount;
- (void)addPoint:(id)arg1;
- (void)clearPoints;
- (id)polygonAtIndex:(unsigned long long)arg1;
- (unsigned long long)polygonsCount;
- (void)addPolygon:(id)arg1;
- (void)clearPolygons;
- (id)lineAtIndex:(unsigned long long)arg1;
- (unsigned long long)linesCount;
- (void)addLine:(id)arg1;
- (void)clearLines;
- (void)dealloc;

@end


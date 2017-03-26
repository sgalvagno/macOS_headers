//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOTileGroup : PBCodable <NSCopying>
{
    struct GEOTileSetRegion *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    CDStruct_9f2792e4 _attributionIndexs;
    CDStruct_9f2792e4 _fontIndexs;
    CDStruct_9f2792e4 _iconIndexs;
    struct GEORegionalResourceIndex *_regionalResourceIndexs;
    unsigned long long _regionalResourceIndexsCount;
    unsigned long long _regionalResourceIndexsSpace;
    CDStruct_9f2792e4 _resourceIndexs;
    CDStruct_9f2792e4 _styleSheetIndexs;
    CDStruct_9f2792e4 _textureIndexs;
    CDStruct_9f2792e4 _xmlIndexs;
    struct GEOVersionedTileSet *_tileSets;
    unsigned long long _tileSetsCount;
    unsigned long long _tileSetsSpace;
    unsigned int _identifier;
}

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setResourceIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)resourceIndexAtIndex:(unsigned long long)arg1;
- (void)addResourceIndex:(unsigned int)arg1;
- (void)clearResourceIndexs;
@property(readonly, nonatomic) unsigned int *resourceIndexs;
@property(readonly, nonatomic) unsigned long long resourceIndexsCount;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
- (void)clearHybridUnavailableRegions;
@property(readonly, nonatomic) struct GEOTileSetRegion *hybridUnavailableRegions;
@property(readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
- (void)setAttributionIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)attributionIndexAtIndex:(unsigned long long)arg1;
- (void)addAttributionIndex:(unsigned int)arg1;
- (void)clearAttributionIndexs;
@property(readonly, nonatomic) unsigned int *attributionIndexs;
@property(readonly, nonatomic) unsigned long long attributionIndexsCount;
- (void)setXmlIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)xmlIndexAtIndex:(unsigned long long)arg1;
- (void)addXmlIndex:(unsigned int)arg1;
- (void)clearXmlIndexs;
@property(readonly, nonatomic) unsigned int *xmlIndexs;
@property(readonly, nonatomic) unsigned long long xmlIndexsCount;
- (void)setRegionalResourceIndexs:(struct GEORegionalResourceIndex *)arg1 count:(unsigned long long)arg2;
- (struct GEORegionalResourceIndex)regionalResourceIndexAtIndex:(unsigned long long)arg1;
- (void)addRegionalResourceIndex:(struct GEORegionalResourceIndex)arg1;
- (void)clearRegionalResourceIndexs;
@property(readonly, nonatomic) struct GEORegionalResourceIndex *regionalResourceIndexs;
@property(readonly, nonatomic) unsigned long long regionalResourceIndexsCount;
- (void)setIconIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)iconIndexAtIndex:(unsigned long long)arg1;
- (void)addIconIndex:(unsigned int)arg1;
- (void)clearIconIndexs;
@property(readonly, nonatomic) unsigned int *iconIndexs;
@property(readonly, nonatomic) unsigned long long iconIndexsCount;
- (void)setFontIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)fontIndexAtIndex:(unsigned long long)arg1;
- (void)addFontIndex:(unsigned int)arg1;
- (void)clearFontIndexs;
@property(readonly, nonatomic) unsigned int *fontIndexs;
@property(readonly, nonatomic) unsigned long long fontIndexsCount;
- (void)setTextureIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)textureIndexAtIndex:(unsigned long long)arg1;
- (void)addTextureIndex:(unsigned int)arg1;
- (void)clearTextureIndexs;
@property(readonly, nonatomic) unsigned int *textureIndexs;
@property(readonly, nonatomic) unsigned long long textureIndexsCount;
- (void)setStyleSheetIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)styleSheetIndexAtIndex:(unsigned long long)arg1;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (void)clearStyleSheetIndexs;
@property(readonly, nonatomic) unsigned int *styleSheetIndexs;
@property(readonly, nonatomic) unsigned long long styleSheetIndexsCount;
- (void)setTileSets:(struct GEOVersionedTileSet *)arg1 count:(unsigned long long)arg2;
- (struct GEOVersionedTileSet)tileSetAtIndex:(unsigned long long)arg1;
- (void)addTileSet:(struct GEOVersionedTileSet)arg1;
- (void)clearTileSets;
@property(readonly, nonatomic) struct GEOVersionedTileSet *tileSets;
@property(readonly, nonatomic) unsigned long long tileSetsCount;
- (void)dealloc;

@end


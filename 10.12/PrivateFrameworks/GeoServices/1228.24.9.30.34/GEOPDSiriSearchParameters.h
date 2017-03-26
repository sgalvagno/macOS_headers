//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPDIndexQueryNode, GEOPDRecentRouteInfo, GEOPDViewportInfo, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOAddress *_address;
    NSMutableArray *_businessCategoryFilters;
    GEOPDIndexQueryNode *_indexFilter;
    unsigned int _maxResultCount;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSString *_searchString;
    NSMutableArray *_searchSubstringDescriptors;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    struct {
        unsigned int maxResultCount:1;
        unsigned int sortOrder:1;
        unsigned int isStrictMapRegion:1;
        unsigned int structuredSearch:1;
    } _has;
}

+ (Class)searchSubstringDescriptorType;
+ (Class)businessCategoryFilterType;
@property(retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo; // @synthesize recentRouteInfo=_recentRouteInfo;
@property(retain, nonatomic) GEOPDIndexQueryNode *indexFilter; // @synthesize indexFilter=_indexFilter;
@property(retain, nonatomic) NSMutableArray *searchSubstringDescriptors; // @synthesize searchSubstringDescriptors=_searchSubstringDescriptors;
@property(nonatomic) BOOL structuredSearch; // @synthesize structuredSearch=_structuredSearch;
@property(nonatomic) BOOL isStrictMapRegion; // @synthesize isStrictMapRegion=_isStrictMapRegion;
@property(retain, nonatomic) NSMutableArray *businessCategoryFilters; // @synthesize businessCategoryFilters=_businessCategoryFilters;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
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
@property(readonly, nonatomic) BOOL hasRecentRouteInfo;
@property(readonly, nonatomic) BOOL hasIndexFilter;
- (id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchSubstringDescriptorsCount;
- (void)addSearchSubstringDescriptor:(id)arg1;
- (void)clearSearchSubstringDescriptors;
@property(nonatomic) BOOL hasStructuredSearch;
@property(nonatomic) BOOL hasIsStrictMapRegion;
- (id)businessCategoryFilterAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessCategoryFiltersCount;
- (void)addBusinessCategoryFilter:(id)arg1;
- (void)clearBusinessCategoryFilters;
@property(readonly, nonatomic) BOOL hasAddress;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(readonly, nonatomic) BOOL hasSearchString;
@property(nonatomic) BOOL hasMaxResultCount;
@property(nonatomic) unsigned int maxResultCount; // @synthesize maxResultCount=_maxResultCount;
- (int)StringAsSortOrder:(id)arg1;
- (id)sortOrderAsString:(int)arg1;
@property(nonatomic) BOOL hasSortOrder;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
- (void)dealloc;

@end


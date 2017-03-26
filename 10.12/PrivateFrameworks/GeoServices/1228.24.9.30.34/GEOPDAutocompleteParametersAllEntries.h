//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSString, PBUnknownFields;

@interface GEOPDAutocompleteParametersAllEntries : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _highlightDiff;
    CDStruct_00ef3c1e _has;
}

@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
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
@property(nonatomic) BOOL hasHighlightDiff;
@property(nonatomic) BOOL highlightDiff; // @synthesize highlightDiff=_highlightDiff;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)dealloc;

@end


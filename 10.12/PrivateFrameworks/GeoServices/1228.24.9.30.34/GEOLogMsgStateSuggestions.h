//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying>
{
    int _acSequenceNumber;
    NSMutableArray *_displayedResults;
    int _searchFieldType;
    NSString *_searchString;
    int _selectedIndex;
    struct {
        unsigned int acSequenceNumber:1;
        unsigned int searchFieldType:1;
        unsigned int selectedIndex:1;
    } _has;
}

+ (Class)displayedResultType;
@property(nonatomic) int acSequenceNumber; // @synthesize acSequenceNumber=_acSequenceNumber;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *displayedResults; // @synthesize displayedResults=_displayedResults;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAcSequenceNumber;
- (int)StringAsSearchFieldType:(id)arg1;
- (id)searchFieldTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchFieldType;
@property(nonatomic) int searchFieldType; // @synthesize searchFieldType=_searchFieldType;
@property(nonatomic) BOOL hasSelectedIndex;
- (id)displayedResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayedResultsCount;
- (void)addDisplayedResult:(id)arg1;
- (void)clearDisplayedResults;
@property(readonly, nonatomic) BOOL hasSearchString;
- (void)dealloc;

@end


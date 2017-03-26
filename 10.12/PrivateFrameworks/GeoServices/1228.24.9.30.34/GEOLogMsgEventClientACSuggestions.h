//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSString *_query;
    NSMutableArray *_queryTokens;
    int _selectedIndex;
    struct {
        unsigned int selectedIndex:1;
    } _has;
}

+ (Class)entriesType;
+ (Class)queryTokensType;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) NSMutableArray *queryTokens; // @synthesize queryTokens=_queryTokens;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSelectedIndex;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (id)queryTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryTokensCount;
- (void)addQueryTokens:(id)arg1;
- (void)clearQueryTokens;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)dealloc;

@end


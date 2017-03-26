//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying>
{
    NSMutableArray *_proactiveItems;
    int _tappedItemIndex;
    BOOL _everExpanded;
    BOOL _initiallyExpanded;
    struct {
        unsigned int tappedItemIndex:1;
        unsigned int everExpanded:1;
        unsigned int initiallyExpanded:1;
    } _has;
}

+ (Class)proactiveItemType;
@property(nonatomic) BOOL everExpanded; // @synthesize everExpanded=_everExpanded;
@property(nonatomic) BOOL initiallyExpanded; // @synthesize initiallyExpanded=_initiallyExpanded;
@property(retain, nonatomic) NSMutableArray *proactiveItems; // @synthesize proactiveItems=_proactiveItems;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTappedItemIndex;
@property(nonatomic) int tappedItemIndex; // @synthesize tappedItemIndex=_tappedItemIndex;
@property(nonatomic) BOOL hasEverExpanded;
@property(nonatomic) BOOL hasInitiallyExpanded;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)proactiveItemsCount;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)dealloc;

@end


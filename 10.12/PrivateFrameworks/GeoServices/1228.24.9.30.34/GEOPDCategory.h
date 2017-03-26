//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying>
{
    int _level;
    NSMutableArray *_localizedNames;
    struct {
        unsigned int level:1;
    } _has;
}

+ (Class)localizedNameType;
+ (BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(nonatomic) int level; // @synthesize level=_level;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)addLocalizedName:(id)arg1;
- (void)clearLocalizedNames;
@property(nonatomic) BOOL hasLevel;
- (void)dealloc;

@end


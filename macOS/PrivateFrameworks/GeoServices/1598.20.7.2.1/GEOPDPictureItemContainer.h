//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItemContainer : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_pictureItems;
    BOOL _allowFullScreenPhoto;
    struct {
        unsigned int has_allowFullScreenPhoto:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)pictureItemType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAllowFullScreenPhoto;
@property(nonatomic) BOOL allowFullScreenPhoto;
- (id)pictureItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)pictureItemsCount;
- (void)addPictureItem:(id)arg1;
- (void)clearPictureItems;
@property(retain, nonatomic) NSMutableArray *pictureItems;

@end


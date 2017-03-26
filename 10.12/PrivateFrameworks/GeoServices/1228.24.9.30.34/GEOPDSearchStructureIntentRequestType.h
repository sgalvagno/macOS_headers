//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDSearchStructureIntentRequestType : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _intentType;
    int _structureType;
    struct {
        unsigned int intentType:1;
        unsigned int structureType:1;
    } _has;
}

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
- (int)StringAsIntentType:(id)arg1;
- (id)intentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasIntentType;
@property(nonatomic) int intentType; // @synthesize intentType=_intentType;
- (int)StringAsStructureType:(id)arg1;
- (id)structureTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasStructureType;
@property(nonatomic) int structureType; // @synthesize structureType=_structureType;
- (void)dealloc;

@end


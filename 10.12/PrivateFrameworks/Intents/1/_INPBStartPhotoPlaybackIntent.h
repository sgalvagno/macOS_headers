//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContactList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBString, _INPBStringList;

@interface _INPBStartPhotoPlaybackIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _excludedAttributes;
    CDStruct_95bda58d _includedAttributes;
    _INPBString *_albumName;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBLocation *_locationCreated;
    _INPBContactList *_peopleInPhoto;
    _INPBStringList *_searchTerm;
}

+ (id)options;
@property(retain, nonatomic) _INPBContactList *peopleInPhoto; // @synthesize peopleInPhoto=_peopleInPhoto;
@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPeopleInPhoto;
- (int)StringAsExcludedAttributes:(id)arg1;
- (id)excludedAttributesAsString:(int)arg1;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (void)addExcludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
@property(readonly, nonatomic) int *excludedAttributes;
@property(readonly, nonatomic) unsigned long long excludedAttributesCount;
- (int)StringAsIncludedAttributes:(id)arg1;
- (id)includedAttributesAsString:(int)arg1;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearIncludedAttributes;
@property(readonly, nonatomic) int *includedAttributes;
@property(readonly, nonatomic) unsigned long long includedAttributesCount;
@property(readonly, nonatomic) BOOL hasSearchTerm;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(readonly, nonatomic) BOOL hasLocationCreated;
@property(readonly, nonatomic) BOOL hasDateCreated;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (void)dealloc;

@end

